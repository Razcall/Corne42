#pragma once

#define MORPH(name, k1, modifiers, k2) \
/ { \
  behaviors { \
    name: name { \
      compatible = "zmk,behavior-mod-morph"; \
      #binding-cells = <0>; \
      bindings = <k1>, <k2>; \
      mods = <(modifiers)>; \
    }; \
  }; \
};

#define TAPDANCE(name, ...) \
/ { \
  behaviors { \
    name: name {  \
      compatible = "zmk,behavior-tap-dance"; \
      #binding-cells = <0>; \
      bindings = __VA_ARGS__; \
    }; \
  }; \
};

#define MORPH_UP(name, k1, k2) MORPH(name, k1, MOD_LSFT|MOD_RSFT, k2)

#define MACRO(...) \
/ { \
  macros { \
    ZMK_MACRO(__VA_ARGS__) \
  }; \
};

#define COND_LAYER(if_layers, then_layer) \
/ { \
  conditional_layers { \
    compatible = "zmk,conditional-layers"; \
    then_layer##_cond_layer { \
      if-layers = <if_layers>; \
      then-layer = <then_layer>; \
    }; \
  }; \
};

#define LAYER(id, display_name, layout) \
/ { \
  keymap { \
    compatible = "zmk,keymap"; \
    id##_layer { \
      label = display_name; \
      bindings = <layout>; \
    }; \
  }; \
};

// Homerow mods macro
// Usage: HOMEROW_MODS(name, hold_behavior, tap_behavior, tapping_term_ms)
#define HOMEROW_MODS(name, hold_behavior, tap_behavior, tapping_term_ms) \
/ { \
  behaviors { \
    name: name { \
      compatible = "zmk,behavior-hold-tap"; \
      #binding-cells = <2>; \
      flavor = "tap-preferred"; \
      tapping-term-ms = <tapping_term_ms>; \
      quick-tap-ms = <175>; \
      global-quick-tap; \
      hold-trigger-on-release; \
      hold-trigger-key-positions = <0>; \
      bindings = <hold_behavior>, <tap_behavior>; \
    }; \
  }; \
};

// Convenience macro for common homerow mod sets
// Usage: HOMEROW_MODS_SET(prefix, tapping_term_ms)
#define HOMEROW_MODS_SET(prefix, tapping_term_ms) \
  HOMEROW_MODS(prefix##_l, &kp, &kp, tapping_term_ms) \
  HOMEROW_MODS(prefix##_r, &kp, &kp, tapping_term_ms)


