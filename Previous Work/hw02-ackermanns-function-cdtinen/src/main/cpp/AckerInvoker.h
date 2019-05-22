//
// Created by James Daehn on 2019-02-04.
//

#ifndef HW02_ACKERINVOKER_H
#define HW02_ACKERINVOKER_H

#include "Command.h"
#include "AckerCommand.h"

class AckerInvoker {
public:
    explicit AckerInvoker(int m = 0, int n = 0);

    int execute();

private:
    int m_;
    int n_;
};


#endif //HW02_ACKERINVOKER_H
