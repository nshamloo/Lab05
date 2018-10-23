// Lab 05
// Niloufar Shamloo
// 

#include "Lab7MyStack.h"
MyStack::MyStack()
{
	//vector<char>MyVec
	list<char>MyList; // initializing list
}

MyStack::~MyStack()
{
	//Call clear()
	MyList.clear();
}

bool MyStack::isEmpty() const
{
	return MyList.empty(); // if it is empty it returns true, false otherwise
}

void MyStack::push(char & c)
{
	//adds c to stack
	MyList.push_back(c);

}

char MyStack::pull()
{
	// look at the top element 
	char top = MyList.back();
	//delete the top element
	MyList.pop_back();

	return top;
}
