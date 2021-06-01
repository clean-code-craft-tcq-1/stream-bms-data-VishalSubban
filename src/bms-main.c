/************************ INCLUDES **************************/
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <stdbool.h>

#include "bms-data.h"
/************************************************************/

int main()
{
	signal(SIGINT, sighandler);
	
    BmsDataSendToConsole();
	return 0;
}