// This file is autogenerated by VESC Tool

#ifndef CONF_DEFAULT_H_
#define CONF_DEFAULT_H_

// BMS ID
#ifndef CONF_CONTROLLER_ID
#define CONF_CONTROLLER_ID 10
#endif

// CAN Baud Rate
#ifndef CONF_CAN_BAUD_RATE
#define CONF_CAN_BAUD_RATE 2
#endif

// Number of Cells
#ifndef CONF_CELL_NUM
#define CONF_CELL_NUM 18
#endif

// Number of Temperature sensors
#ifndef CONF_TEMP_NUM
#define CONF_TEMP_NUM 0
#endif

// Balance Starting Voltage
#ifndef CONF_BALANCE_START
#define CONF_BALANCE_START 4
#endif

// Balance difference threshold
#ifndef CONF_BALANCE_DIFF
#define CONF_BALANCE_DIFF 0.01
#endif

// Soft Overvoltage
#ifndef CONF_SOFT_OVER
#define CONF_SOFT_OVER 4.1
#endif

// Soft Undervoltage
#ifndef CONF_SOFT_UNDER
#define CONF_SOFT_UNDER 3
#endif

// Hard Overvoltage
#ifndef CONF_HARD_OVER
#define CONF_HARD_OVER 4.2
#endif

// Hard Undervoltage
#ifndef CONF_HARD_UNDER
#define CONF_HARD_UNDER 4.2
#endif

// Charge Max Temp
#ifndef CONF_T_CHARGE_MAX
#define CONF_T_CHARGE_MAX 105
#endif

// Discharge Max Temp
#ifndef CONF_T_DISCHARGE_MAX
#define CONF_T_DISCHARGE_MAX 105
#endif

// Not used current threshold
#ifndef CONF_NOT_USED_THRESHOLD
#define CONF_NOT_USED_THRESHOLD 1
#endif

// Not Used Timeout
#ifndef CONF_NOT_USED_TIMEOUT
#define CONF_NOT_USED_TIMEOUT 1200000
#endif

// CONF_DEFAULT_H_
#endif
