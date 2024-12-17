#pragma once
#include<iostream>
using namespace std;
template<typename T>
class Mylist
{
private:
    int size;
    int count;
    T * data;
public:
    Mylist(int size) {}
    ~Mylist() {}
    void insert(T elem);
    bool isFULL();
    bool isEmty();
    template<typename T>
    friend ostream& operator<<(ostream& out, const Mylist<T>&ds);
};