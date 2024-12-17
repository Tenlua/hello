#include"Stack.h"
template<typename T>
Stack<T>::Stack(int size) :top(-1), size(size)
{
	arrElement = new T[size];
}
template<typename T>
Stack<T>::~Stack()
{
	if (arrElement == NULL)
	{
		delete[]arrElement;
	}
}
template<typename T>
bool Stack<T>::isEmpty() const
{
	return top == -1;
}
template<typename T>
void Stack<T>::push(const T& e)
{
	if (top == size - 1)//mang full
	{
		size *= 2;//o day cho mang to gap doi nhe
		//sau do tao ra mot cai mang ms ne
		T* temp = new T[size];// mang nay de luu cai mang cu ne
		//sau do cho vong lap
		for (int i = 0; i <= top; i++)
		{
			temp[i] = arrElement[i];
			//luu xong thi lam sao ne
		}
		delete[] arrElement;
		// r sao nua ne
		arrElement = temp;
	}
	//va h them vao nhe
	arrElement[++top] = e;
}
template<typename T>
void Stack<T>::pop()
{
	if (isEmpty())
	{
		cerr << "errol!";
		return;
	}
	top--;
}
template<typename T>
int Stack<T>::GetSize()const
{
	return top + 1;
}
template<typename T>
T Stack<T>::GetTop()const
{
	if (isEmpty())
	{
		cerr << "Errol!";
		return T();
	}
	return arrElement[top];
}
int main()
{
    Stack<int> a(3);
    a.push(3);
    a.push(4);
     a.push(6);//dep
    cout<<a.GetSize()<<" ";
    cout<<a.GetTop();
    return 0;
}//chiu game haha