

#include <iostream>

using namespace std;

int factorial (int n)
{

    int ans = 1;

    for(int i=1; i<= n; i++)
    {
        ans = ans * i;
    }
    return ans;

}

int NCR ( int n, int r)
{

    int ans = factorial(n) / (factorial (n -r ) * factorial(r));
    return ans;

}

int increment(int b)
{
    b = b + 1;
    cout << b << endl;
    return b;
}

int incrementByPtr ( int *cPtr)
{
    *cPtr = *cPtr + 1;
    return *cPtr;
}

int main()
{
    cout << "Hello Project 1" << endl;
    cout << factorial(5) << endl;
    cout << NCR(5, 2) << endl;

    int num = 10;

    cout << num << endl;

    cout << incrementByPtr(&num) << endl;
    cout << incrementByPtr(&num) << endl;
    cout << incrementByPtr(&num) << endl;
    return 0;
}
