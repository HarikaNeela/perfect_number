#include<iostream>
using namespace std;
int main ()
{
    int i, n, div, sum=0;
    cout << "Enter a number ";
    cin >> n;
    for (i=1; i <n; i++)
    {
        div = n % i;
        if (div == 0)
            sum = sum + i;
    }
    if (sum == n)
        cout << n <<" is a perfect number.";
    else
        cout << n <<" is not a perfect number.";
    return 0 ;
}
