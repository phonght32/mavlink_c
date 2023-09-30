/** @file
 *  @brief MAVLink comm protocol generated from storm32.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_STORM32_H
#define MAVLINK_STORM32_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_STORM32.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_STORM32_XML_HASH -953128208039990087

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {9, 31, 12, 0, 14, 28, 3, 32, 36, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 20, 2, 25, 23, 30, 101, 22, 26, 16, 14, 28, 32, 28, 28, 22, 22, 21, 6, 6, 37, 4, 4, 2, 2, 4, 2, 2, 3, 13, 12, 37, 4, 0, 0, 27, 25, 0, 0, 0, 0, 0, 72, 26, 181, 225, 42, 6, 4, 0, 11, 18, 0, 0, 37, 20, 35, 33, 3, 0, 0, 4, 22, 39, 37, 53, 51, 53, 51, 0, 28, 56, 42, 33, 81, 0, 0, 0, 0, 0, 0, 26, 32, 32, 20, 32, 62, 44, 64, 84, 9, 254, 16, 12, 36, 44, 64, 22, 6, 14, 12, 97, 2, 2, 113, 35, 6, 79, 35, 35, 22, 13, 255, 14, 18, 43, 8, 22, 14, 36, 43, 41, 32, 243, 14, 93, 0, 100, 36, 60, 30, 42, 8, 4, 12, 15, 13, 6, 15, 14, 0, 12, 3, 8, 28, 44, 3, 9, 22, 12, 18, 34, 66, 98, 8, 48, 19, 3, 20, 24, 29, 45, 4, 40, 2, 206, 7, 29, 0, 0, 0, 0, 27, 44, 22, 25, 37, 0, 0, 0, 0, 42, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 3, 3, 6, 7, 2, 0, 0, 0, 0, 0, 65, 8, 0, 0, 0, 42, 40, 63, 182, 40, 42, 0, 0, 0, 0, 0, 32, 52, 53, 6, 2, 38, 19, 254, 36, 30, 18, 18, 51, 9, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {50, 124, 137, 0, 237, 217, 104, 119, 117, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 214, 159, 220, 168, 24, 23, 170, 144, 67, 115, 39, 246, 185, 104, 237, 244, 222, 212, 9, 254, 230, 28, 28, 132, 221, 232, 11, 153, 41, 39, 78, 196, 0, 0, 15, 3, 0, 0, 0, 0, 0, 167, 183, 119, 191, 118, 148, 21, 0, 243, 124, 0, 0, 38, 20, 158, 152, 143, 0, 0, 14, 106, 49, 22, 143, 140, 5, 150, 0, 231, 183, 63, 54, 47, 0, 0, 0, 0, 0, 0, 175, 102, 158, 208, 56, 93, 138, 108, 32, 185, 84, 34, 174, 124, 237, 4, 76, 128, 56, 116, 134, 237, 203, 250, 87, 203, 220, 25, 226, 46, 29, 223, 85, 6, 229, 203, 1, 195, 109, 168, 181, 47, 72, 131, 127, 0, 103, 154, 178, 200, 134, 219, 208, 188, 84, 22, 19, 21, 134, 0, 78, 68, 189, 127, 154, 21, 21, 144, 1, 234, 73, 181, 22, 83, 167, 138, 234, 240, 47, 189, 52, 174, 229, 85, 159, 186, 72, 0, 0, 0, 0, 92, 36, 71, 98, 120, 0, 0, 0, 0, 134, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 101, 50, 202, 17, 162, 0, 0, 0, 0, 0, 208, 207, 0, 0, 0, 163, 105, 151, 35, 150, 179, 0, 0, 0, 0, 0, 90, 104, 85, 95, 130, 184, 81, 8, 204, 49, 170, 44, 83, 46, 0}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_STORM32

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_MAV_STORM32_TUNNEL_PAYLOAD_TYPE
#define HAVE_ENUM_MAV_STORM32_TUNNEL_PAYLOAD_TYPE
typedef enum MAV_STORM32_TUNNEL_PAYLOAD_TYPE
{
   MAV_STORM32_TUNNEL_PAYLOAD_TYPE_STORM32_CH1_IN=200, /* Registered for STorM32 gimbal controller. For communication with gimbal or camera. | */
   MAV_STORM32_TUNNEL_PAYLOAD_TYPE_STORM32_CH1_OUT=201, /* Registered for STorM32 gimbal controller. For communication with gimbal or camera. | */
   MAV_STORM32_TUNNEL_PAYLOAD_TYPE_STORM32_CH2_IN=202, /* Registered for STorM32 gimbal controller. For communication with gimbal. | */
   MAV_STORM32_TUNNEL_PAYLOAD_TYPE_STORM32_CH2_OUT=203, /* Registered for STorM32 gimbal controller. For communication with gimbal. | */
   MAV_STORM32_TUNNEL_PAYLOAD_TYPE_STORM32_CH3_IN=204, /* Registered for STorM32 gimbal controller. For communication with camera. | */
   MAV_STORM32_TUNNEL_PAYLOAD_TYPE_STORM32_CH3_OUT=205, /* Registered for STorM32 gimbal controller. For communication with camera. | */
   MAV_STORM32_TUNNEL_PAYLOAD_TYPE_ENUM_END=206, /*  | */
} MAV_STORM32_TUNNEL_PAYLOAD_TYPE;
#endif

/** @brief STorM32 gimbal prearm check flags. */
#ifndef HAVE_ENUM_MAV_STORM32_GIMBAL_PREARM_FLAGS
#define HAVE_ENUM_MAV_STORM32_GIMBAL_PREARM_FLAGS
typedef enum MAV_STORM32_GIMBAL_PREARM_FLAGS
{
   MAV_STORM32_GIMBAL_PREARM_FLAGS_IS_NORMAL=1, /* STorM32 gimbal is in normal state. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_IMUS_WORKING=2, /* The IMUs are healthy and working normally. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_MOTORS_WORKING=4, /* The motors are active and working normally. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_ENCODERS_WORKING=8, /* The encoders are healthy and working normally. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_VOLTAGE_OK=16, /* A battery voltage is applied and is in range. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_VIRTUALCHANNELS_RECEIVING=32, /* Virtual input channels are receiving data. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_MAVLINK_RECEIVING=64, /* Mavlink messages are being received. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_STORM32LINK_QFIX=128, /* The STorM32Link data indicates QFix. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_STORM32LINK_WORKING=256, /* The STorM32Link is working. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_CAMERA_CONNECTED=512, /* The camera has been found and is connected. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_AUX0_LOW=1024, /* The signal on the AUX0 input pin is low. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_AUX1_LOW=2048, /* The signal on the AUX1 input pin is low. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_NTLOGGER_WORKING=4096, /* The NTLogger is working normally. | */
   MAV_STORM32_GIMBAL_PREARM_FLAGS_ENUM_END=4097, /*  | */
} MAV_STORM32_GIMBAL_PREARM_FLAGS;
#endif

/** @brief STorM32 camera prearm check flags. */
#ifndef HAVE_ENUM_MAV_STORM32_CAMERA_PREARM_FLAGS
#define HAVE_ENUM_MAV_STORM32_CAMERA_PREARM_FLAGS
typedef enum MAV_STORM32_CAMERA_PREARM_FLAGS
{
   MAV_STORM32_CAMERA_PREARM_FLAGS_CONNECTED=1, /* The camera has been found and is connected. | */
   MAV_STORM32_CAMERA_PREARM_FLAGS_ENUM_END=2, /*  | */
} MAV_STORM32_CAMERA_PREARM_FLAGS;
#endif

/** @brief Gimbal manager capability flags. */
#ifndef HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS
#define HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS
typedef enum MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS
{
   MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS_HAS_PROFILES=1, /* The gimbal manager supports several profiles. | */
   MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS_ENUM_END=2, /*  | */
} MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS;
#endif

/** @brief Flags for gimbal manager operation. Used for setting and reporting, unless specified otherwise. If a setting has been accepted by the gimbal manager is reported in the STORM32_GIMBAL_MANAGER_STATUS message. */
#ifndef HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_FLAGS
#define HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_FLAGS
typedef enum MAV_STORM32_GIMBAL_MANAGER_FLAGS
{
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_NONE=0, /* 0 = ignore. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_RC_ACTIVE=1, /* Request to set RC input to active, or report RC input is active. Implies RC mixed. RC exclusive is achieved by setting all clients to inactive. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_ONBOARD_ACTIVE=2, /* Request to set onboard/companion computer client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_AUTOPILOT_ACTIVE=4, /* Request to set autopliot client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_GCS_ACTIVE=8, /* Request to set GCS client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_CAMERA_ACTIVE=16, /* Request to set camera client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_GCS2_ACTIVE=32, /* Request to set GCS2 client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_CAMERA2_ACTIVE=64, /* Request to set camera2 client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_CUSTOM_ACTIVE=128, /* Request to set custom client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_CLIENT_CUSTOM2_ACTIVE=256, /* Request to set custom2 client to active, or report this client is active. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_SET_SUPERVISON=512, /* Request supervision. This flag is only for setting, it is not reported. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_SET_RELEASE=1024, /* Release supervision. This flag is only for setting, it is not reported. | */
   MAV_STORM32_GIMBAL_MANAGER_FLAGS_ENUM_END=1025, /*  | */
} MAV_STORM32_GIMBAL_MANAGER_FLAGS;
#endif

/** @brief Gimbal manager client ID. In a prioritizing profile, the priorities are determined by the implementation; they could e.g. be custom1 > onboard > GCS > autopilot/camera > GCS2 > custom2. */
#ifndef HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_CLIENT
#define HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_CLIENT
typedef enum MAV_STORM32_GIMBAL_MANAGER_CLIENT
{
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_NONE=0, /* For convenience. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_ONBOARD=1, /* This is the onboard/companion computer client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_AUTOPILOT=2, /* This is the autopilot client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_GCS=3, /* This is the GCS client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_CAMERA=4, /* This is the camera client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_GCS2=5, /* This is the GCS2 client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_CAMERA2=6, /* This is the camera2 client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_CUSTOM=7, /* This is the custom client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_CUSTOM2=8, /* This is the custom2 client. | */
   MAV_STORM32_GIMBAL_MANAGER_CLIENT_ENUM_END=9, /*  | */
} MAV_STORM32_GIMBAL_MANAGER_CLIENT;
#endif

/** @brief Gimbal manager profiles. Only standard profiles are defined. Any implementation can define its own profile(s) in addition, and should use enum values > 16. */
#ifndef HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_PROFILE
#define HAVE_ENUM_MAV_STORM32_GIMBAL_MANAGER_PROFILE
typedef enum MAV_STORM32_GIMBAL_MANAGER_PROFILE
{
   MAV_STORM32_GIMBAL_MANAGER_PROFILE_DEFAULT=0, /* Default profile. Implementation specific. | */
   MAV_STORM32_GIMBAL_MANAGER_PROFILE_CUSTOM=1, /* Not supported/deprecated. | */
   MAV_STORM32_GIMBAL_MANAGER_PROFILE_COOPERATIVE=2, /* Profile with cooperative behavior. | */
   MAV_STORM32_GIMBAL_MANAGER_PROFILE_EXCLUSIVE=3, /* Profile with exclusive behavior. | */
   MAV_STORM32_GIMBAL_MANAGER_PROFILE_PRIORITY_COOPERATIVE=4, /* Profile with priority and cooperative behavior for equal priority. | */
   MAV_STORM32_GIMBAL_MANAGER_PROFILE_PRIORITY_EXCLUSIVE=5, /* Profile with priority and exclusive behavior for equal priority. | */
   MAV_STORM32_GIMBAL_MANAGER_PROFILE_ENUM_END=6, /*  | */
} MAV_STORM32_GIMBAL_MANAGER_PROFILE;
#endif

/** @brief Enumeration of possible shot modes. */
#ifndef HAVE_ENUM_MAV_QSHOT_MODE
#define HAVE_ENUM_MAV_QSHOT_MODE
typedef enum MAV_QSHOT_MODE
{
   MAV_QSHOT_MODE_UNDEFINED=0, /* Undefined shot mode. Can be used to determine if qshots should be used or not. | */
   MAV_QSHOT_MODE_DEFAULT=1, /* Start normal gimbal operation. Is usually used to return back from a shot. | */
   MAV_QSHOT_MODE_GIMBAL_RETRACT=2, /* Load and keep safe gimbal position and stop stabilization. | */
   MAV_QSHOT_MODE_GIMBAL_NEUTRAL=3, /* Load neutral gimbal position and keep it while stabilizing. | */
   MAV_QSHOT_MODE_GIMBAL_MISSION=4, /* Start mission with gimbal control. | */
   MAV_QSHOT_MODE_GIMBAL_RC_CONTROL=5, /* Start RC gimbal control. | */
   MAV_QSHOT_MODE_POI_TARGETING=6, /* Start gimbal tracking the point specified by Lat, Lon, Alt. | */
   MAV_QSHOT_MODE_SYSID_TARGETING=7, /* Start gimbal tracking the system with specified system ID. | */
   MAV_QSHOT_MODE_CABLECAM_2POINT=8, /* Start 2-point cable cam quick shot. | */
   MAV_QSHOT_MODE_HOME_TARGETING=9, /* Start gimbal tracking the home location. | */
   MAV_QSHOT_MODE_ENUM_END=10, /*  | */
} MAV_QSHOT_MODE;
#endif

/** @brief RADIO_RC_CHANNELS flags (bitmask). */
#ifndef HAVE_ENUM_RADIO_RC_CHANNELS_FLAGS
#define HAVE_ENUM_RADIO_RC_CHANNELS_FLAGS
typedef enum RADIO_RC_CHANNELS_FLAGS
{
   RADIO_RC_CHANNELS_FLAGS_FAILSAFE=1, /* Failsafe is active. | */
   RADIO_RC_CHANNELS_FLAGS_FRAME_MISSED=2, /* Indicates that the current frame has not been received. Channel values are frozen. | */
   RADIO_RC_CHANNELS_FLAGS_ENUM_END=3, /*  | */
} RADIO_RC_CHANNELS_FLAGS;
#endif

/** @brief RADIO_LINK_STATS flags (bitmask). */
#ifndef HAVE_ENUM_RADIO_LINK_STATS_FLAGS
#define HAVE_ENUM_RADIO_LINK_STATS_FLAGS
typedef enum RADIO_LINK_STATS_FLAGS
{
   RADIO_LINK_STATS_FLAGS_RSSI_DBM=1, /* Rssi are in negative dBm. Values 0..254 corresponds to 0..-254 dBm. | */
   RADIO_LINK_STATS_FLAGS_ENUM_END=2, /*  | */
} RADIO_LINK_STATS_FLAGS;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

// MESSAGE DEFINITIONS


// base include
#include "../ardupilotmega/ardupilotmega.h"


#if MAVLINK_STORM32_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, MAVLINK_MESSAGE_INFO_LINK_NODE_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SET_MODE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_COMMAND_CANCEL, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, MAVLINK_MESSAGE_INFO_HIL_ACTUATOR_CONTROLS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, MAVLINK_MESSAGE_INFO_SENSOR_OFFSETS, MAVLINK_MESSAGE_INFO_SET_MAG_OFFSETS, MAVLINK_MESSAGE_INFO_MEMINFO, MAVLINK_MESSAGE_INFO_AP_ADC, MAVLINK_MESSAGE_INFO_DIGICAM_CONFIGURE, MAVLINK_MESSAGE_INFO_DIGICAM_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_CONFIGURE, MAVLINK_MESSAGE_INFO_MOUNT_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_FENCE_POINT, MAVLINK_MESSAGE_INFO_FENCE_FETCH_POINT, MAVLINK_MESSAGE_INFO_FENCE_STATUS, MAVLINK_MESSAGE_INFO_AHRS, MAVLINK_MESSAGE_INFO_SIMSTATE, MAVLINK_MESSAGE_INFO_HWSTATUS, MAVLINK_MESSAGE_INFO_RADIO, MAVLINK_MESSAGE_INFO_LIMITS_STATUS, MAVLINK_MESSAGE_INFO_WIND, MAVLINK_MESSAGE_INFO_DATA16, MAVLINK_MESSAGE_INFO_DATA32, MAVLINK_MESSAGE_INFO_DATA64, MAVLINK_MESSAGE_INFO_DATA96, MAVLINK_MESSAGE_INFO_RANGEFINDER, MAVLINK_MESSAGE_INFO_AIRSPEED_AUTOCAL, MAVLINK_MESSAGE_INFO_RALLY_POINT, MAVLINK_MESSAGE_INFO_RALLY_FETCH_POINT, MAVLINK_MESSAGE_INFO_COMPASSMOT_STATUS, MAVLINK_MESSAGE_INFO_AHRS2, MAVLINK_MESSAGE_INFO_CAMERA_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_FEEDBACK, MAVLINK_MESSAGE_INFO_BATTERY2, MAVLINK_MESSAGE_INFO_AHRS3, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION_REQUEST, MAVLINK_MESSAGE_INFO_REMOTE_LOG_DATA_BLOCK, MAVLINK_MESSAGE_INFO_REMOTE_LOG_BLOCK_STATUS, MAVLINK_MESSAGE_INFO_LED_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MAG_CAL_PROGRESS, MAVLINK_MESSAGE_INFO_MAG_CAL_REPORT, MAVLINK_MESSAGE_INFO_EKF_STATUS_REPORT, MAVLINK_MESSAGE_INFO_PID_TUNING, MAVLINK_MESSAGE_INFO_DEEPSTALL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_REPORT, MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_TORQUE_CMD_REPORT, MAVLINK_MESSAGE_INFO_GOPRO_HEARTBEAT, MAVLINK_MESSAGE_INFO_GOPRO_GET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_GET_RESPONSE, MAVLINK_MESSAGE_INFO_GOPRO_SET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_SET_RESPONSE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_EFI_STATUS, MAVLINK_MESSAGE_INFO_RPM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, MAVLINK_MESSAGE_INFO_GPS_INPUT, MAVLINK_MESSAGE_INFO_GPS_RTCM_DATA, MAVLINK_MESSAGE_INFO_HIGH_LATENCY, MAVLINK_MESSAGE_INFO_HIGH_LATENCY2, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, MAVLINK_MESSAGE_INFO_COLLISION, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
# define MAVLINK_MESSAGE_NAMES {{ "ACTUATOR_CONTROL_TARGET", 140 }, { "ADSB_VEHICLE", 246 }, { "AHRS", 163 }, { "AHRS2", 178 }, { "AHRS3", 182 }, { "AIRSPEED_AUTOCAL", 174 }, { "ALTITUDE", 141 }, { "AP_ADC", 153 }, { "ATTITUDE", 30 }, { "ATTITUDE_QUATERNION", 31 }, { "ATTITUDE_QUATERNION_COV", 61 }, { "ATTITUDE_TARGET", 83 }, { "ATT_POS_MOCAP", 138 }, { "AUTH_KEY", 7 }, { "AUTOPILOT_VERSION", 148 }, { "AUTOPILOT_VERSION_REQUEST", 183 }, { "BATTERY2", 181 }, { "BATTERY_STATUS", 147 }, { "CAMERA_FEEDBACK", 180 }, { "CAMERA_STATUS", 179 }, { "CAMERA_TRIGGER", 112 }, { "CHANGE_OPERATOR_CONTROL", 5 }, { "CHANGE_OPERATOR_CONTROL_ACK", 6 }, { "COLLISION", 247 }, { "COMMAND_ACK", 77 }, { "COMMAND_CANCEL", 80 }, { "COMMAND_INT", 75 }, { "COMMAND_LONG", 76 }, { "COMPASSMOT_STATUS", 177 }, { "CONTROL_SYSTEM_STATE", 146 }, { "DATA16", 169 }, { "DATA32", 170 }, { "DATA64", 171 }, { "DATA96", 172 }, { "DATA_STREAM", 67 }, { "DATA_TRANSMISSION_HANDSHAKE", 130 }, { "DEBUG", 254 }, { "DEBUG_VECT", 250 }, { "DEEPSTALL", 195 }, { "DIGICAM_CONFIGURE", 154 }, { "DIGICAM_CONTROL", 155 }, { "DISTANCE_SENSOR", 132 }, { "EFI_STATUS", 225 }, { "EKF_STATUS_REPORT", 193 }, { "ENCAPSULATED_DATA", 131 }, { "ESTIMATOR_STATUS", 230 }, { "EXTENDED_SYS_STATE", 245 }, { "FENCE_FETCH_POINT", 161 }, { "FENCE_POINT", 160 }, { "FENCE_STATUS", 162 }, { "FILE_TRANSFER_PROTOCOL", 110 }, { "FOLLOW_TARGET", 144 }, { "GIMBAL_CONTROL", 201 }, { "GIMBAL_REPORT", 200 }, { "GIMBAL_TORQUE_CMD_REPORT", 214 }, { "GLOBAL_POSITION_INT", 33 }, { "GLOBAL_POSITION_INT_COV", 63 }, { "GLOBAL_VISION_POSITION_ESTIMATE", 101 }, { "GOPRO_GET_REQUEST", 216 }, { "GOPRO_GET_RESPONSE", 217 }, { "GOPRO_HEARTBEAT", 215 }, { "GOPRO_SET_REQUEST", 218 }, { "GOPRO_SET_RESPONSE", 219 }, { "GPS2_RAW", 124 }, { "GPS2_RTK", 128 }, { "GPS_GLOBAL_ORIGIN", 49 }, { "GPS_INJECT_DATA", 123 }, { "GPS_INPUT", 232 }, { "GPS_RAW_INT", 24 }, { "GPS_RTCM_DATA", 233 }, { "GPS_RTK", 127 }, { "GPS_STATUS", 25 }, { "HEARTBEAT", 0 }, { "HIGHRES_IMU", 105 }, { "HIGH_LATENCY", 234 }, { "HIGH_LATENCY2", 235 }, { "HIL_ACTUATOR_CONTROLS", 93 }, { "HIL_CONTROLS", 91 }, { "HIL_GPS", 113 }, { "HIL_OPTICAL_FLOW", 114 }, { "HIL_RC_INPUTS_RAW", 92 }, { "HIL_SENSOR", 107 }, { "HIL_STATE", 90 }, { "HIL_STATE_QUATERNION", 115 }, { "HOME_POSITION", 242 }, { "HWSTATUS", 165 }, { "LANDING_TARGET", 149 }, { "LED_CONTROL", 186 }, { "LIMITS_STATUS", 167 }, { "LINK_NODE_STATUS", 8 }, { "LOCAL_POSITION_NED", 32 }, { "LOCAL_POSITION_NED_COV", 64 }, { "LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET", 89 }, { "LOG_DATA", 120 }, { "LOG_ENTRY", 118 }, { "LOG_ERASE", 121 }, { "LOG_REQUEST_DATA", 119 }, { "LOG_REQUEST_END", 122 }, { "LOG_REQUEST_LIST", 117 }, { "MAG_CAL_PROGRESS", 191 }, { "MAG_CAL_REPORT", 192 }, { "MANUAL_CONTROL", 69 }, { "MANUAL_SETPOINT", 81 }, { "MEMINFO", 152 }, { "MEMORY_VECT", 249 }, { "MESSAGE_INTERVAL", 244 }, { "MISSION_ACK", 47 }, { "MISSION_CLEAR_ALL", 45 }, { "MISSION_COUNT", 44 }, { "MISSION_CURRENT", 42 }, { "MISSION_ITEM", 39 }, { "MISSION_ITEM_INT", 73 }, { "MISSION_ITEM_REACHED", 46 }, { "MISSION_REQUEST", 40 }, { "MISSION_REQUEST_INT", 51 }, { "MISSION_REQUEST_LIST", 43 }, { "MISSION_REQUEST_PARTIAL_LIST", 37 }, { "MISSION_SET_CURRENT", 41 }, { "MISSION_WRITE_PARTIAL_LIST", 38 }, { "MOUNT_CONFIGURE", 156 }, { "MOUNT_CONTROL", 157 }, { "MOUNT_STATUS", 158 }, { "NAMED_VALUE_FLOAT", 251 }, { "NAMED_VALUE_INT", 252 }, { "NAV_CONTROLLER_OUTPUT", 62 }, { "OPTICAL_FLOW", 100 }, { "OPTICAL_FLOW_RAD", 106 }, { "PARAM_MAP_RC", 50 }, { "PARAM_REQUEST_LIST", 21 }, { "PARAM_REQUEST_READ", 20 }, { "PARAM_SET", 23 }, { "PARAM_VALUE", 22 }, { "PID_TUNING", 194 }, { "PING", 4 }, { "POSITION_TARGET_GLOBAL_INT", 87 }, { "POSITION_TARGET_LOCAL_NED", 85 }, { "POWER_STATUS", 125 }, { "RADIO", 166 }, { "RADIO_STATUS", 109 }, { "RALLY_FETCH_POINT", 176 }, { "RALLY_POINT", 175 }, { "RANGEFINDER", 173 }, { "RAW_IMU", 27 }, { "RAW_PRESSURE", 28 }, { "RC_CHANNELS", 65 }, { "RC_CHANNELS_OVERRIDE", 70 }, { "RC_CHANNELS_RAW", 35 }, { "RC_CHANNELS_SCALED", 34 }, { "REMOTE_LOG_BLOCK_STATUS", 185 }, { "REMOTE_LOG_DATA_BLOCK", 184 }, { "REQUEST_DATA_STREAM", 66 }, { "RESOURCE_REQUEST", 142 }, { "RPM", 226 }, { "SAFETY_ALLOWED_AREA", 55 }, { "SAFETY_SET_ALLOWED_AREA", 54 }, { "SCALED_IMU", 26 }, { "SCALED_IMU2", 116 }, { "SCALED_IMU3", 129 }, { "SCALED_PRESSURE", 29 }, { "SCALED_PRESSURE2", 137 }, { "SCALED_PRESSURE3", 143 }, { "SENSOR_OFFSETS", 150 }, { "SERIAL_CONTROL", 126 }, { "SERVO_OUTPUT_RAW", 36 }, { "SET_ACTUATOR_CONTROL_TARGET", 139 }, { "SET_ATTITUDE_TARGET", 82 }, { "SET_GPS_GLOBAL_ORIGIN", 48 }, { "SET_HOME_POSITION", 243 }, { "SET_MAG_OFFSETS", 151 }, { "SET_MODE", 11 }, { "SET_POSITION_TARGET_GLOBAL_INT", 86 }, { "SET_POSITION_TARGET_LOCAL_NED", 84 }, { "SIMSTATE", 164 }, { "SIM_STATE", 108 }, { "STATUSTEXT", 253 }, { "SYSTEM_TIME", 2 }, { "SYS_STATUS", 1 }, { "TERRAIN_CHECK", 135 }, { "TERRAIN_DATA", 134 }, { "TERRAIN_REPORT", 136 }, { "TERRAIN_REQUEST", 133 }, { "TIMESYNC", 111 }, { "V2_EXTENSION", 248 }, { "VFR_HUD", 74 }, { "VIBRATION", 241 }, { "VICON_POSITION_ESTIMATE", 104 }, { "VISION_POSITION_ESTIMATE", 102 }, { "VISION_SPEED_ESTIMATE", 103 }, { "WIND", 168 }, { "WIND_COV", 231 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_STORM32_H
