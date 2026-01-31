#include<iostream>
using namespace std;
int uniquenum(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j]) count++;
        }
        if(count == 1) return arr[i];
    }
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
    cout << "The unique number in the array is " << uniquenum(arr , n);

}