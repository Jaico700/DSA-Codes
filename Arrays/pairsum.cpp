#include<iostream>
using namespace std;
void pairsum(int arr[], int size, int num)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] == num) 
            {
                cout << arr[i] <<" "<< arr[j] << endl;
                count = 1;
            }
        }
    }
    if(count == 0) cout << "None";
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
    int num;
    cout << "Required sum of numbers: " ;
    cin >> num;
    cout << "The elements with sum " << num << " is/are "<< endl;
    pairsum(arr , n, num);

}