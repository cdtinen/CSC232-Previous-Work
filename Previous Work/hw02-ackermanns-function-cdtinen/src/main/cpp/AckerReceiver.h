/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermanns function.
 *
 * @file   AckerReceiver.h
 * @brief  AckerReceiver specification.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
		   Collin Tinen <vkt0516@live.missouristate.edu>
 */

#ifndef CSC232_HW02_AKERRECEIVER_H__
#define CSC232_HW02_AKERRECEIVER_H__

/**
 * The Receiver component of the Command design pattern.
 */
class AckerReceiver {
public:
    /**
     * The implementation of the Ackermann function.
     * @param m the first argument to the Ackermann function
     * @param n the second argument to the Ackermann function
     * @return The value of the Ackermann function is returned.
     */
    int acker(int m = 0, int n = 0);
};


#endif // CSC232_HW02_AKERRECEIVER_H__
