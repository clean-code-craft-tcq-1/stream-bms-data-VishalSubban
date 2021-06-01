/************************ INCLUDES **************************/
#include "bms-data.h"
/************************************************************/


struct BatParams_s BatteryData[NumberOfParameters] = {{"Temperature", TEMPERATURE_MIN , TEMPERATURE_MAX},
                                                  {"ChargeRate", CHARGERATE_MIN , CHARGERATE_MAX}};

getBmsParamVal_funPtr getParamValue[NumberOfParameters] = {getBmsTemperatue , getBmsChargeRate};


void BmsDataSendToConsole()
{
    float BmsData[NumberOfParameters]; 
    int batteryParamIterater;

    do
    {
        isStopRequestedByUser = false;
        for (batteryParamIterater = 0 ; batteryParamIterater < NumberOfParameters; batteryParamIterater++)
        {
            BmsData[batteryParamIterater]= getParamValue[batteryParamIterater]();
        }
        BmsDataPrint(BmsData);
        sleep(SLEEP_TIME);
    }while(!isStopRequestedByUser);
}