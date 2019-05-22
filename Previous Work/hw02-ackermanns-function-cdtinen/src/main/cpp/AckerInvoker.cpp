//
// Created by James Daehn on 2019-02-04.
//

#include "AckerInvoker.h"

AckerInvoker::AckerInvoker(int m, int n) : m_{m}, n_{n} {

}

int AckerInvoker::execute() {
    auto ackerCommand = new AckerCommand{m_, n_};
    return ackerCommand->execute();
}
