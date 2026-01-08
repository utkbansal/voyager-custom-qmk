#define FLOW_TAP_TERM 100
#define CHORDAL_HOLD
#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 60000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "nAKZR/GGM6RG"
#define LAYER_STATE_8BIT
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

