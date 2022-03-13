
/*******************************************************************************
**  FILE-NAME: Rte_SWC_DiagnosticMonitor_Type.h                                                     **
**                                                                            **
**  MODULE-NAME: AUTOSAR RTE GENERATION TOOL                                  **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 4.4.2                                                   **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/
/*
 * INPUT FILE:
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\ECU\ECUCD_EcucValueCollection.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\ECU\Ecud_Com.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\ECU\Ecud_Det.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\ECU\Ecud_EcuC.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\ECU\Ecud_Os.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\ECU\Ecud_Rte.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Adc.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_BswM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Can.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_CanIf.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_CanSM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_CanTp.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Com.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_ComM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Crc.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Dcm.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Dem.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Det.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Dio.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Fee.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_FiM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Fls.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Gpt.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Icu_43.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Mcu.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_MemIf.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_NvM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Os.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_PduR.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Port.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Pwm_43.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Spi.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\BswMd\Bswmd_Wdg_43.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Composition\EcuExtract.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\DBImport\Project.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\DataTypes\AUTOSAR_DataTypes.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\DataTypes\AUTOSAR_DataTypes_Etc.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_App\App_ComM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_App\App_Dcm.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_App\App_Dem.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_App\App_FiM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_App\App_IoHwAb.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_App\App_Mode.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_App\App_WdgM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_Bsw\MODE_PortInterfaces.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_Bsw\Swcd_Bsw_BswM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_Bsw\Swcd_ComM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_Bsw\Swcd_Det.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Configuration\System\Swcd_Bsw\Swcd_FiM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\bswmd\Bswmd_EcuM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\bswmd\Bswmd_IoHwAb.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\bswmd\Bswmd_WdgIf.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\bswmd\Bswmd_WdgM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\swcd\Swcd_Bsw_Dcm.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\swcd\Swcd_Bsw_Dem.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\swcd\Swcd_Bsw_EcuM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\swcd\Swcd_Bsw_NvM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\swcd\Swcd_IoHwAb.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Generated\Bsw_Output\swcd\Swcd_WdgM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Static_Code\Modules\b_autosar_swc_ErrorManagement\App_ErrM.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Static_Code\Modules\b_autosar_sys_EcuM_R40\generator\EcuM_PortInterface.arxml
 *      E:\00_AUTOSAR\Project\autron_autosar_edu_Warrior_mpc5606b_Io_R181026\Static_Code\Modules\b_autosar_sys_WdgM_R40\generator\Swcd_WdgM_Fixed.arxml

 * GENERATED ON:  This timestamp is removed.
*/

/*******************************************************************************
* PRE-JUSTIFICATION BEGINE SECTION (MISRA-C RULE CHECKER)
* These rules will not be applied for verification based on the MISRA Rule
* in Rte generated source
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
  polyspace:begin<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:begin<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/******************************************************************************/

/*******************************************************************************
**                         MULTIPLE INCLUSION PROTECTION                      **
*******************************************************************************/
#ifndef RTE_SWC_DIAGNOSTICMONITOR_TYPE_H
#define RTE_SWC_DIAGNOSTICMONITOR_TYPE_H

/*******************************************************************************
**                  Include Section                                           **
*******************************************************************************/
/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */
#include "Rte_Type.h"

/* polyspace:end<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 extern "C"
 {
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#ifdef RTE_VENDOR_ID
  #if (RTE_VENDOR_ID != 76)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Vendor Id"
  #endif
#else
  #define RTE_VENDOR_ID 76
#endif

#ifdef RTE_MODULE_ID
  #if (RTE_MODULE_ID != 2)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Module Id"
  #endif
#else
  #define RTE_MODULE_ID 2
#endif

#ifdef RTE_SW_MAJOR_VERSION
  #if (RTE_SW_MAJOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Major Version"
  #endif
#else
  #define RTE_SW_MAJOR_VERSION 4
#endif

#ifdef RTE_SW_MINOR_VERSION
  #if (RTE_SW_MINOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Minor Version"
  #endif
#else
  #define RTE_SW_MINOR_VERSION 4
#endif

#ifdef RTE_SW_PATCH_VERSION
  #if (RTE_SW_PATCH_VERSION != 2)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Patch Version"
  #endif
#else
  #define RTE_SW_PATCH_VERSION 2
#endif

#ifdef RTE_AR_RELEASE_MAJOR_VERSION
  #if (RTE_AR_RELEASE_MAJOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Major Version"
  #endif
#else
  #define RTE_AR_RELEASE_MAJOR_VERSION 4
#endif

#ifdef RTE_AR_RELEASE_MINOR_VERSION
  #if (RTE_AR_RELEASE_MINOR_VERSION != 0)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Minor Version"
  #endif
#else
  #define RTE_AR_RELEASE_MINOR_VERSION 0
#endif

#ifdef RTE_AR_RELEASE_REVISION_VERSION
  #if (RTE_AR_RELEASE_REVISION_VERSION != 3)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Revision Version"
  #endif
#else
  #define RTE_AR_RELEASE_REVISION_VERSION 3
#endif

/*******************************************************************************
** Type Definitions for Modes                                                 **
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:5.3:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte Modes (Rte SWS #2627))
*/

/*
  polyspace:end<MISRA-C:5.3:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte Modes (Rte SWS #2627))
*/
/*******************************************************************************
* Macros Used For Modes                                                       **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for Implementation Datatypes                              **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for Range Types                                           **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for Invalid Value Types                                   **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for Enumeration constants                                 **
*******************************************************************************/
/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> Number of type definitions for enumeration constants is depends on user configuration */
#ifndef DEM_UDS_STATUS_TF
#define DEM_UDS_STATUS_TF 1U
#endif /* DEM_UDS_STATUS_TF */

#ifndef DEM_UDS_STATUS_TFTOC
#define DEM_UDS_STATUS_TFTOC 2U
#endif /* DEM_UDS_STATUS_TFTOC */

#ifndef DEM_UDS_STATUS_PDTC
#define DEM_UDS_STATUS_PDTC 4U
#endif /* DEM_UDS_STATUS_PDTC */

#ifndef DEM_UDS_STATUS_CDTC
#define DEM_UDS_STATUS_CDTC 8U
#endif /* DEM_UDS_STATUS_CDTC */

#ifndef DEM_UDS_STATUS_TNCSLC
#define DEM_UDS_STATUS_TNCSLC 16U
#endif /* DEM_UDS_STATUS_TNCSLC */

#ifndef DEM_UDS_STATUS_TFSLC
#define DEM_UDS_STATUS_TFSLC 32U
#endif /* DEM_UDS_STATUS_TFSLC */

#ifndef DEM_UDS_STATUS_TNCTOC
#define DEM_UDS_STATUS_TNCTOC 64U
#endif /* DEM_UDS_STATUS_TNCTOC */

#ifndef DEM_UDS_STATUS_WIR
#define DEM_UDS_STATUS_WIR 128U
#endif /* DEM_UDS_STATUS_WIR */

#ifndef DEM_INIT_MONITOR_CLEAR
#define DEM_INIT_MONITOR_CLEAR 0x01U
#endif /* DEM_INIT_MONITOR_CLEAR */

#ifndef DEM_INIT_MONITOR_RESTART
#define DEM_INIT_MONITOR_RESTART 0x02U
#endif /* DEM_INIT_MONITOR_RESTART */

#ifndef DEM_INIT_MONITOR_REENABLED
#define DEM_INIT_MONITOR_REENABLED 0x03U
#endif /* DEM_INIT_MONITOR_REENABLED */

#ifndef DEM_INDICATOR_OFF
#define DEM_INDICATOR_OFF 0x00U
#endif /* DEM_INDICATOR_OFF */

#ifndef DEM_INDICATOR_CONTINUOUS
#define DEM_INDICATOR_CONTINUOUS 0x01U
#endif /* DEM_INDICATOR_CONTINUOUS */

#ifndef DEM_INDICATOR_BLINKING
#define DEM_INDICATOR_BLINKING 0x02U
#endif /* DEM_INDICATOR_BLINKING */

#ifndef DEM_INDICATOR_BLINK_CONT
#define DEM_INDICATOR_BLINK_CONT 0x03U
#endif /* DEM_INDICATOR_BLINK_CONT */

#ifndef DEM_INDICATOR_SLOW_FLASH
#define DEM_INDICATOR_SLOW_FLASH 0x04U
#endif /* DEM_INDICATOR_SLOW_FLASH */

#ifndef DEM_INDICATOR_FAST_FLASH
#define DEM_INDICATOR_FAST_FLASH 0x05U
#endif /* DEM_INDICATOR_FAST_FLASH */

#ifndef DEM_EVENT_STATUS_PASSED
#define DEM_EVENT_STATUS_PASSED 0x00U
#endif /* DEM_EVENT_STATUS_PASSED */

#ifndef DEM_EVENT_STATUS_FAILED
#define DEM_EVENT_STATUS_FAILED 0x01U
#endif /* DEM_EVENT_STATUS_FAILED */

#ifndef DEM_EVENT_STATUS_PREPASSED
#define DEM_EVENT_STATUS_PREPASSED 0x02U
#endif /* DEM_EVENT_STATUS_PREPASSED */

#ifndef DEM_EVENT_STATUS_PREFAILED
#define DEM_EVENT_STATUS_PREFAILED 0x03U
#endif /* DEM_EVENT_STATUS_PREFAILED */

#ifndef DEM_CYCLE_STATE_START
#define DEM_CYCLE_STATE_START 0x00U
#endif /* DEM_CYCLE_STATE_START */

#ifndef DEM_CYCLE_STATE_END
#define DEM_CYCLE_STATE_END 0x01U
#endif /* DEM_CYCLE_STATE_END */

/* polyspace:end<MISRA-C:1.1:Not a defect:Justify with annotations> Number of type definitions for enumeration constants is depends on user configuration */

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 }
#endif

#endif

/*******************************************************************************
* PRE-JUSTIFICATION END SECTION (MISRA-C RULE CHECKER)
*******************************************************************************/
/*
  polyspace:end<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
  polyspace:end<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:end<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

