// Lab 05
// Niloufar Shamloo
#include "Lab7MyStack.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>
#include <ctime>
using namespace std;

string stringReversal1(string input)
{
	if (!input.empty()) // if input string is empty then no pint in this
	{
		stack <char> MyStack; // creating a new stack

		for (int i = 0; i < input.size(); i++)
		{
			MyStack.push(input[i]); // oushing characters from string into stack one by one
		}

		//Put stack elements into string
		string MyString;
		for (int i = 0; i < input.size(); i++)
		{
			// Adding characters from the stack into my string
			MyString += MyStack.top();

			//remove the character from the stack
			MyStack.pop();
		}
		return MyString; // which is reversed now

	}
	else
	{
		return ""; //return empty if input is empty.
	}
}

string stringReversal2(string input)
{
	if (!input.empty()) // if input string is empty then no pint in this
	{
		vector <char> MyVector; // creating a new vector

		for (int i = 0; i < input.size(); i++)
		{
			MyVector.push_back(input[i]); // oushing characters from string into vector one by one
		}

		//Put vector elements into string
		string MyString;
		for (int i = 0; i < input.size(); i++)
		{
			// Adding characters from the vector into my string
			MyString += MyVector.back();

			//remove the character from the vector
			MyVector.pop_back();
		}
		return MyString; // which is reversed now

	}
	else
	{
		return ""; //return empty if input is empty.
	}
}

string stringReversal3(string input)
{
	if (!input.empty()) // if input string is empty then no pint in this
	{
		list <char> MyList; // creating a new list

		for (int i = 0; i < input.size(); i++)
		{
			MyList.push_back(input[i]); // oushing characters from string into list one by one
		}

		//Put stack elements into string
		string MyString;
		for (int i = 0; i < input.size(); i++)
		{
			// Adding characters from the list into my string
			MyString += MyList.back();

			//remove the character from the list
			MyList.pop_back();
		}
		return MyString; // which is reversed now

	}
	else
	{
		return ""; //return empty if input is empty.
	}

}

string stringReversal4(string input)
{
	if (!input.empty()) // if input string is empty then no pint in this
	{
		MyStack MyStac; // creating a new stack

		for (int i = 0; i < input.size(); i++)
		{
			MyStac.push(input[i]); // oushing characters from string into stack one by one
		}

		//Put stack elements into string
		string MyString;
		for (int i = 0; i < input.size(); i++)
		{
			// Adding characters from the stack into my string and removes it later
			MyString += MyStac.pull();
		}
		return MyString; // which is reversed now

	}
	else
	{
		return ""; //return empty if input is empty.
	}
}




int main()
{
	//Testing stringReversall with empty string
	cout << "Testing with empty string" << endl;
	cout << stringReversal1("");
	cout << endl;

	//Creating input string
	string test = "Computer Science is killing me.";
	cout << "Original is: ";
	cout << test << endl;

	cout << stringReversal1(test) << endl;
	cout << stringReversal2(test) << endl;
	cout << stringReversal3(test) << endl;
	cout << stringReversal4(test) << endl;

	system("pause");
} 


