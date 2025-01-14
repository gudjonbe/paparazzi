#ifndef AIRFRAME_H
#define AIRFRAME_H

#define AIRFRAME_NAME "DUMMY"
#define AC_ID 42

// basic plane
#define COMMAND_THROTTLE 0
#define COMMAND_ROLL 1
#define COMMAND_PITCH 2
#define COMMANDS_NB 3
#define COMMANDS_FAILSAFE {0,0,0}

// basic rotorcraft
//#define COMMAND_PITCH 0
//#define COMMAND_ROLL 1
#define COMMAND_YAW 2
#define COMMAND_THRUST 3

#define SetCommandsFromRC(_commands_array, _rc_array) { }
#define AllActuatorsInit() { }
#define AllActuatorsCommit() { }
#define SetActuatorsFromCommands(values, AP_MODE) { }

#define KILL_MODE_DISTANCE (1.5*MAX_DIST_FROM_HOME)
#define DEFAULT_CIRCLE_RADIUS 80.
#define NOMINAL_AIRSPEED 12.
#define CARROT 5.

#define V_CTL_AUTO_THROTTLE_NOMINAL_CRUISE_THROTTLE 0.4

#define SECTION_FAILSAFE 1
#define FAILSAFE_DELAY_WITHOUT_GPS 2
#define FAILSAFE_DEFAULT_THROTTLE 0.3
#define FAILSAFE_DEFAULT_ROLL 0.3
#define FAILSAFE_DEFAULT_PITCH 0.
#define FAILSAFE_HOME_RADIUS 100

#define SECTION_IMU 1
#define IMU_GYRO_P_SENS 4.359
#define IMU_GYRO_P_SENS_NUM 4359
#define IMU_GYRO_P_SENS_DEN 1000
#define IMU_GYRO_Q_SENS 4.359
#define IMU_GYRO_Q_SENS_NUM 4359
#define IMU_GYRO_Q_SENS_DEN 1000
#define IMU_GYRO_R_SENS 4.359
#define IMU_GYRO_R_SENS_NUM 4359
#define IMU_GYRO_R_SENS_DEN 1000
#define IMU_ACCEL_X_NEUTRAL -85
#define IMU_ACCEL_Y_NEUTRAL 51
#define IMU_ACCEL_Z_NEUTRAL -76
#define IMU_ACCEL_X_SENS 2.44493965424
#define IMU_ACCEL_X_SENS_NUM 61989
#define IMU_ACCEL_X_SENS_DEN 25354
#define IMU_ACCEL_Y_SENS 2.43424121497
#define IMU_ACCEL_Y_SENS_NUM 61579
#define IMU_ACCEL_Y_SENS_DEN 25297
#define IMU_ACCEL_Z_SENS 2.44715908645
#define IMU_ACCEL_Z_SENS_NUM 4307
#define IMU_ACCEL_Z_SENS_DEN 1760
#define IMU_MAG_X_NEUTRAL 0
#define IMU_MAG_Y_NEUTRAL 0
#define IMU_MAG_Z_NEUTRAL 0
#define IMU_MAG_X_SENS 7.28514789391
#define IMU_MAG_X_SENS_NUM 23888
#define IMU_MAG_X_SENS_DEN 3279
#define IMU_MAG_Y_SENS 7.33022132691
#define IMU_MAG_Y_SENS_NUM 21199
#define IMU_MAG_Y_SENS_DEN 2892
#define IMU_MAG_Z_SENS 7.57102035692
#define IMU_MAG_Z_SENS_NUM 63589
#define IMU_MAG_Z_SENS_DEN 8399
#define IMU_BODY_TO_IMU_PHI 0.
#define IMU_BODY_TO_IMU_THETA 0.
#define IMU_BODY_TO_IMU_PSI 0


#define SECTION_AHRS 1
#define AHRS_H_X 0.3892503
#define AHRS_H_Y 0.0017972
#define AHRS_H_Z 0.9211303

#define SECTION_INS 1
#define INS_H_X 0.3892503
#define INS_H_Y 0.0017972
#define INS_H_Z 0.9211303
#define INS_USE_GPS_ALT 1
#define INS_SONAR_MIN_RANGE 0.0
#define INS_SONAR_MAX_RANGE 3.5
#define INS_SONAR_UPDATE_ON_AGL TRUE
#define INS_ROLL_NEUTRAL_DEFAULT 0.
#define INS_PITCH_NEUTRAL_DEFAULT 0.

#endif // AIRFRAME_H
