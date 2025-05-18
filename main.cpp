#include <iostream>

using namespace std;

void bubble(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    
}

int main()
{
    int n;
    cout << "Enter the number of array elements:" << endl;
    cin >> n;
    int* a = new int [n];
    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubble(a, n);
    cout << "Sorted array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    delete[] a;

    return 0;
}
