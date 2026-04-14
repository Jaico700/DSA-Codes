#include <iostream>
using namespace std;

int *update(int *arr,int n, int data)
{
    for(int i = 0; i < n; i++)
    {
        *(arr + i) = data;
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    int *newarr = update(arr ,n, 10);

    for(int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    delete[] arr;
    return 0; 
}