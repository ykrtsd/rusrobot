#pragma once

/**
 * TOPPERS API
 */
#include "../../../../../../include/kernel.h"
#include "../../../../../../include/t_syslog.h"
#include "../../../../../../include/t_stdlib.h"

/**
 * Newlib
 */
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * EV3 API
 */
#include "../../../../../common/ev3api/src/ev3api_button.h"
#include "../../../../../common/ev3api/src/ev3api_fs.h"
#include "../../../../../common/ev3api/src/ev3api_lcd.h"
#include "../../../../../common/ev3api/src/ev3api_led.h"
#include "../../../../../common/ev3api/src/ev3api_motor.h"
#include "../../../../../common/ev3api/src/ev3api_sensor.h"
#include "../../../../../common/ev3api/src/ev3api_speaker.h"
#include "../../../../../common/ev3api/src/ev3api_rtos.h"
#include "../../../../../common/ev3api/src/ev3api_battery.h"
#if !defined(TOPPERS_CFG1_OUT)
#include "../../../../../OBJ/ev3api_cfg.h"
#endif

/**
 * Kernel object ID
 */
#if !defined(TOPPERS_CFG1_OUT)
#if defined(BUILD_MODULE)
#include "module_cfg.h"
#else
#include "../../../../../../base-workspace/OBJ/kernel_cfg.h"
#endif
#endif

/**
 * Application initialize task
 */
extern void _app_init_task(intptr_t unused);

#ifdef __cplusplus
}
#endif
