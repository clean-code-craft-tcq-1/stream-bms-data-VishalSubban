/************************ Includes **************************/
#include "bms-data.h"
/************************************************************/


/************************ Variables **************************/
bool isStopRequestedByUser = false;


/************************ Functions **************************/
int main()
{
    signal(SIGINT, sighandler);

    BmsDataSendToConsole();
    return 0;
}