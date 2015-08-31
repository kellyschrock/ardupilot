
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
    if(mParams->rtl_servo_channel > 0) {
        mServoRelayEvents->do_set_servo(mParams->rtl_servo_channel, mParams->rtl_servo_open_pwm);
    }
}

void AeroKontiki::close_hook() {
    if(mParams->rtl_servo_channel > 0) {
        mServoRelayEvents->do_set_servo(mParams->rtl_servo_channel, mParams->rtl_servo_close_pwm);
    }
}

