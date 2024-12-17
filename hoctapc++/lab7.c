#include<stdio.h> 
#include<conio.h>
void hoandoi(int &a,)
 
void SelectionSort(int a[],int N ){ //Ghi chú: tại sao không sử dụng kí hiệu & trong hàm này? 
 	int min; //chỉ số phần tử nhỏ nhất trong dãy hiện hành 
  	for (int  i=0; i<N-1 ; i++){ //Ghi chu: vòng lặp này dùng để làm gì?   	 	   min = i; 
  
 	 	   for(int j = i+1; j < N ; j++){ //Ghi chu: vòng lặp này dùng để làm gì? 
 	    	   if (a[j] < a[min]){  	 	    	             min = j; //Ghi chu: thao tác này dùng để làm gì? 
                         } 
               } 
 
 	 	    if (min != i){ 
 	    	   Swap(a[min], a[i]); //Ghi chu: thao tác này dùng để làm gì? 
               } 
 	} 
} 
 
void main() 
{ 
 	int x[10] = {12, 2, 8, 5, 1, 6, 4, 15}; // khởi tạo các giá trị trong mảng   	int n = 8; // số phần tử của mảng 
 
 	SelectionSort(x, n); 
 
 	for (int  i=0; i<n ; i++){ 
 	 	printf("%d ", x[i]); 
 	} 
} 