#include QMK_KEYBOARD_H

#define CWIN(kc) (QK_LGUI | QK_LCTL | (kc))

enum layers {
    BASE,
    GAME,
    NUM,
    FUNC,
    MOVE,
    SYM,
    SEL,
    I3,
    I3MV,
    I3WS,
    I3WSM,
    EMPTY,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox(
    KC_ESC,        LWIN(KC_1),    LWIN(KC_2),    LWIN(KC_3),    LWIN(KC_4),    LWIN(KC_5),    C(KC_KP_0),
    KC_TAB,        LT(I3WSM,KC_Q),LT(I3WS, KC_W),LT(I3MV, KC_E),LT(I3, KC_R),  KC_T,          C(KC_KP_PLUS),
    KC_CAPSLOCK,   LT(NUM, KC_A), LT(FUNC, KC_S),LT(SEL, KC_D), LT(MOVE, KC_F),KC_G,
    KC_LSHIFT,     LCTL_T(KC_Z),  KC_X,          KC_C,          KC_V,          KC_B,          C(KC_KP_MINUS),
    KC_LCTRL,      KC_LWIN,       _______,       _______,       KC_LALT,

                                                                               C(KC_X),       C(KC_C),
                                                                                              C(KC_V),
                                                                KC_SPACE,      KC_BSPACE,     C(KC_Z),

    KC_PAUSE,      KC_SYSREQ,     DM_REC1,       DM_RSTP,       DM_PLY1,       KC_MINUS,      KC_EQUAL,
    KC_VOLU,       KC_Y,          KC_U,          KC_I,          KC_O,          KC_P,          KC_BSLASH,
                   KC_H,          KC_J,          KC_K,          KC_L,       LT(SYM, KC_SCLN), KC_QUOTE,
    KC_VOLD,       KC_N,          KC_M,          KC_COMMA,      KC_DOT,     RCTL_T(KC_SLASH), KC_RSHIFT,
                                  KC_RALT,       _______,       _______,       KC_RWIN,       KC_RCTRL,

    RESET,         KC_INSERT,
    TO(GAME),
    C(KC_Y),       KC_DEL,        KC_ENT
),

[GAME] = LAYOUT_ergodox(
    KC_ESC,        KC_1,          KC_2,          KC_3,          KC_4,          KC_5,          KC_GRAVE,
    KC_TAB,        KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,          _______,
    KC_CAPSLOCK,   KC_A,          KC_S,          KC_D,          KC_F,          KC_G,
    KC_LSHIFT,     KC_Z,          KC_X,          KC_C,          KC_V,          KC_B,          _______,
    KC_LCTRL,      KC_LWIN,       _______,       _______,       KC_LALT,

                                                                               C(KC_X),       C(KC_C),
                                                                                              C(KC_V),
                                                                KC_SPACE,      KC_BSPACE,     C(KC_Z),

    _______,       KC_6,          KC_7,          KC_8,          KC_9,          KC_0,          _______,
    KC_VOLU,       KC_Y,          KC_U,          KC_I,          KC_O,          KC_P,          KC_BSLASH,
                   KC_H,          KC_J,          KC_K,          KC_L,          KC_SCLN,       KC_QUOTE,
    KC_VOLD,       KC_N,          KC_M,          KC_COMMA,      KC_DOT,        KC_SLASH,      KC_RSHIFT,
                                  KC_RALT,       _______,       _______,       KC_RWIN,       KC_RCTRL,

    _______,       KC_INSERT,
    TO(BASE),
    C(KC_Y),       KC_DEL,        KC_ENT
),

[NUM] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       KC_AMPERSAND,  KC_SLASH,      KC_ASTERISK,   KC_MINUS,      _______,
    _______,       _______,       KC_7,          KC_8,          KC_9,          KC_PLUS,       _______,
                   _______,       KC_4,          KC_5,          KC_6,          _______,       _______,
    _______,       KC_0,          KC_1,          KC_2,          KC_3,          _______,       _______,
                                  KC_0,          KC_COMMA,      KC_DOT,        _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[FUNC] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       KC_F10,        KC_F11,        KC_F12,        _______,       _______,
    _______,       _______,       KC_F7,         KC_F8,         KC_F9,         _______,       _______,
                   _______,       KC_F4,         KC_F5,         KC_F6,         _______,       _______,
    _______,       _______,       KC_F1,         KC_F2,         KC_F3,         _______,       _______,
                                  _______,       _______,      _______,        _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[SYM] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       KC_EXCLAIM,    KC_AT,         KC_LCBR,       KC_RCBR,       KC_PIPE,       _______,
    _______,       KC_HASH,       KC_DOLLAR,     KC_LPRN,       KC_RPRN,       KC_GRAVE,
    _______,       KC_PERCENT,    KC_CIRCUMFLEX, KC_LBRC,       KC_RBRC,       KC_TILDE,      _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
                   _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
                                  _______,       _______,       _______,       _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[MOVE] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       LCTL(KC_HOME), LCTL(KC_UP),   LCTL(KC_PGUP), _______,       _______,
    _______,       _______,       KC_HOME,       KC_UP,         KC_PGUP,       _______,       _______,
                   LCTL(KC_LEFT), KC_LEFT,       KC_DOWN,       KC_RIGHT,      LCTL(KC_RGHT), _______,
    _______,       _______,       KC_END,        KC_DOWN,       KC_PGDOWN,     _______,       _______,
                                  LCTL(KC_END),  LCTL(KC_DOWN), LCTL(KC_PGDN), _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[SEL] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       RCS(KC_HOME),  RCS(KC_UP),    RCS(KC_PGUP),   _______,       _______,
    _______,       _______,       S(KC_HOME),    S(KC_UP),      S(KC_PGUP),    _______,       _______,
                   RCS(KC_LEFT),  S(KC_LEFT),    S(KC_DOWN),    S(KC_RIGHT),   RCS(KC_RGHT),  _______,
    _______,       _______,       S(KC_END),     S(KC_DOWN),    S(KC_PGDOWN),  _______,       _______,
                                  RCS(KC_END),   RCS(KC_DOWN),  RCS(KC_PGDN),  _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[I3] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       LWIN(KC_UP),   _______,       _______,       _______,
                   _______,       LWIN(KC_LEFT), LWIN(KC_DOWN), LWIN(KC_RIGHT),_______,       _______,
    _______,       _______,       _______,       LWIN(KC_DOWN), _______,       _______,       _______,
                                  _______,       _______,       _______,       _______,       _______,

    _______,       _______,
    _______,
    _______,       LWIN(KC_F4),  LWIN(KC_ENTER)
),

[I3MV] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       SWIN(KC_UP),   _______,       _______,       _______,
                   _______,       SWIN(KC_LEFT), SWIN(KC_DOWN), SWIN(KC_RIGHT),_______,       _______,
    _______,       _______,       _______,       SWIN(KC_DOWN), _______,       _______,       _______,
                                  _______,       _______,       _______,       _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[I3WS] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       CWIN(KC_7),    CWIN(KC_8),    CWIN(KC_9),    _______,       _______,
                   _______,       CWIN(KC_4),    CWIN(KC_5),    CWIN(KC_6),    _______,       _______,
    _______,       _______,       CWIN(KC_1),    CWIN(KC_2),    CWIN(KC_3),    _______,       _______,
                                  _______,       _______,       _______,       _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[I3WSM] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       SWIN(KC_7),    SWIN(KC_8),    SWIN(KC_9),    _______,       _______,
                   _______,       SWIN(KC_4),    SWIN(KC_5),    SWIN(KC_6),    _______,       _______,
    _______,       _______,       SWIN(KC_1),    SWIN(KC_2),    SWIN(KC_3),    _______,       _______,
                                  _______,       _______,       _______,       _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),

[EMPTY] = LAYOUT_ergodox(
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,

                                                                               _______,       _______,
                                                                                              _______,
                                                                _______,       _______,       _______,

    _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
                   _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,
                                  _______,       _______,       _______,       _______,       _______,

    _______,       _______,
    _______,
    _______,       _______,       _______
),
};
// clang-format on

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    switch (get_highest_layer(state)) {
        case GAME:
            ergodox_right_led_1_on();
            break;

        default:
            break;
    }

    return state;
};
