/************************ INCLUDES **************************/
#include "bms-data.h"
/************************************************************/

bool isStopRequestedByUser = false;

int main()
{
    signal(SIGINT, sighandler);

    BmsDataSendToConsole();
    return 0;
}