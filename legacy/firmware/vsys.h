/*
 * This file is part of the Trezor project, https://trezor.io/
 *
 * Copyright (C) 2018 alepop <alepooop@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __VSYS_H__
#define __VSYS_H__

#include <stdbool.h>
#include "bip32.h"
#include "messages-vsys.pb.h"

#define MAX_VSYS_ADDRESS_SIZE 26

void vsys_sign_tx(const HDNode *node, VsysSignTx *msg, VsysSignedTx *resp);

// Helpers
void vsys_get_address_from_public_key(const uint8_t *public_key, char *address);

// Layout
void layoutVsysPublicKey(const uint8_t *pubkey);
void layoutVsysVerifyAddress(const char *address);
void layoutVsysRequireConfirmTx(char *recipient_id, uint64_t amount);

#endif
