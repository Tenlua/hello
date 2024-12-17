#include<iostream>
using namespace std;
template<typename T>
class Stack
{//tat tho
public://13 con 10  et o et
	Stack(int size );
	bool isEmpty()const;
	void push(const T&);
	void pop();
	int GetSize() const;
	T GetTop()const;
	~Stack();
private:
	int top, size;
	T* arrElement;
};//loi 17 what
