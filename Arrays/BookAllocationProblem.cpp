#include<iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1; 
    int pagesum = 0;
    for(int i = 0; i < n; i++)
    {
        if(pagesum + arr[i] <= mid) pagesum += arr[i];
        else
        {
            studentcount ++;
            if(studentcount > m || arr[i] > mid) return false;
            pagesum = arr[i];
        }
    }
    return true;
}

int booksorting(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(ispossible(arr, n, m, mid)) 
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
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
    int nos;
    cout << "Number of students: " ;
    cin >> nos;
    cout << "The answer is ";
    int result = booksorting(arr, n, nos);
    cout << result;
}