#include<iostream>
using namespace std;

bool check(int arr[], int n, int mid, int nop)
{
    int paintercount = 1;
    int timesum = 0;
    for(int i = 0; i<n; i++)
    {
        if(timesum + arr[i] <= mid) timesum += arr[i];
        else
        {
            paintercount++;
            if(paintercount > nop || arr[i] > mid) return false;
            timesum = arr[i];
        }
    }
    return true;
}

int search(int arr[], int n, int nop)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid;
    while( s <= e)
    {
        mid = s + (e - s)/2;
        if(check(arr, n, mid, nop))
        {
            e = mid - 1;
            ans = mid;
        }
        else s = mid + 1;
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
    int nop;
    cout << "Number of Panters: " ;
    cin >> nop;
    cout << "The answer is ";
    int result = search(arr, n, nop);
    cout << result;
}