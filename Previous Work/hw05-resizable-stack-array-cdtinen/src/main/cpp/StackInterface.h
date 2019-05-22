/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file   StackInterface.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Listing 6-1 - A C++ interface for stacks.
 */

#ifndef CSC232_HW05_RESIZABLE_ARRAY_STACK_STACK_INTERFACE_H
#define CSC232_HW05_RESIZABLE_ARRAY_STACK_STACK_INTERFACE_H

namespace csc232 {
	template<typename ItemType>
	class StackInterface {
	public:
		/**
		 * Sees whether the stack is empty.
		 * @return True if the stack is empty, or false if not.
		 */
		virtual bool isEmpty() const = 0;

		/**
		 * Adds a new entry to the top of this stack.
		 * @param  newEntry The object to be added as a new entry.
		 * @return True if the addition is successful or false if not.
		 * @post   If the operation was successful, newEntry is at the top of the stack.
		 */
		virtual bool push(const ItemType &newEntry) = 0;

		/**
		 * Removes the top of this stack.
		 * @return True if the removal was successful or false if not.
		 * @post   If the operation was successful, the top of the stack has been removed.
		 */
		virtual bool pop() = 0;

		/**
		 * Returns a copy of the top of this stack.
		 * @return A copy of the top the stack.
		 * @post   A copy of the top of the stack has been returned, and the stack is unchanged.
		 */
		virtual ItemType peek() const = 0;

		/**
		 * Destroys this stack and frees its assigned memory
		 */
		virtual ~StackInterface() = default;
	};
}

#endif //CSC232_HW05_RESIZABLE_ARRAY_STACK_STACK_INTERFACE_H
