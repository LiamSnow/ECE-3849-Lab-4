/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#include <xdc/std.h>

#include <ti/sysbios/family/arm/m3/Hwi.h>
extern const ti_sysbios_family_arm_m3_Hwi_Handle adc_hwi;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle waveform_task;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle processing_task;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle display_task;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle display_sem;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle waveform_sem;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle processing_sem;

#include <ti/sysbios/knl/Clock.h>
extern const ti_sysbios_knl_Clock_Handle button_clock;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle button_clock_sem;

#include <ti/sysbios/gates/GateHwi.h>
extern const ti_sysbios_gates_GateHwi_Handle gateHwi0;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle button_task;

#include <ti/sysbios/knl/Mailbox.h>
extern const ti_sysbios_knl_Mailbox_Handle buttons_mail;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle ui_task;

#include <ti/sysbios/gates/GateHwi.h>
extern const ti_sysbios_gates_GateHwi_Handle gateHwi1;

extern int xdc_runtime_Startup__EXECFXN__C;

extern int xdc_runtime_Startup__RESETFXN__C;

