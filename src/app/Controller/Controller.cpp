#include "Controller.h"

Controller::Controller(Service *serv, ClockService *clockServ,TempHumidService *tempHumidService)
{
    
    this->service = serv;
    clockService = clockServ;
    this->tempHumidService = tempHumidService;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    if (strBtn == "modeButton")
    {
        service->updateState("modeButton");
    }
    if (strBtn == "powerButton")
    {
        service->updateState("powerButton");
    }
    if (strBtn == "clockUpdate")
    {
        clockService->updateEvent();
    }
}
void Controller::updateTempHumid(DHT_Data dhtData)
{
    tempHumidService->updateTempHumid(dhtData);
}