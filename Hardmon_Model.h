//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Hardmon_CAN.h
//
// Code generated for Simulink model 'Hardmon_CAN'.
//
// Model version                  : 1.48
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Mon Mar 25 21:35:51 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Hardmon_CAN_h_
#define RTW_HEADER_Hardmon_CAN_h_
#include <stdbool.h>
#include <stdint.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model Hardmon_CAN
namespace VCU
{
    class Hardmon_CAN final
    {
        // public data and function members
      public:
        // Block signals (default storage)
        struct B_Hardmon_CAN_T {
            uint8_t nMC_Switch_EN;     // '<Root>/Chart'
            uint8_t Inverter_DIS_CAN;  // '<Root>/Chart'
            uint8_t MC_TOG_N_HM;       // '<Root>/Chart'
            uint8_t MC_TOG_P_HM;       // '<Root>/Chart'
            uint8_t nReset;            // '<Root>/Chart'
            uint8_t LVSS_EN_HM;        // '<Root>/Chart'
            uint8_t HM_Fault;          // '<Root>/Chart'
            uint8_t nLVSS_Switch_EN;   // '<Root>/Chart'
        };

        // Block states (default storage) for system '<Root>'
        struct DW_Hardmon_CAN_T {
            double pows[4];            // '<S3>/Binary to Scalar'
            uint8_t Memory_PreviousInput;// '<Root>/Memory'
            uint8_t Memory7_PreviousInput;// '<Root>/Memory7'
            uint8_t Memory6_PreviousInput;// '<Root>/Memory6'
            uint8_t Memory1_PreviousInput;// '<Root>/Memory1'
            uint8_t Memory2_PreviousInput;// '<Root>/Memory2'
            uint8_t Memory3_PreviousInput;// '<Root>/Memory3'
            uint8_t Memory4_PreviousInput;// '<Root>/Memory4'
            uint8_t Memory5_PreviousInput;// '<Root>/Memory5'
            uint8_t WD_Counter;        // '<Root>/Chart'
            uint8_t ESTOP_State_Counter;// '<Root>/Chart'
            uint8_t Ignition_State_Counter;// '<Root>/Chart'
            uint8_t Invalid_State_Counter;// '<Root>/Chart'
            uint8_t LVSS_Counter;      // '<Root>/Chart'
            uint8_t ESTOP_Counter;     // '<Root>/Chart'
            uint8_t is_active_c3_Hardmon_CAN;// '<Root>/Chart'
            uint8_t is_c3_Hardmon_CAN; // '<Root>/Chart'
            uint8_t is_ESTOP_Checking; // '<Root>/Chart'
            uint8_t is_Watchdog_Checking;// '<Root>/Chart'
            uint8_t is_Invalid_State_Checking;// '<Root>/Chart'
            uint8_t is_Ignition_Level_Checking;// '<Root>/Chart'
            uint8_t is_ESTOP_Level_Checking;// '<Root>/Chart'
            uint8_t is_LVSS_Checking;  // '<Root>/Chart'
            uint8_t temporalCounter_i1;// '<Root>/Chart'
            uint8_t temporalCounter_i2;// '<Root>/Chart'
            uint8_t temporalCounter_i3;// '<Root>/Chart'
            uint8_t temporalCounter_i4;// '<Root>/Chart'
            uint8_t temporalCounter_i5;// '<Root>/Chart'
            uint8_t temporalCounter_i6;// '<Root>/Chart'
        };

        // External inputs (root inport signals with default storage)
        struct ExtU_Hardmon_CAN_T {
            uint8_t Forward_EN_CAN;    // '<Root>/Forward_EN_CAN'
            uint8_t Ignition_12V0;     // '<Root>/Ignition_12V0'
            uint8_t Ignition_3V3;      // '<Root>/Ignition_3V3'
            uint8_t LVSS_Status_3V3;   // '<Root>/LVSS_Status_3V3'
            uint8_t MC_Status_3V3;     // '<Root>/MC_Status_3V3'
            uint8_t uC_State[4];       // '<Root>/uC_State'
            uint8_t ESTOP_12V0;        // '<Root>/ESTOP_12V0'
            uint8_t Discharge_SM_CAN;  // '<Root>/Discharge_SM_CAN'
            uint8_t Watchdog;          // '<Root>/Watchdog'
            uint8_t ESTOP_3V3;         // '<Root>/ESTOP_3V3'
            uint8_t LVSS_EN_uC;        // '<Root>/LVSS_EN_uC'
        };

        // External outputs (root outports fed by signals with default storage)
        struct ExtY_Hardmon_CAN_T {
            uint8_t nMC_Switch_EN;     // '<Root>/nMC_Switch_EN'
            uint8_t nLVSS_Switch_EN;   // '<Root>/nLVSS_Switch_EN'
            uint8_t Inverter_DIS_CAN;  // '<Root>/Inverter_DIS_CAN'
            uint8_t MC_TOG_N_HM;       // '<Root>/MC_TOG_N_HM'
            uint8_t MC_TOG_P_HM;       // '<Root>/MC_TOG_P_HM'
            uint8_t nReset;            // '<Root>/nReset'
            uint8_t LVSS_EN_HM;        // '<Root>/LVSS_EN_HM'
            uint8_t HM_Fault;          // '<Root>/HM_Fault'
        };

        // Real-time Model Data Structure
        struct RT_MODEL_Hardmon_CAN_T {
            const char * volatile errorStatus;
        };

        // Copy Constructor
        Hardmon_CAN(Hardmon_CAN const&) = delete;

        // Assignment Operator
        Hardmon_CAN& operator= (Hardmon_CAN const&) & = delete;

        // Move Constructor
        Hardmon_CAN(Hardmon_CAN &&) = delete;

        // Move Assignment Operator
        Hardmon_CAN& operator= (Hardmon_CAN &&) = delete;

        // Real-Time Model get method
        Hardmon_CAN::RT_MODEL_Hardmon_CAN_T * getRTM();

        // Root inports set method
        void setExternalInputs(const ExtU_Hardmon_CAN_T *pExtU_Hardmon_CAN_T)
        {
            Hardmon_CAN_U = *pExtU_Hardmon_CAN_T;
        }

        // Root outports get method
        const ExtY_Hardmon_CAN_T &getExternalOutputs() const
        {
            return Hardmon_CAN_Y;
        }

        // model initialize function
        void initialize();

        // model step function
        void step();

        // model terminate function
        static void terminate();

        // Constructor
        Hardmon_CAN();

        // Destructor
        ~Hardmon_CAN();

        // private data and function members
      private:
        // External inputs
        ExtU_Hardmon_CAN_T Hardmon_CAN_U;

        // External outputs
        ExtY_Hardmon_CAN_T Hardmon_CAN_Y;

        // Block signals
        B_Hardmon_CAN_T Hardmon_CAN_B;

        // Block states
        DW_Hardmon_CAN_T Hardmon_CAN_DW;

        // private member function(s) for subsystem '<Root>'
        void Hardmon__Invalid_State_Checking(const uint8_t *DataTypeConversion);
        void exit_internal_Normal_Operation(void);
        void Hardmon_CAN_Normal_Operation(const uint8_t *DataTypeConversion);
        void enter_internal_Normal_Operation(void);

        // Real-Time Model
        RT_MODEL_Hardmon_CAN_T Hardmon_CAN_M;
    };
}

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Hardmon_CAN'
//  '<S1>'   : 'Hardmon_CAN/Binary Vector Conversion'
//  '<S2>'   : 'Hardmon_CAN/Chart'
//  '<S3>'   : 'Hardmon_CAN/Binary Vector Conversion/From Unipolar'
//  '<S4>'   : 'Hardmon_CAN/Binary Vector Conversion/From Unipolar/Binary to Scalar'
//  '<S5>'   : 'Hardmon_CAN/Binary Vector Conversion/From Unipolar/InputInvert'
//  '<S6>'   : 'Hardmon_CAN/Binary Vector Conversion/From Unipolar/InputInvert/off'

#endif                                 // RTW_HEADER_Hardmon_CAN_h_

//
// File trailer for generated code.
//
// [EOF]
//
