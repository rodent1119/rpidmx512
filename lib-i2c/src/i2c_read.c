/**
 * @file i2c_read.c
 *
 */
/* Copyright (C) 2017 by Arjan van Vught mailto:info@raspberrypi-dmx.nl
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#include <stdint.h>

#include "bcm2835_i2c.h"

/**
 *
 * @return
 */
const uint16_t i2c_read_uint16(void) {
	uint8_t buf[2] = { 0, 0 };

	(void) bcm2835_i2c_read((char *) buf, 2);

	return (uint16_t) ((uint16_t) buf[0] << 8 | (uint16_t) buf[1]);
}

/**
 *
 * @param reg
 * @return
 */
const uint16_t i2c_read_reg_uint16(const uint8_t reg) {
	uint8_t buf[2] = { 0, 0 };

	buf[0] = reg;

	(void) bcm2835_i2c_write((char *) &buf[0], 1);

	return i2c_read_uint16();
}
