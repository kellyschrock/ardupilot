/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

#ifndef _AeroKontiki_h
#define _AeroKontiki_h

class AP_ServoRelayEvents;

class AeroKontiki {
public:
    AeroKontiki(AP_ServoRelayEvents *events)
    : mServoRelayEvents(events)
    {}

    void on_rtl_start();
    void on_rtl_hover();

private:
    AP_ServoRelayEvents *mServoRelayEvents;

    void open_hook();
    void close_hook();
};

void AeroKontiki_on_rtl();


#endif // _AeroKontiki_h
