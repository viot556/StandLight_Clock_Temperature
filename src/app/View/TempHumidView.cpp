#include "TempHumidView.h"

TempHumidView::TempHumidView(LCD *lcd)
{
    this->lcd = lcd;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumidData(float temp, float humid)
{
    char buff[30];
    sprintf(buff,"%fC, %f%",temp, humid);
    lcd->WriteStringXY(0,10,buff);
    printf("%s\n",buff);
}