#include<iostream>
using namespace std;
int main()
{
    int **arr = new int*[3];
    for(int i = 0; i < 4; i++)
    {
        arr[i] = new int[i];
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr[i][j] = j;
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}