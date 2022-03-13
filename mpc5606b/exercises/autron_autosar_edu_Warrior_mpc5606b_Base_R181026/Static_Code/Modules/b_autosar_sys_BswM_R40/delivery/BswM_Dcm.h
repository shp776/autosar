/*******************************************************************************
**                                                                            **
**  (C) 2013 HYUNDAI AUTRON Co., Ltd.                                         **
**  Confidential Proprietary Information. Distribution Limited.               **
**  Do Not Copy Without Prior Permission                                      **
**                                                                            **
**  FILE-NAME : BswM_DcM.h                                                    **
**                                                                            **
**  TARGET    : All                                                           **
**                                                                            **
**  PRODUCT   : AUTOSAR BswM Module                                           **
**                                                                            **
**  PURPOSE   : Providing interface to DcM                                    **
**                                                                            **
**  PLATFORM DEPENDANT [yes/no]: no                                           **
**                                                                            **
**  TO BE CHANGED BY USER [yes/no]: no                                        **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                              Revision History                              **
********************************************************************************
** Revision  Date          By            Description                          **
********************************************************************************
** 2.5.2     22-Jul-2016   Sanghoon Bae  Redmine #5583                        **
** 1.5.0     24-Dec-2013   Daejun Park   Add BswM_Dcm_ApplicationUpdated()    **
** 1.0.0     04-Mar-2013   Daejun Park   Initial version                      **
*******************************************************************************/

#ifndef BSWM_DCM_H
#define BSWM_DCM_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Dcm.h"
#include "ComStack_Types.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#define BSWM_START_SEC_CODE
#include "MemMap.h"
extern FUNC(void, BSWM_CODE) BswM_Dcm_CommunicationMode_CurrentState
  (NetworkHandleType Network, Dcm_CommunicationModeType RequestedMode);

extern FUNC(void, BSWM_CODE) BswM_Dcm_ApplicationUpdated(void);
#define BSWM_STOP_SEC_CODE
#include "MemMap.h"

#endif /* BSWM_DCM_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
