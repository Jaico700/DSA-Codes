#include<iostream>
using namespace std;


void merge(int arr[], int s, int e)
{
    int mid = s + (e - s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int arr1[len1];
    int arr2[len2];
    int cnt = 0;
    int i = s;
    while(cnt < len1)
    {
        arr1[cnt++] = arr[i++];
    }
    cnt = 0;
    i = mid + 1;
    while(cnt < len2)
    {
        arr2[cnt++] = arr[i++];
    }
    int a = 0;
    int b = 0;
    i = s;
    while(a < len1 && b < len2)
    {
        if(arr1[a] < arr2[b]) arr[i++] = arr1[a++];
        else arr[i++] = arr2[b++];
    }
    while(a < len1)
    {
        arr[i++] = arr1[a++];
    }
    while(b < len2)
    {
        arr[i++] = arr2[b++];
    }
    return;
}

void Merge_sort(int arr[], int s, int e)
{
    if(s >= e) return;
    int mid = s + (e - s)/2;
    Merge_sort(arr, s, mid);
    Merge_sort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[] = {9,7,4,3,1};
    Merge_sort(arr,0,4);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}