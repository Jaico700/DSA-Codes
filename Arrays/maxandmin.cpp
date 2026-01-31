#include<iostream>
using namespace std;
void printarr(int arr[], int size)
{
    cout << "Entered elements of array: ";
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
    cout << endl;
}

void min(int arr[], int size)
{
    int min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(min > arr[i]) min = arr[i];
    }
    cout << "Minimum element of array is: " << min << endl;
}

void max(int arr[], int size)
{
    int max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    cout << "Maximum element of array is: " << max << endl;
}


int main()
{   int n;
    cout << "Length of array: " ;
    cin >> n ; 
    int arr[1000];
    arrin(arr , n);
    printarr(arr , n);
    max(arr,n);
    min(arr,n);
}