#include<iostream>
using namespace std;

int search(int arr[], int n, int pivott, int key)
{
    int s,e,mid;
    int ans = -1;
    if(key >= arr[pivott] and key <= arr[n-1]) 
    {
        s = pivott;
        e = n - 1;
        mid;
    }
    else
    {
        s = 0;
        e = pivott - 1;
        mid;
    }
    while( s <= e)
    {
        mid = s + (e - s)/2;
        if(arr[mid] == key) 
        {
            ans = mid;
            break;
        }
        else if(arr[mid] < key) s = mid + 1;
        else e = mid - 1;
    }
    return ans;
}
int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while( s < e)
    {
        mid = s + (e - s)/2;
        if(arr[mid] >= arr[0]) s = mid + 1;
        else e = mid;
    }
    return s;
    
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
    cin >> key ;  
    int pivott = pivot(arr, n);
    int keyindex = search(arr, n ,pivott , key);
    cout << "The index of key is ";
    if(keyindex == -1) cout << "none";
    else cout << keyindex;
}