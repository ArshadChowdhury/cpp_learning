

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

    /*
    cout << factorial(5) << endl;
    cout << NCR(5, 2) << endl;

    int num = 10;

    cout << num << endl;

    cout << incrementByPtr(&num) << endl;
    cout << incrementByPtr(&num) << endl;
    cout << incrementByPtr(&num) << endl;

    int a[10];

    for(int i=0; i<=9; i++){
        cout << a[i] << ",";
    }

    int b[10] = {3,4,6,2,5};

    cout << "\n" << endl;

    for(int i=0; i<=9; i++){
        cout << b[i] << ",";
    }

    int c[10] = {3,4,6,2,5};


    for(int i=0; i<=9; i++){
            c[i] = c[i] * c[i];
        cout << c[i] << ",";
    }
    cout << endl;

    for(int i=9; i>=0; i--){
            c[i] = c[i] * c[i];
        cout << c[i] << ",";
    }

        int numbers[5] = {3, 2 ,1,5,8};

        int key = 8;
        for(int i=0; i<=5; i++){
            if(numbers[i] == key) {
                cout << i <<endl;
            }
        }

          int n;
        cin >> n;


        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int key;
        cin >> key;
        int i;
        for(i =0; i< n; i++){
            if(key == a[i]){
                cout <<"Found the index at" << i << endl;
                break;
            }
        }

        if(i == n){
            cout << "The element "<< key << "is not present";

        }
                  */

        int n;
        cin >> n;

        int arr[1000];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                for(int k = i; k<=j; k++){
                    cout << arr[k] << ",";
                }
                cout << endl;
            }
        }



    return 0;
}
