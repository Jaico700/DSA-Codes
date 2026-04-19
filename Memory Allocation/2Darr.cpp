#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int m = 5;
    // creaing the first row which contains pointers
    int** arr = new int*[n];
    //creating row numbers of arrays with pointers of row pointing at the array start
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    //taking input
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[i][j] = 5;
        }
    }
    //printing 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }
    //freeing memory 
    for(int i = 0; i < n; i++)
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}