#include<iostream>
using namespace std;

int binary_search(int arr[], int s, int e, int key)
{
    if(s > e) return -1;
    int mid = s + (e - s)/2;
    if(arr[mid] == key) return mid;
    else if(arr[mid] < key) return binary_search(arr,mid + 1, e, key);
    else return binary_search(arr,s , mid - 1, key);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout << binary_search(arr,0,8,5);
}