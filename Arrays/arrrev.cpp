#include<iostream>
using namespace std;


void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1; 
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}





// Same same but diffrent 
// Interview ke liye phele wala method better hai 
// void reverse(int arr[], int size)
// {
//     for(int i = 0; i < size / 2; i++)
//     {
//         swap(arr[i] , arr[size - 1 - i]);
//     }
// }
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
    reverse(arr , n);
    printarr(arr , n);

}