// Niloufar Shamloo
// Lab05

#ifndef MY_STACK_H
#define MY_STACK_H
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
using namespace std;


class MyStack
{
public:
	MyStack(); //constructor
	~MyStack(); //destructor
	bool isEmpty() const;
	void push(char& c);
	char pull();
private:
	//vector <char> MyVec;
	list <char> MyList;
};
#endif