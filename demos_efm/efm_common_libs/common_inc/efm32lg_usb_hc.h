/**************************************************************************//**
 * @file
 * @brief efm32lg_usbc.h Register and Bit Field definitions
 * @author Energy Micro AS
 * @version 3.20.2
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
 * obligation to support this Software. Silicon Labs is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Silicon Labs will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 ******************************************************************************/






/**************************************************************************//**
 * @brief USB_HC EFM32LG USB HC
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CHAR;         /**< Host Channel x Characteristics Register  */
  uint32_t      RESERVED0[1]; /**< Reserved for future use **/
  __IO uint32_t INT;          /**< Host Channel x Interrupt Register  */
  __IO uint32_t INTMSK;       /**< Host Channel x Interrupt Mask Register  */
  __IO uint32_t TSIZ;         /**< Host Channel x Transfer Size Register  */
  __IO uint32_t DMAADDR;      /**< Host Channel x DMA Address Register  */

  uint32_t      RESERVED1[2]; /**< Reserved future */
} USB_HC_TypeDef;
