bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case PATHB:
            if (record->event.pressed) {
                send_string("../");
            }
            return false;
        case PATHH:
            if (record->event.pressed) {
                send_string("~/");
            }
            return false;
        case TIDYP:
            if (record->event.pressed) {
                send_string("%>%");
            }
            return false;
        default:
            return true;
    }
}
