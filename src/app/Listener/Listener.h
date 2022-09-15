#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "Controller.h"
#include "ClockCheck.h"
#include "DHT11.h"
#include "DHT_Data.h"

class Listener
{
private :
    Button *modeButton;
    Button *powerButton;
    ClockCheck *clockCheck;
    Controller *controller;
    DHT11 *dht11;


public:
    Listener(Button *modeButton, Button *powerbutton, Controller *control, ClockCheck *clock, DHT11 *dht11);
    virtual ~Listener();
    void checkEvent();
};

#endif /* __LISTENER_H__ */
