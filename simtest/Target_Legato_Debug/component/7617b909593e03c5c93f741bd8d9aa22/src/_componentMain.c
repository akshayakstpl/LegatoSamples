/*
 * AUTO-GENERATED _componentMain.c for the simtestComponent component.

 * Don't bother hand-editing this file.
 */

#include "legato.h"
#include "../liblegato/eventLoop.h"
#include "../liblegato/log.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const char* _simtestComponent_le_sim_ServiceInstanceName;
const char** le_sim_ServiceInstanceNamePtr = &_simtestComponent_le_sim_ServiceInstanceName;
void le_sim_ConnectService(void);
extern const char* _simtestComponent_le_mrc_ServiceInstanceName;
const char** le_mrc_ServiceInstanceNamePtr = &_simtestComponent_le_mrc_ServiceInstanceName;
void le_mrc_ConnectService(void);
// Component log session variables.
le_log_SessionRef_t simtestComponent_LogSession;
le_log_Level_t* simtestComponent_LogLevelFilterPtr;

// Component initialization function (COMPONENT_INIT).
void _simtestComponent_COMPONENT_INIT(void);

// Library initialization function.
// Will be called by the dynamic linker loader when the library is loaded.
__attribute__((constructor)) void _simtestComponent_Init(void)
{
    LE_DEBUG("Initializing simtestComponent component library.");

    // Connect client-side IPC interfaces.
    le_sim_ConnectService();
    le_mrc_ConnectService();

    // Register the component with the Log Daemon.
    simtestComponent_LogSession = log_RegComponent("simtestComponent", &simtestComponent_LogLevelFilterPtr);

    //Queue the COMPONENT_INIT function to be called by the event loop
    event_QueueComponentInit(_simtestComponent_COMPONENT_INIT);
}


#ifdef __cplusplus
}
#endif
