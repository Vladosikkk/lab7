#include <iostream>
#include <conio.h>
using namespace std;
int pp(int n)
{
    static int Sum = 0;
    Sum += n;
    return Sum;
}

int mm(int n)
{
    static int product = 1;
    product *= n;
    return product;
}
void main()
{
    int n, Sum, product;
    cout << "Enter a number ";
    cin >> n;
    for (int i = 1; i <= n; i++) Sum = pp(i), product = mm(i);
    cout << "Sum = " << Sum << ", Product = " << product;
}