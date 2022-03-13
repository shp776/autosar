/*******************************************************************************
**  FILE-NAME: CanIf_Cbk.h                                                    **
**                                                                            **
**  MODULE-NAME: AUTOSAR CAN Interface Module                                 **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **                                                                
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 2.5.4                                                       **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            ** 
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/

/*
 * INPUT FILE:    Configuration\ECU\Ecud_CanTp.arxml
 *                Configuration\ECU\Ecud_CanIf.arxml
 *                Configuration\ECU\Ecud_EcuC.arxml
 *                Configuration\ECU\Mcal\Ecud_Can.arxml
 *                Configuration\ECU\Ecud_PduR.arxml
 * GENERATED ON:  This timestamp is removed.
 */

#ifndef CANIF_CBK_H
#define CANIF_CBK_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "CanIf.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#define CANIF_CBK_H_AR_RELEASE_MAJOR_VERSION               (4)
#define CANIF_CBK_H_AR_RELEASE_MINOR_VERSION               (0)
#define CANIF_CBK_H_AR_RELEASE_REVISION_VERSION            (3)
#define CANIF_CBK_H_SW_MAJOR_VERSION                       (2)
#define CANIF_CBK_H_SW_MINOR_VERSION                       (5)

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/


/*******************************************************************************
 GENERATED FOLLOWING PART FOR EACH DRIVER ONLY WHEN MULTIPLE DRIVER EXIST
*******************************************************************************/


/*******************************************************************************
                GENERATE FOLLOWING PART ONLY ONCE
*******************************************************************************/
#define CANIF_START_SEC_CODE
#include "MemMap.h"
/* BusOff event referring to a CAN Controller */
extern FUNC(void, CANIF_CODE) CanIf_ControllerBusOff (uint8 ControllerId);
#define CANIF_STOP_SEC_CODE
#include "MemMap.h"

#define CANIF_START_SEC_CODE
#include "MemMap.h"
/* RxIndication event referring to a CAN Controller */
extern FUNC(void, CANIF_CODE) CanIf_RxIndication
                  (Can_HwHandleType Hrh, Can_IdType CanId, uint8 CanDlc,
                  P2CONST(uint8, AUTOMATIC, CANIF_APPL_CONST) CanSduPtr);
#define CANIF_STOP_SEC_CODE
#include "MemMap.h"                

#define CANIF_START_SEC_CODE
#include "MemMap.h"
/* TxConfirmaton event referring to a CAN Controller */
extern FUNC(void, CANIF_CODE)
                  CanIf_TxConfirmation(PduIdType CanTxPduId);
#define CANIF_STOP_SEC_CODE
#include "MemMap.h"                  

#define CANIF_START_SEC_CODE
#include "MemMap.h"
/* TxCancelConfirmation event referring to a CAN Controller */
extern FUNC(void, CANIF_CODE) CanIf_CancelTxConfirmation
                  (PduIdType CanTxPduId, 
                  P2CONST(PduInfoType, AUTOMATIC, CANIF_APPL_CONST) PduInfoPtr);
#define CANIF_STOP_SEC_CODE
#include "MemMap.h"
       
#define CANIF_START_SEC_CODE
#include "MemMap.h"
/* Mode Controller event referring to a CAN Controller */
extern FUNC(void, CANIF_CODE) CanIf_ControllerModeIndication 
       (uint8 ControllerId, CanIf_ControllerModeType ControllerMode);                    
#define CANIF_STOP_SEC_CODE
#include "MemMap.h"
       
#define CANIF_START_SEC_CODE
#include "MemMap.h"
/* Trcv Mode Controller event referring to a CANTRCV Controller */
extern FUNC(void, CANIF_CODE) CanIf_TrcvModeIndication 
       (uint8 TransceiverId, CanTrcv_TrcvModeType TransceiverMode);       
#define CANIF_STOP_SEC_CODE
#include "MemMap.h"

/*******************************************************************************
**                      Configuration Set Handles                             **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#endif
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
