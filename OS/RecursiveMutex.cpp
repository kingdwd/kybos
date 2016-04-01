/*
 * RecursiveMutex.cpp
 *
 * Copyright 2012 Germaneers GmbH
 * Copyright 2012 Hubert Denkmair (hubert.denkmair@germaneers.com)
 *
 * This file is part of libopenstella.
 *
 * libopenstella is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * libopenstella is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libopenstella.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "RecursiveMutex.h"

RecursiveMutex::RecursiveMutex() :
	_hnd(xSemaphoreCreateRecursiveMutex())
{
	if (_hnd==0) while(1);
}

RecursiveMutex::~RecursiveMutex()
{
	vSemaphoreDelete(_hnd);
}

bool RecursiveMutex::give()
{
	return xSemaphoreGiveRecursive(_hnd) == pdTRUE;
}

bool RecursiveMutex::take(uint32_t timeout_ms)
{
	return xSemaphoreTakeRecursive(_hnd, timeout_ms) == pdTRUE;
}


