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
    int e = col - 1;
    while(s < row && e >= 0)
    {
        int element = arr[s][e];
        if(element == key) return 1;
        else if(element > key)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return 0;
}


int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int key = 5;
    if(bis(arr,3,3, key)) cout << "Found";
    else cout << "Not Found";
}