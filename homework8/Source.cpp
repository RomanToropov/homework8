#include <iostream>
using namespace std;

int power(int a, int n)
{
    if (!n) return 1;
    return a * power(a, --n);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

void main()
{
    //factorial

    cout << factorial(16) << endl;

    system("pause");
    //power

    cout << power(2, 11) << endl;
    system("pause");
    return;
    //fibonacci?????????????????????????????????????????????????????
}
