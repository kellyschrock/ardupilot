
#include "Copter.h"
#include "AeroKontiki.h"

#define SERVO_HOOK_CHANNEL 9
#define SERVO_HOOK_PWM_OPEN 1100
#define SERVO_HOOK_PWM_CLOSE 1900

void AeroKontiki::on_rtl_start() {
    open_hook();
}

void AeroKontiki::on_rtl_hover() {
    close_hook();
}

void AeroKontiki::open_hook() {
    mServoRelayEvents->do_set_servo(SERVO_HOOK_CHANNEL, SERVO_HOOK_PWM_OPEN);
}

void AeroKontiki::close_hook() {
    mServoRelayEvents->do_set_servo(SERVO_HOOK_CHANNEL, SERVO_HOOK_PWM_CLOSE);
}

