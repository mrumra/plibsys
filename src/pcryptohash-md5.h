/*
 * Copyright (C) 2010-2016 Alexander Saprykin <xelfium@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

/* MD5 interface implementation for #PCryptoHash */

#if !defined (__PLIBSYS_H_INSIDE__) && !defined (PLIBSYS_COMPILATION)
#  error "Header files shouldn't be included directly, consider using <plibsys.h> instead."
#endif

#ifndef __PCRYPTOHASHMD5_H__
#define __PCRYPTOHASHMD5_H__

#include "ptypes.h"
#include "pmacros.h"

P_BEGIN_DECLS

typedef struct PHashMD5_ PHashMD5;

PHashMD5 *	p_crypto_hash_md5_new		(void);
void		p_crypto_hash_md5_update	(PHashMD5 *ctx, const puchar *data, psize len);
void		p_crypto_hash_md5_finish	(PHashMD5 *ctx);
const puchar *	p_crypto_hash_md5_digest	(PHashMD5 *ctx);
void		p_crypto_hash_md5_reset		(PHashMD5 *ctx);
void		p_crypto_hash_md5_free		(PHashMD5 *ctx);

P_END_DECLS

#endif /* __PCRYPTOHASHMD5_H__ */
