/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file   ResizableArrayStack.h
 * @author Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief  C++ resizable array stack using StackInterface.
 */

#ifndef CSC232_HW05_RESIZABLE_ARRAY_STACK_RESIZABLE_ARRAY_STACK_H
#define CSC232_HW05_RESIZABLE_ARRAY_STACK_RESIZABLE_ARRAY_STACK_H

#include "StackInterface.h"

namespace csc232 {
	template <typename ItemType>
	class ResizableArrayStack : public StackInterface<ItemType> {

	private:

		ItemType* items;

		int top, capacity, count;

		static const int DEFAULT_CAPACITY = 10;

	public:

		ResizableArrayStack();

		ResizableArrayStack(int initial_capacity);

		ResizableArrayStack(const ResizableArrayStack &rhs);

		ResizableArrayStack(ResizableArrayStack &&rhs) = delete;

		void operator=(const ResizableArrayStack<ItemType> &rhs);

		void operator=(ResizableArrayStack &&rhs) = delete;

		~ResizableArrayStack();

		virtual bool isEmpty() const = 0;

		virtual bool push(const ItemType &newEntry) = 0;

		virtual bool pop() = 0;

		virtual ItemType peek() const = 0;

		virtual int getCapacity() const;

	private:

		void init();

		void increase_size();

	};
	
	template<typename ItemType>
	csc232::ResizableArrayStack<ItemType>::ResizableArrayStack() : count(0), capacity(DEFAULT_CAPACITY) {
		init();
	}

	template<typename ItemType>
	csc232::ResizableArrayStack<ItemType>::ResizableArrayStack(int initial_capacity) : count(0), capacity(initial_capacity) {
		init();
	}

	template<typename ItemType>
	void csc232::ResizableArrayStack<ItemType>::init() {
		items = new ItemType[capacity];
		count = 0;
		top = capacity - 1;
	}

	template<typename ItemType>
	csc232::ResizableArrayStack<ItemType>::ResizableArrayStack(const ResizableArrayStack &rhs) {
		//*this = rhs;
		if (this != &rhs) {
			top = rhs.top;
			capacity = rhs.capacity;
			items = new ItemType[capacity];
			for (int i(0); i < capacity; i++) {
				items[i] = rhs.items[i];
			}
		}
	}

	template<typename ItemType>
	void csc232::ResizableArrayStack<ItemType>::operator=(const ResizableArrayStack<ItemType> &rhs) {
		if (this != rhs)
		{
			delete[] items;
			init();
			for (int i = 0; i < rhs.count; i++)
			{
				this->push(rhs.items[i]);
			}
		}
	}

	template<typename ItemType>
	csc232::ResizableArrayStack<ItemType>::~ResizableArrayStack() {
		delete[] items;
	}

	template<typename ItemType>
	bool csc232::ResizableArrayStack<ItemType>::isEmpty() const {
		return count == 0;
	}

	template<typename ItemType>
	bool csc232::ResizableArrayStack<ItemType>::push(const ItemType &newEntry) {
		if (count == capacity)
			increase_size();
		items[count++] = newEntry;
		return false;
	}

	template<typename ItemType>
	bool csc232::ResizableArrayStack<ItemType>::pop() {
		if (count == 0)
			throw std::underflow_error("Underflow exception.");
		count--;
		return false;
	}

	template<typename ItemType>
	ItemType csc232::ResizableArrayStack<ItemType>::peek() const {
		return items[top];
	}

	template<typename ItemType>
	int csc232::ResizableArrayStack<ItemType>::getCapacity() const {
		return capacity;
	}

	template<typename ItemType>
	void csc232::ResizableArrayStack<ItemType>::increase_size() {
		capacity = capacity * 2;
		ItemType *temp = new ItemType[capacity];

		for (int i = 0; i < capacity; i++)
			temp[i] = items[i];

		delete[] items;

		items = temp;
	}
	
}

#endif // CSC232_HW05_RESIZABLE_ARRAY_STACK_RESIZABLE_ARRAY_STACK_H
