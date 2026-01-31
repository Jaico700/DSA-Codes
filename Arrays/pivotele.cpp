// samajh toh aa gaya but still doubtful 
#include<iostream>
using namespace std;

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
    cout << "The pivot index equal to ";
    int result = pivot(arr, n);
    cout << result;
}