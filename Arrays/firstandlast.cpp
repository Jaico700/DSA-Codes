#include<iostream>
using namespace std;

int searchfirst(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while( s <= e)
    {
        mid = s + (e - s)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key) s = mid + 1;
        else e = mid - 1;
    }
    return ans; 
}

int searchlast(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while( s <= e)
    {
        mid = s + (e - s)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key) s = mid + 1;
        else e = mid - 1;
    }
    return ans; 
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
    int first = searchfirst(arr, n, key);
    if(first == -1) cout << "none"<< endl;
    else cout << first << endl;
    int last = searchlast(arr, n, key);
    if(last == -1) cout << "none"<< endl;
    else cout << last << endl;
}