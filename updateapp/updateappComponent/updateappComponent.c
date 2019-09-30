#include "legato.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
COMPONENT_INIT
{
	char cmd[200];
    LE_INFO("Hello, world.");
    LE_INFO("INSTALLING NEW APP\n");
    strcpy(cmd,"/legato/systems/current/bin/update /home/root/spi_bmi160.wp76xx.update");
   LE_INFO("EXECUTING %s\n",cmd);
    system(cmd);
    

    LE_INFO("INSTALLATION COMPLETE\n");
}
