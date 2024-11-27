#pragma once

#include "quantum.h"

enum custom_keycodes {
    PATHB = QK_KB_16,
    PATHH = QK_KB_17,
    TIDYP = QK_KB_18,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record);
