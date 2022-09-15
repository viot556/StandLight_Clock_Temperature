#ifndef __TEMPHUMIDSERVICE_H__
#define __TEMPHUMIDSERVICE_H__

#include "DHT_Data.h"
#include "TempHumidService.h"
#include "TempHumidView.h"


class TempHumidService
{
private:
    TempHumidView *tempHumidView;

public:
    TempHumidService(TempHumidView *tempHumidView);
    virtual ~TempHumidService();
    void updateTempHumid(DHT_Data dhtData);
};

#endif