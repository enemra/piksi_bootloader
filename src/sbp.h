/*
 * Copyright (C) 2011-2014 Swift Navigation Inc.
 * Contact: Fergus Noble <fergus@swift-nav.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef SWIFTNAV_SBP_H
#define SWIFTNAV_SBP_H

#include <libsbp/common.h>
#include <libsbp/sbp.h>

#include "peripherals/usart.h"

void sbp_setup(u8 use_settings, u16 sender_id);
void sbp_register_cbk(u16 msg_type, sbp_msg_callback_t cb,
                      sbp_msg_callbacks_node_t *node);
void sbp_disable(void);
u32 sbp_send_msg(u16 msg_type, u8 len, u8 buff[]);
void sbp_process_messages(void);

#endif

