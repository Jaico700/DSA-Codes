#include<iostream>
using namespace std;


void altrev(int arr[], int size)
{
    int one = 0;
    int two = 1; 
    while(two < size)
    {
        swap(arr[one],arr[two]);
        one = one + 2;
        two = two + 2;
    }
}
void printarr(int arr[], int size)
{
    cout << "Elements in array: " ;
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
    altrev(arr , n);
    printarr(arr , n);

}