/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

#ifndef _AeroKontiki_h
#define _AeroKontiki_h

class AP_ServoRelayEvents;
class Parameters;

class AeroKontiki {
public:
    AeroKontiki(AP_ServoRelayEvents *events, Parameters *params)
    : mServoRelayEvents(events)
    , mParams(params)
    {}

    void on_rtl_start();
    void on_rtl_hover();

    void open_hook();
    void close_hook();

private:
    AP_ServoRelayEvents *mServoRelayEvents;
    Parameters *mParams;
};

void AeroKontiki_on_rtl();


#endif // _AeroKontiki_h
