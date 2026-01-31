#include<iostream>
using namespace std;
int dup(int arr[], int size)
{
    int ans = 0;
    for(int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    for(int i = 1; i < size; i++)
    {
        ans = ans^i;
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
    cout << "The duplicate element is " << dup(arr , n);

}