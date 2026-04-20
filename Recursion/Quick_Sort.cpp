#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s + 1; i <= e; i++)
    {
        if(arr[i] <= pivot) cnt++;
    }
    int pivot_index = s + cnt;
    swap(arr[pivot_index], arr[s]);
    int i = s; 
    int j = e;
    while(i < pivot_index && j > pivot_index)
    {
        while(arr[i] < arr[pivot_index]) i++;
        while(arr[j] > arr[pivot_index]) j++; 
        if(i < pivot_index && j > pivot_index) swap(arr[i++] , arr[j--]);
    }
    return pivot_index;
}

void quick_sort(int arr[], int s, int e)
{
    if(s >= e) return;
    int partition_index = partition(arr, s, e);
    quick_sort(arr, s , partition_index - 1);
    quick_sort(arr, partition_index + 1, e);

}

int main()
{
    int arr[] = {9,7,4,3,1};
    quick_sort(arr,0,4);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}