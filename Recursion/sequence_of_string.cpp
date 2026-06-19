#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans , int n)
{
    if(index >= n) 
    {
        ans.push_back(output);
        return;
    }

    //exclude
    solve(str, output, index + 1, ans , n);


    //include
    int element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans, n);
}

int main()
{
    string str = "abcd";
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans , 4);

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
}