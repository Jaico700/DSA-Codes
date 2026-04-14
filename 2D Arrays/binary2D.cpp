#include<iostream>
using namespace std;

void printarr(int arr[][3], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int bis(int arr[][3], int row, int col, int key)
{
    int s = 0;
    int e = row * col - 1;
    while(s < e)
    {
        int mid = s + (e - s)/2;
        int element = arr[mid/row][mid%col];
        if(element == key) return 1;
        else if(element > key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return 0;
}


int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int key = 0;
    if(bis(arr,3,3, key)) cout << "Found";
    else cout << "Not Found";
}