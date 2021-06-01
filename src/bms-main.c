/************************ INCLUDES **************************/
#include "bms-data.h"
/************************************************************/

int main()
{
    signal(SIGINT, sighandler);

    BmsDataSendToConsole();
    return 0;
}