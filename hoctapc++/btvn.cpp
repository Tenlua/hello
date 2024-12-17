#include<iostream>
using namespace std;
void nhapmang(int ,int);
void xuatmang(int,int);
void swap(int &xp, int &yp)  
{  
    int temp = xp;  
    xp = yp;  
    yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(arr[j], arr[j+1]); 
            xuatmang(arr,n) ;
}  
int main()
{
    int a[9];
    nhapmang(a,9);
    bubbleSort(a,9);

}
void nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void xuatmang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}