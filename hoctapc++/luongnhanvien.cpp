#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
void printVector(const vector<int>&);
void solonthu(const vector<int>&,int);
int soluongptmax(const vector<int>&);
void sapxeptrituyetdoi(const vector<int>&);
void insertionSort(vector<int>&);
int main() 
{
    int arr[12] = { 12 , 2 , 15, - 3,  8,  5,  1, - 8,  6,  0,  4,  15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    cout << "da copy mang ban dau de da cho co gia tri nhu sau :\n";
    printVector(vec);
    insertionSort(vec);
    cout << "Mang da duoc sap xep theo trinh tu sau: \n";
    printVector(vec);
    int solon;
    cout << "Moi ban chon so lon thu trong day ";
    cin >> solon;
    solonthu(vec, solon);
    cout << "\nSo luong phan tu co gia tri lon nhat la: " << soluongptmax(vec);
    sapxeptrituyetdoi(vec);
    cout << "Danh sach sap xep theo tri tuyet doi \n";
    printVector(vec);
    return 0;
}
void printVector(const vector<int>& vec) 
{
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) 
    {
        cout << vec[i];
        if (i != vec.size() - 1) 
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
void insertionSort(vector<int>& arr) 
{
    int n = arr.size();
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void solonthu(const vector<int>& arr, int sothu)
{
    int n = arr.size();
    if (sothu > n)
    {
        cout << "\nso can tim vuot hon kich thuoc cua vector";
        return;
    }
    if (sothu < 1)
    {
        cout << "So khong the be hon 1";
        return;
    }
    int max = arr[n - 1];
    int solan = 1;
    for (int i = n -1; i >= 0; i--)
    {
        if (max > arr[i])
        {
            solan++;
            max = arr[i];
        }
        if (solan == sothu)
        {
            cout << "so ban can tim la so " << arr[i];
            return;
        }
    }
    if (sothu >= solan and sothu <= n)
    {
        cout << "vi tri so can tim khong the tim ra do mang co cac phan tu co gia tri trung nhau ";
    }
}
int soluongptmax(const vector<int>& arr)
{
    int n = arr.size();
    int diem = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] == arr[n - 1])
        {
            diem++;
        }
        else
        {
            return diem;
        }
    }
}
void sapxeptrituyetdoi(const vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (abs(arr[j]) > abs(arr[j + 1])) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
