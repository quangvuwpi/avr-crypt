/* avr-crypt.h */
/*
    This is the main header file of the AVR-Crypto-Lib Arduino library wrapper.
    Copyright (C) 2017 Tuan Vu (tuan.vu58@yahoo.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _AVR_CRYPT_H_
#define _AVR_CRYPT_H_

#include <stdint.h>

#include "avr-crypt-lib/avr-crypt-lib.h"

class avr_crypt_c
{
  public:
    void    rsa_enc(bigint_t* data, const rsa_publickey_t*  key);
    uint8_t rsa_dec(bigint_t* data, const rsa_privatekey_t* key);
};

extern avr_crypt_c avr_crypt;

#endif /* _AVR_CRYPT_H_ */
