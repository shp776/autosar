
/*******************************************************************************
**  FILE-NAME: SchM_Dio.h                                                     **
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

/******************************************************************************/

/*******************************************************************************
* PRE-JUSTIFICATION BEGINE SECTION (MISRA-C RULE CHECKER)
* These rules will not be applied for verification based on the MISRA Rule
* in Rte generated source
*******************************************************************************/

/*
    polyspace:begin<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
*/

/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*******************************************************************************
**                         MULTIPLE INCLUSION PROTECTION                      **
*******************************************************************************/
#ifndef SCHM_DIO_H
#define SCHM_DIO_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */
#include "Os.h"
#include "SchM_Dio_Type.h"

#include "Rte.h"
/* polyspace:end<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */

/*******************************************************************************
** Version Information                                                        **
*******************************************************************************/
/* AUTOSAR SPECIFICATION VERSION INFORMATION */

#define SCHM_Dio_AR_RELEASE_MAJOR_VERSION	4
#define SCHM_Dio_AR_RELEASE_MINOR_VERSION	0
#define SCHM_Dio_AR_REVISION_VERSION	2

/* SOFTWARE VERSION INFORMATION */

#define SCHM_Dio_SW_MAJOR_VERSION	4
#define SCHM_Dio_SW_MINOR_VERSION	0

/* RTE MODULE VERSION INFORMATION */

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

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 extern "C" {
 #endif /* __cplusplus */

/*******************************************************************************
** RTE #DEFINES USED FOR INITIALISATION OF GLOBAL VARIABLES                   **
*******************************************************************************/

/*******************************************************************************
** Global Variables                                                           **
*******************************************************************************/

/*******************************************************************************
** Macros for Exclusive Areas                                                 **
*******************************************************************************/

/*******************************************************************************
** Prototypes for BswSchedulable entities                                     **
*******************************************************************************/

/*******************************************************************************
** Prototypes for BSW API                                                     **
*******************************************************************************/
#define RTE_START_SEC_CODE
#include "MemMap.h"
extern FUNC(void, RTE_CODE) SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00(void);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

/* COMPATIBLE WITH C and C++ languages */

 #ifdef __cplusplus
 } /* extern "C" */
 #endif /* __cplusplus */
#endif

/*******************************************************************************
* PRE-JUSTIFICATION END SECTION (MISRA-C RULE CHECKER)
*******************************************************************************/
/*
    polyspace:end<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
*/

/*******************************************************************************
**                          END OF FILE                                       **
*******************************************************************************/
