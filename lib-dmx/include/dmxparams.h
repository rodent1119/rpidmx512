/**
 * @file dmxparams.h
 *
 */
/* Copyright (C) 2016 by Arjan van Vught mailto:info@raspberrypi-dmx.nl
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

#ifndef DMXPARAMS_H_
#define DMXPARAMS_H_

#include <stdint.h>

#define DMX_PARAMS_MIN_BREAK_TIME		9	///<
#define DMX_PARAMS_DEFAULT_BREAK_TIME	9	///<
#define DMX_PARAMS_MAX_BREAK_TIME		127	///<

#define DMX_PARAMS_MIN_MAB_TIME			1	///<
#define DMX_PARAMS_DEFAULT_MAB_TIME		1	///<
#define DMX_PARAMS_MAX_MAB_TIME			127	///<

#define DMX_PARAMS_DEFAULT_REFRESH_RATE	40	///<

class DMXParams {
public:
	DMXParams(void);
	~DMXParams(void);

	bool Load(void);

	const uint8_t GetBreakTime(void);
	const uint8_t GetMabTime(void);
	const uint8_t GetRefreshRate(void);
};


#endif /* DMXPARAMS_H_ */
