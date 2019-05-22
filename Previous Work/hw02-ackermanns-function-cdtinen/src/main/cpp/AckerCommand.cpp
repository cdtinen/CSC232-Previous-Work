/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermanns function.
 *
 * @file   AckerCommand.cpp
 * @brief  AckerCommand implementation.
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#include "AckerCommand.h"

AckerCommand::AckerCommand(int m, int n) : m_{m}, n_{n} {

}

int AckerCommand::getM() const {
    return m_;
}

void AckerCommand::setM(int m) {
    AckerCommand::m_ = m;
}

int AckerCommand::getN() const {
    return n_;
}

void AckerCommand::setN(int n) {
    AckerCommand::n_ = n;
}

int AckerCommand::execute() {
    AckerReceiver receiver{};
    return receiver.acker(getM(), getN());
}
