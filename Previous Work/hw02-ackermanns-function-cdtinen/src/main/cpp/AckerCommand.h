/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermanns function.
 *
 * @file   AckerCommand.h
 * @brief  AckerCommand specification.
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef CSC232_HW02_AKER_COMMAND_H__
#define CSC232_HW02_AKER_COMMAND_H__

#include "Command.h"
#include "AckerReceiver.h"

class AckerCommand : public Command {
public:
    /**
     * Initializing constructor.
     * @param m the first argument to the Ackermann function; defaults to 0
     * @param n the second argument to the Ackermann function; defaults to 0
     */
    explicit AckerCommand(int m = 0, int n = 0);

    /* Explicit declaration of the big five */

    /**
     * Copy constructor.
     * @param command the source (lvalue) Command used to create a new AckerCommand
     */
    AckerCommand(const AckerCommand &command) = default;

    /**
     * Move constructor.
     * @param ackerCommand the source (rvalue) Command used to create a new AckerCommand
     */
    AckerCommand(AckerCommand &&ackerCommand) = default;

    /**
     * Copy assignment operator.
     * @param rhs the source (lvalue) Command used to create a new AckerCommand via an assignment
     * @return A reference to a new AckerCommand that is identical to rhs in state is returned.
     */
    AckerCommand &operator=(const AckerCommand &rhs) = default;

    /**
     * Move assignment operator.
     * @param rhs the source (rvalue) Command used to create a new AckerCommand via an assignment
     * @return A reference to a new AckerCommand that is identical to rhs in state is returned.
     */
    AckerCommand &operator=(AckerCommand &&rhs) = default;

    /**
     * Destructor.
     */
    ~AckerCommand() = default;

    /* AckerCommand accessors and mutators. */

    /**
     * m accessor.
     * @return The value of the first argument used in the Ackermann function is returned.
     */
    int getM() const;

    /**
     * m mutator.
     * @param m the value of the first argument used in the Ackermann function.
     */
    void setM(int m);

    /**
     * n accessor.
     * @return The value of the second argument used in the Ackermann function is returned.
     */
    int getN() const;

    /**
     * n mutator.
     * @param n the value of the second argument used in the Ackermann function.
     */
    void setN(int n);

    /**
     * The implementation of the Command to execute.
     * @return The value of the Ackermann function is returned.
     */
    int execute() override;

private:
    /**
     * The first argument to the Ackermann function.
     */
    int m_;

    /**
     * The second argument to the Ackermann function.
     */
    int n_;
};


#endif // CSC232_HW02_AKER_COMMAND_H__
