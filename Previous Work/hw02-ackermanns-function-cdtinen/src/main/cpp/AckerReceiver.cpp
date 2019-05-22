/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermanns function.
 *
 * @file    AckerCommand.cpp
 * @brief   AckerCommand implementation.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include "AckerReceiver.h"

int AckerReceiver::acker(int m, int n) {
	if (m==0) return n+1;
	if (n==0) return (acker(m-1, 1));
    return acker(m-1, acker(m, n-1));
}
