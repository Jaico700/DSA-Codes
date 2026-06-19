#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[], vector<int> output, int index, vector<vector<int>> &ans , int n)
{
    if(index >= n) 
    {
        ans.push_back(output);
        return;
    }

    //exclude
    solve(arr, output, index + 1, ans , n);


    //include
    int element = arr[index];
    output.push_back(element);
    solve(arr, output, index + 1, ans, n);
}

int main()
{
    int arr[] = {1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(arr, output, index, ans , 3);

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
}