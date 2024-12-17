#include<iostream>
using namespace std;
struct Node
{
    char data;
    Node * left , *right;
};
typedef struct Node NODE;
void INit(NODE * &Root)
{
    Root=nullptr;
}
Node * GetRoot(char );
int main()
{
    return 0;
}