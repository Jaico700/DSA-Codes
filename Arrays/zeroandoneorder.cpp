#include<iostream>
using namespace std;
void organise(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while(i <= j)
    {
        if(arr[i] == 1 and arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        while(arr[i] == 0) i++;
        while(arr[j] == 1) j--;
    }
}
void printarr(int arr[], int size)
{
    cout << "Entered elements of array: " ;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void arrin(int arr[] , int size)
{
    cout << "Elements of array: " ;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{   int n;
    cout << "Length of array: " ;
    cin >> n ; 
    int arr[n];
    arrin(arr , n);
    printarr(arr , n);
    organise(arr , n);
    printarr(arr , n);
}