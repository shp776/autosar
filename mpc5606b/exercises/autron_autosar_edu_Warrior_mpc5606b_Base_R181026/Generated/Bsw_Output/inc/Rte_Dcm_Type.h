
/*******************************************************************************
**  FILE-NAME: Rte_Dcm_Type.h                                                     **
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
#ifndef RTE_DCM_TYPE_H
#define RTE_DCM_TYPE_H

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
#ifndef DCM_OBD_ON_CAN
#define DCM_OBD_ON_CAN 0x00U
#endif /* DCM_OBD_ON_CAN */

#ifndef DCM_OBD_ON_FLEXRAY
#define DCM_OBD_ON_FLEXRAY 0x01U
#endif /* DCM_OBD_ON_FLEXRAY */

#ifndef DCM_OBD_ON_IP
#define DCM_OBD_ON_IP 0x02U
#endif /* DCM_OBD_ON_IP */

#ifndef DCM_UDS_ON_CAN
#define DCM_UDS_ON_CAN 0x03U
#endif /* DCM_UDS_ON_CAN */

#ifndef DCM_UDS_ON_FLEXRAY
#define DCM_UDS_ON_FLEXRAY 0x04U
#endif /* DCM_UDS_ON_FLEXRAY */

#ifndef DCM_UDS_ON_IP
#define DCM_UDS_ON_IP 0x05U
#endif /* DCM_UDS_ON_IP */

#ifndef DCM_ROE_ON_CAN
#define DCM_ROE_ON_CAN 0x06U
#endif /* DCM_ROE_ON_CAN */

#ifndef DCM_ROE_ON_FLEXRAY
#define DCM_ROE_ON_FLEXRAY 0x07U
#endif /* DCM_ROE_ON_FLEXRAY */

#ifndef DCM_ROE_ON_IP
#define DCM_ROE_ON_IP 0x08U
#endif /* DCM_ROE_ON_IP */

#ifndef DCM_PERIODICTRANS_ON_CAN
#define DCM_PERIODICTRANS_ON_CAN 0x09U
#endif /* DCM_PERIODICTRANS_ON_CAN */

#ifndef DCM_PERIODICTRANS_ON_FLEXRAY
#define DCM_PERIODICTRANS_ON_FLEXRAY 0x0AU
#endif /* DCM_PERIODICTRANS_ON_FLEXRAY */

#ifndef DCM_PERIODICTRANS_ON_IP
#define DCM_PERIODICTRANS_ON_IP 0x0BU
#endif /* DCM_PERIODICTRANS_ON_IP */

#ifndef DCM_NO_ACTIVE_PROTOCOL
#define DCM_NO_ACTIVE_PROTOCOL 0x0CU
#endif /* DCM_NO_ACTIVE_PROTOCOL */

#ifndef DCM_SUPPLIER_1
#define DCM_SUPPLIER_1 0xF0U
#endif /* DCM_SUPPLIER_1 */

#ifndef DCM_SUPPLIER_2
#define DCM_SUPPLIER_2 0xF1U
#endif /* DCM_SUPPLIER_2 */

#ifndef DCM_SUPPLIER_3
#define DCM_SUPPLIER_3 0xF2U
#endif /* DCM_SUPPLIER_3 */

#ifndef DCM_SUPPLIER_4
#define DCM_SUPPLIER_4 0xF3U
#endif /* DCM_SUPPLIER_4 */

#ifndef DCM_SUPPLIER_5
#define DCM_SUPPLIER_5 0xF4U
#endif /* DCM_SUPPLIER_5 */

#ifndef DCM_SUPPLIER_6
#define DCM_SUPPLIER_6 0xF5U
#endif /* DCM_SUPPLIER_6 */

#ifndef DCM_SUPPLIER_7
#define DCM_SUPPLIER_7 0xF6U
#endif /* DCM_SUPPLIER_7 */

#ifndef DCM_SUPPLIER_8
#define DCM_SUPPLIER_8 0xF7U
#endif /* DCM_SUPPLIER_8 */

#ifndef DCM_SUPPLIER_9
#define DCM_SUPPLIER_9 0xF8U
#endif /* DCM_SUPPLIER_9 */

#ifndef DCM_SUPPLIER_10
#define DCM_SUPPLIER_10 0xF9U
#endif /* DCM_SUPPLIER_10 */

#ifndef DCM_SUPPLIER_11
#define DCM_SUPPLIER_11 0xFAU
#endif /* DCM_SUPPLIER_11 */

#ifndef DCM_SUPPLIER_12
#define DCM_SUPPLIER_12 0xFBU
#endif /* DCM_SUPPLIER_12 */

#ifndef DCM_SUPPLIER_13
#define DCM_SUPPLIER_13 0xFCU
#endif /* DCM_SUPPLIER_13 */

#ifndef DCM_SUPPLIER_14
#define DCM_SUPPLIER_14 0xFDU
#endif /* DCM_SUPPLIER_14 */

#ifndef DCM_SUPPLIER_15
#define DCM_SUPPLIER_15 0xFEU
#endif /* DCM_SUPPLIER_15 */

#ifndef DCM_E_POSITIVERESPONSE
#define DCM_E_POSITIVERESPONSE 0x00U
#endif /* DCM_E_POSITIVERESPONSE */

#ifndef DCM_E_GENERALREJECT
#define DCM_E_GENERALREJECT 0x10U
#endif /* DCM_E_GENERALREJECT */

#ifndef DCM_E_SERVICENOTSUPPORTED
#define DCM_E_SERVICENOTSUPPORTED 0x11U
#endif /* DCM_E_SERVICENOTSUPPORTED */

#ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#define DCM_E_SUBFUNCTIONNOTSUPPORTED 0x12U
#endif /* DCM_E_SUBFUNCTIONNOTSUPPORTED */

#ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT 0x13U
#endif /* DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT */

#ifndef DCM_E_RESPONSETOOLONG
#define DCM_E_RESPONSETOOLONG 0x14U
#endif /* DCM_E_RESPONSETOOLONG */

#ifndef DCM_E_BUSYREPEATREQUEST
#define DCM_E_BUSYREPEATREQUEST 0x21U
#endif /* DCM_E_BUSYREPEATREQUEST */

#ifndef DCM_E_CONDITIONSNOTCORRECT
#define DCM_E_CONDITIONSNOTCORRECT 0x22U
#endif /* DCM_E_CONDITIONSNOTCORRECT */

#ifndef DCM_E_REQUESTSEQUENCEERROR
#define DCM_E_REQUESTSEQUENCEERROR 0x24U
#endif /* DCM_E_REQUESTSEQUENCEERROR */

#ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#define DCM_E_NORESPONSEFROMSUBNETCOMPONENT 0x25U
#endif /* DCM_E_NORESPONSEFROMSUBNETCOMPONENT */

#ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION 0x26U
#endif /* DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION */

#ifndef DCM_E_REQUESTOUTOFRANGE
#define DCM_E_REQUESTOUTOFRANGE 0x31U
#endif /* DCM_E_REQUESTOUTOFRANGE */

#ifndef DCM_E_SECURITYACCESSDENIED
#define DCM_E_SECURITYACCESSDENIED 0x33U
#endif /* DCM_E_SECURITYACCESSDENIED */

#ifndef DCM_E_INVALIDKEY
#define DCM_E_INVALIDKEY 0x35U
#endif /* DCM_E_INVALIDKEY */

#ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#define DCM_E_EXCEEDNUMBEROFATTEMPTS 0x36U
#endif /* DCM_E_EXCEEDNUMBEROFATTEMPTS */

#ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED 0x37U
#endif /* DCM_E_REQUIREDTIMEDELAYNOTEXPIRED */

#ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#define DCM_E_UPLOADDOWNLOADNOTACCEPTED 0x70U
#endif /* DCM_E_UPLOADDOWNLOADNOTACCEPTED */

#ifndef DCM_E_TRANSFERDATASUSPENDED
#define DCM_E_TRANSFERDATASUSPENDED 0x71U
#endif /* DCM_E_TRANSFERDATASUSPENDED */

#ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#define DCM_E_GENERALPROGRAMMINGFAILURE 0x72U
#endif /* DCM_E_GENERALPROGRAMMINGFAILURE */

#ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#define DCM_E_WRONGBLOCKSEQUENCECOUNTER 0x73U
#endif /* DCM_E_WRONGBLOCKSEQUENCECOUNTER */

#ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION 0x7EU
#endif /* DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION */

#ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION 0x7FU
#endif /* DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION */

#ifndef DCM_E_RPMTOOHIGH
#define DCM_E_RPMTOOHIGH 0x81U
#endif /* DCM_E_RPMTOOHIGH */

#ifndef DCM_E_RPMTOOLOW
#define DCM_E_RPMTOOLOW 0x82U
#endif /* DCM_E_RPMTOOLOW */

#ifndef DCM_E_ENGINEISRUNNING
#define DCM_E_ENGINEISRUNNING 0x83U
#endif /* DCM_E_ENGINEISRUNNING */

#ifndef DCM_E_ENGINEISNOTRUNNING
#define DCM_E_ENGINEISNOTRUNNING 0x84U
#endif /* DCM_E_ENGINEISNOTRUNNING */

#ifndef DCM_E_ENGINERUNTIMETOOLOW
#define DCM_E_ENGINERUNTIMETOOLOW 0x85U
#endif /* DCM_E_ENGINERUNTIMETOOLOW */

#ifndef DCM_E_TEMPERATURETOOHIGH
#define DCM_E_TEMPERATURETOOHIGH 0x86U
#endif /* DCM_E_TEMPERATURETOOHIGH */

#ifndef DCM_E_TEMPERATURETOOLOW
#define DCM_E_TEMPERATURETOOLOW 0x87U
#endif /* DCM_E_TEMPERATURETOOLOW */

#ifndef DCM_E_VEHICLESPEEDTOOHIGH
#define DCM_E_VEHICLESPEEDTOOHIGH 0x88U
#endif /* DCM_E_VEHICLESPEEDTOOHIGH */

#ifndef DCM_E_VEHICLESPEEDTOOLOW
#define DCM_E_VEHICLESPEEDTOOLOW 0x89U
#endif /* DCM_E_VEHICLESPEEDTOOLOW */

#ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#define DCM_E_THROTTLE_PEDALTOOHIGH 0x8AU
#endif /* DCM_E_THROTTLE_PEDALTOOHIGH */

#ifndef DCM_E_THROTTLE_PEDALTOOLOW
#define DCM_E_THROTTLE_PEDALTOOLOW 0x8BU
#endif /* DCM_E_THROTTLE_PEDALTOOLOW */

#ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL 0x8CU
#endif /* DCM_E_TRANSMISSIONRANGENOTINNEUTRAL */

#ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#define DCM_E_TRANSMISSIONRANGENOTINGEAR 0x8DU
#endif /* DCM_E_TRANSMISSIONRANGENOTINGEAR */

#ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#define DCM_E_BRAKESWITCH_NOTCLOSED 0x8FU
#endif /* DCM_E_BRAKESWITCH_NOTCLOSED */

#ifndef DCM_E_SHIFTERLEVERNOTINPARK
#define DCM_E_SHIFTERLEVERNOTINPARK 0x90U
#endif /* DCM_E_SHIFTERLEVERNOTINPARK */

#ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#define DCM_E_TORQUECONVERTERCLUTCHLOCKED 0x91U
#endif /* DCM_E_TORQUECONVERTERCLUTCHLOCKED */

#ifndef DCM_E_VOLTAGETOOHIGH
#define DCM_E_VOLTAGETOOHIGH 0x92U
#endif /* DCM_E_VOLTAGETOOHIGH */

#ifndef DCM_E_VOLTAGETOOLOW
#define DCM_E_VOLTAGETOOLOW 0x93U
#endif /* DCM_E_VOLTAGETOOLOW */

#ifndef DCM_E_VMSCNC_0
#define DCM_E_VMSCNC_0 0xF0U
#endif /* DCM_E_VMSCNC_0 */

#ifndef DCM_E_VMSCNC_1
#define DCM_E_VMSCNC_1 0xF1U
#endif /* DCM_E_VMSCNC_1 */

#ifndef DCM_E_VMSCNC_2
#define DCM_E_VMSCNC_2 0xF2U
#endif /* DCM_E_VMSCNC_2 */

#ifndef DCM_E_VMSCNC_3
#define DCM_E_VMSCNC_3 0xF3U
#endif /* DCM_E_VMSCNC_3 */

#ifndef DCM_E_VMSCNC_4
#define DCM_E_VMSCNC_4 0xF4U
#endif /* DCM_E_VMSCNC_4 */

#ifndef DCM_E_VMSCNC_5
#define DCM_E_VMSCNC_5 0xF5U
#endif /* DCM_E_VMSCNC_5 */

#ifndef DCM_E_VMSCNC_6
#define DCM_E_VMSCNC_6 0xF6U
#endif /* DCM_E_VMSCNC_6 */

#ifndef DCM_E_VMSCNC_7
#define DCM_E_VMSCNC_7 0xF7U
#endif /* DCM_E_VMSCNC_7 */

#ifndef DCM_E_VMSCNC_8
#define DCM_E_VMSCNC_8 0xF8U
#endif /* DCM_E_VMSCNC_8 */

#ifndef DCM_E_VMSCNC_9
#define DCM_E_VMSCNC_9 0xF9U
#endif /* DCM_E_VMSCNC_9 */

#ifndef DCM_E_VMSCNC_A
#define DCM_E_VMSCNC_A 0xFAU
#endif /* DCM_E_VMSCNC_A */

#ifndef DCM_E_VMSCNC_B
#define DCM_E_VMSCNC_B 0xFBU
#endif /* DCM_E_VMSCNC_B */

#ifndef DCM_E_VMSCNC_C
#define DCM_E_VMSCNC_C 0xFCU
#endif /* DCM_E_VMSCNC_C */

#ifndef DCM_E_VMSCNC_D
#define DCM_E_VMSCNC_D 0xFDU
#endif /* DCM_E_VMSCNC_D */

#ifndef DCM_E_VMSCNC_E
#define DCM_E_VMSCNC_E 0xFEU
#endif /* DCM_E_VMSCNC_E */

#ifndef DCM_ENABLE_RX_TX_NORM
#define DCM_ENABLE_RX_TX_NORM 0x00U
#endif /* DCM_ENABLE_RX_TX_NORM */

#ifndef DCM_ENABLE_RX_DISABLE_TX_NORM
#define DCM_ENABLE_RX_DISABLE_TX_NORM 0x01U
#endif /* DCM_ENABLE_RX_DISABLE_TX_NORM */

#ifndef DCM_DISABLE_RX_ENABLE_TX_NORM
#define DCM_DISABLE_RX_ENABLE_TX_NORM 0x02U
#endif /* DCM_DISABLE_RX_ENABLE_TX_NORM */

#ifndef DCM_DISABLE_RX_TX_NORMAL
#define DCM_DISABLE_RX_TX_NORMAL 0x03U
#endif /* DCM_DISABLE_RX_TX_NORMAL */

#ifndef DCM_ENABLE_RX_TX_NM
#define DCM_ENABLE_RX_TX_NM 0x04U
#endif /* DCM_ENABLE_RX_TX_NM */

#ifndef DCM_ENABLE_RX_DISABLE_TX_NM
#define DCM_ENABLE_RX_DISABLE_TX_NM 0x05U
#endif /* DCM_ENABLE_RX_DISABLE_TX_NM */

#ifndef DCM_DISABLE_RX_ENABLE_TX_NM
#define DCM_DISABLE_RX_ENABLE_TX_NM 0x06U
#endif /* DCM_DISABLE_RX_ENABLE_TX_NM */

#ifndef DCM_DISABLE_RX_TX_NM
#define DCM_DISABLE_RX_TX_NM 0x07U
#endif /* DCM_DISABLE_RX_TX_NM */

#ifndef DCM_ENABLE_RX_TX_NORM_NM
#define DCM_ENABLE_RX_TX_NORM_NM 0x08U
#endif /* DCM_ENABLE_RX_TX_NORM_NM */

#ifndef DCM_ENABLE_RX_DISABLE_TX_NORM_NM
#define DCM_ENABLE_RX_DISABLE_TX_NORM_NM 0x09U
#endif /* DCM_ENABLE_RX_DISABLE_TX_NORM_NM */

#ifndef DCM_DISABLE_RX_ENABLE_TX_NORM_NM
#define DCM_DISABLE_RX_ENABLE_TX_NORM_NM 0x0AU
#endif /* DCM_DISABLE_RX_ENABLE_TX_NORM_NM */

#ifndef DCM_DISABLE_RX_TX_NORM_NM
#define DCM_DISABLE_RX_TX_NORM_NM 0x0BU
#endif /* DCM_DISABLE_RX_TX_NORM_NM */

#ifndef DCM_DISABLE_RX_TX_NORM
#define DCM_DISABLE_RX_TX_NORM 0x03U
#endif /* DCM_DISABLE_RX_TX_NORM */

#ifndef DCM_E_OK
#define DCM_E_OK 0x00U
#endif /* DCM_E_OK */

#ifndef DCM_E_REQUEST_NOT_ACCEPTED
#define DCM_E_REQUEST_NOT_ACCEPTED 0x08U
#endif /* DCM_E_REQUEST_NOT_ACCEPTED */

#ifndef DCM_E_PROTOCOL_NOT_ALLOWED
#define DCM_E_PROTOCOL_NOT_ALLOWED 0x05U
#endif /* DCM_E_PROTOCOL_NOT_ALLOWED */

#ifndef DCM_E_ROE_NOT_ACCEPTED
#define DCM_E_ROE_NOT_ACCEPTED 0x06U
#endif /* DCM_E_ROE_NOT_ACCEPTED */

#ifndef DCM_E_PERIODICID_NOT_ACCEPTED
#define DCM_E_PERIODICID_NOT_ACCEPTED 0x07U
#endif /* DCM_E_PERIODICID_NOT_ACCEPTED */

#ifndef DCM_E_COMPARE_KEY_FAILED
#define DCM_E_COMPARE_KEY_FAILED 0x11U
#endif /* DCM_E_COMPARE_KEY_FAILED */

#ifndef DCM_READ_FAILED
#define DCM_READ_FAILED 0x02U
#endif /* DCM_READ_FAILED */

#ifndef DCM_READ_FORCE_RCRRP
#define DCM_READ_FORCE_RCRRP 0x03U
#endif /* DCM_READ_FORCE_RCRRP */

#ifndef DCM_READ_OK
#define DCM_READ_OK 0x00U
#endif /* DCM_READ_OK */

#ifndef DCM_READ_PENDING
#define DCM_READ_PENDING 0x01U
#endif /* DCM_READ_PENDING */

#ifndef DCM_DEFAULT_SESSION
#define DCM_DEFAULT_SESSION 0x01U
#endif /* DCM_DEFAULT_SESSION */

#ifndef DCM_PROGRAMMING_SESSION
#define DCM_PROGRAMMING_SESSION 0x02U
#endif /* DCM_PROGRAMMING_SESSION */

#ifndef DCM_EXTENDED_DIAGNOSTIC_SESSION
#define DCM_EXTENDED_DIAGNOSTIC_SESSION 0x03U
#endif /* DCM_EXTENDED_DIAGNOSTIC_SESSION */

#ifndef DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION
#define DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION 0x04U
#endif /* DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION */

#ifndef DCM_EXTENDED_DIAGNOSTIC_MODE_10H
#define DCM_EXTENDED_DIAGNOSTIC_MODE_10H 0x10U
#endif /* DCM_EXTENDED_DIAGNOSTIC_MODE_10H */

#ifndef DCM_ECU_PROGRAMMING_MODE_05H
#define DCM_ECU_PROGRAMMING_MODE_05H 0x05U
#endif /* DCM_ECU_PROGRAMMING_MODE_05H */

#ifndef DCM_QUIESCENT_CURRENT_DIAGNOSTIC_MODE_START
#define DCM_QUIESCENT_CURRENT_DIAGNOSTIC_MODE_START 0x50U
#endif /* DCM_QUIESCENT_CURRENT_DIAGNOSTIC_MODE_START */

#ifndef DCM_SLEEP_MODE_START_REQUEST
#define DCM_SLEEP_MODE_START_REQUEST 0x51U
#endif /* DCM_SLEEP_MODE_START_REQUEST */

#ifndef DCM_ALL_SESSION_LEVEL
#define DCM_ALL_SESSION_LEVEL 0xFFU
#endif /* DCM_ALL_SESSION_LEVEL */

#ifndef DCM_RES_POS_OK
#define DCM_RES_POS_OK 0x00U
#endif /* DCM_RES_POS_OK */

#ifndef DCM_RES_POS_NOT_OK
#define DCM_RES_POS_NOT_OK 0x01U
#endif /* DCM_RES_POS_NOT_OK */

#ifndef DCM_RES_NEG_OK
#define DCM_RES_NEG_OK 0x02U
#endif /* DCM_RES_NEG_OK */

#ifndef DCM_RES_NEG_NOT_OK
#define DCM_RES_NEG_NOT_OK 0x03U
#endif /* DCM_RES_NEG_NOT_OK */

#ifndef DCM_COLD_START
#define DCM_COLD_START 0x00U
#endif /* DCM_COLD_START */

#ifndef DCM_WARM_START
#define DCM_WARM_START 0x01U
#endif /* DCM_WARM_START */

#ifndef DCM_WRITE_FAILED
#define DCM_WRITE_FAILED 0x02U
#endif /* DCM_WRITE_FAILED */

#ifndef DCM_WRITE_FORCE_RCRRP
#define DCM_WRITE_FORCE_RCRRP 0x03U
#endif /* DCM_WRITE_FORCE_RCRRP */

#ifndef DCM_WRITE_OK
#define DCM_WRITE_OK 0x00U
#endif /* DCM_WRITE_OK */

#ifndef DCM_WRITE_PENDING
#define DCM_WRITE_PENDING 0x01U
#endif /* DCM_WRITE_PENDING */

#ifndef DCM_SEC_LEV_LOCKED
#define DCM_SEC_LEV_LOCKED 0x00U
#endif /* DCM_SEC_LEV_LOCKED */

#ifndef DCM_SEC_LEV_L1
#define DCM_SEC_LEV_L1 0x01U
#endif /* DCM_SEC_LEV_L1 */

#ifndef DCM_SEC_LEV_L9
#define DCM_SEC_LEV_L9 0x09U
#endif /* DCM_SEC_LEV_L9 */

#ifndef DCM_SEC_LEV_L21
#define DCM_SEC_LEV_L21 0x21U
#endif /* DCM_SEC_LEV_L21 */

#ifndef DCM_SEC_LEV_ALL
#define DCM_SEC_LEV_ALL 0xFFU
#endif /* DCM_SEC_LEV_ALL */

#ifndef DCM_ROE_ACTIVE
#define DCM_ROE_ACTIVE 0x00U
#endif /* DCM_ROE_ACTIVE */

#ifndef DCM_ROE_UNACTIVE
#define DCM_ROE_UNACTIVE 0x01U
#endif /* DCM_ROE_UNACTIVE */

#ifndef DCM_INITIAL
#define DCM_INITIAL 0x00U
#endif /* DCM_INITIAL */

#ifndef DCM_PENDING
#define DCM_PENDING 0x01U
#endif /* DCM_PENDING */

#ifndef DCM_CANCEL
#define DCM_CANCEL 0x02U
#endif /* DCM_CANCEL */

#ifndef DCM_FORCE_RCRRP_OK
#define DCM_FORCE_RCRRP_OK 0x03U
#endif /* DCM_FORCE_RCRRP_OK */

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

