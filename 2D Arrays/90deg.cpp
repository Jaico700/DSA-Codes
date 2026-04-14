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
void rotate(int arr[][3], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    printarr(arr, 3, 3);
    cout << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col/2; j++)
        {
            swap(arr[i][j], arr[i][row - j - 1]);
        }
    }
    printarr(arr, 3, 3);
    cout << endl;
    
}


int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr,3,3);
}