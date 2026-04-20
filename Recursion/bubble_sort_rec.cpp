#include<iostream>
#include<string>
using namespace std;

void bubble_sort(int arr[], int size)
{
    if(size == 0 || size == 1) return;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > arr[i + 1]) swap(arr[i] , arr[i + 1]);
    }
    bubble_sort(arr, size - 1);
}

int main()
{
    int arr[] = {9,7,4,3,1};
    bubble_sort(arr, 5);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}