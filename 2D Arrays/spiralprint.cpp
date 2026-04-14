#include<iostream>
using namespace std;

void spiralprint(int arr[][3],int row, int col)
{
    int sr = 0;
    int sc = 0;
    int er = row - 1;
    int ec = col - 1;
    int total = row * col;
    int cnt = 0;
    while(cnt < total)
    {
        for(int i = sc; i <= ec && cnt < total; i++)
        {
            cout << arr[sr][i] << " ";
            cnt++;
        }
        sr++;
        for(int i = sr; i <= er && cnt < total; i++)
        {
            cout << arr[i][ec] << " ";
            cnt++;
        }
        ec--;
        for(int i = ec; i >= sc && cnt < total; i--)
        {
            cout << arr[er][i] << " ";
            cnt++;
        }
        er--;
        for(int i = er; i >= sr && cnt < total; i--)
        {
            cout << arr[i][sc] << " ";
            cnt++;
        }
        sc++;
    }
}

int main()
{
    int arr[3][3] = {{1,2,3},{8,9,4},{7,6,5}};
    spiralprint(arr,3,3);
}