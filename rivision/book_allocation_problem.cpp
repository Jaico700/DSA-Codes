#include <iostream>
using namespace std;

bool possible(int arr[], int n, int m, int mid)
{
    int totalpages = 0;
    int students = 1;
    for(int i = 0; i < n; i++)
    {
        if(totalpages + arr[i] <= mid ) totalpages += arr[i];
        else
        {
            totalpages = arr[i];
            students++;
        }
        if(students > m || arr[i] > mid) return 0;
    }
    return 1;
}

int bookallocation(int arr[], int n, int m)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = 0;
    int e = sum;
    int mid = 0;
    while(s <= e)
    {
        mid = s + (e - s)/2;
        if(possible(arr,n,m,mid)) 
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return mid;
}

int main()
{
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;
    int ans = bookallocation(arr,n,m);
    cout << ans;
}