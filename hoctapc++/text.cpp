#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
bool snt(long long);
int main() 
{
    auto start = chrono::high_resolution_clock::now();
    long long n=9223372036854775783;
    if (snt(n)) 
    {
        cout << n<<" la so nguyen to ";
    } else 
    {
        cout << n<< "ko phai so nguyen to";
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "time: " << duration.count() << " microseconds" << endl;
    return 0;
}
bool snt(long long n) 
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long  i = 5; i*i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) 
        {
            return false;
        }
    }
    return true;
}