#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5;
    int *b;
    b=&a;
    printf("\nGia tri cua a la :%d",a);
    printf("\nDia chi cua a la : %p",&a);
    printf("\nGia tri cua b la :%d",*b);
    printf("\nMien gia tri cua b la : %p",b);
    printf("\nDia chi thuc su cua con tro b la :%p",&b);
    getch();
    return 0;
}
