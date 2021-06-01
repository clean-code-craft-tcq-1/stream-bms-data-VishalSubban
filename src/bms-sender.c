/************************ INCLUDES **************************/
#include "bms-data.h"
/************************************************************/


BatParams_s BatteryData[NumberOfParameters] = {{"Temperature", TEMPERATURE_MIN , TEMPERATURE_MAX},
                                                  {"ChargeRate", CHARGERATE_MIN , CHARGERATE_MAX}};

getBmsParamVal_funPtr getParamValue[NumberOfParameters] = {getBmsTemperatue , getBmsChargeRate};


void BmsDataSendToConsole()
{
    float BmsData[NumberOfParameters]; 
    int batteryParamIterater;

    #ifndef UNIT_TEST
    int count = 0;
    while(count != 30)
    {
        count++;
    #else
    while(!isStopRequestedByUser)
    {
    #endif
        for (batteryParamIterater = 0 ; batteryParamIterater < NumberOfParameters; batteryParamIterater++)
        {
            BmsData[batteryParamIterater]= getParamValue[batteryParamIterater]();
        }
        BmsDataPrint(BmsData);
        sleep(SLEEP_TIME);
        #ifdef UNIT_TEST
        break;
        #endif
    }

}