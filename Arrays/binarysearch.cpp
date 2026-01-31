#include<iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while( s <= e)
    {
        mid = s + (e - s)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
    
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
    int key;
    cout << "Key: " ;
    cin >> key;
    cout << "The index equal to key is ";
    int result = search(arr, n, key);
    if(result == -1) cout << "none";
    else cout << result;
}