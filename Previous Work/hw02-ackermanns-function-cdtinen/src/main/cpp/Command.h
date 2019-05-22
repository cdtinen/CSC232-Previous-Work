/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermanns function.
 *
 * @file   Command.h
 * @brief  AckerCommand specification.
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef CSC232_HW02_COMMAND_H__
#define CSC232_HW02_COMMAND_H__

/**
 * The Command interface of the Command software design pattern.
 */
class Command {
public:
    /**
     * Abstract method to be defined in any Command implementation that shall execute the desired command.
     * @return A value defined by the particular command is returned.
     */
    virtual int execute() = 0;
};

#endif // CSC232_HW02_COMMAND_H__
