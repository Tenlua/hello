#include"Mylist.h"
template<typename T>
Mylist<T>::Mylist(int size)
{
    this->size=size;
    count =0;
    data=new T[size];
}
template<typename T>
Mylist<T>::~Mylist()
{
    if(data!=NULL)
    {
        delete []data;
    }
}
template<typename T>
bool Mylist<T>::isFULL()
{
    return (count==size);
}
template<typename T>
bool Mylist<T>::isEmty()
{
    return count==0;
}
template<typename T>
void Mylist<T>::insert(T elem)
{
    if(isFULL()==false)
    {
        data[count]=elem;
        count++;
    }
    else
    {
        cout<<"List is full";
    }
}
template<typename T>
ostream& operator<<(ostream& out, const Mylist<T>&ds)
{
    for(int i=0;i<ds.count;i++)
    {
        out<<ds.data[i];
    }
    out<<endl;
    return out;
}