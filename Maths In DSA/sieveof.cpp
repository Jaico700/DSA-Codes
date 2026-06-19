#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 100;
    vector <bool> prime(n + 1,true);
    
    prime[0] = prime[1] = false;
    int cnt = 0;
    for(int i = 2; i < n; i++)
    {
        if(prime[i])
        {
            cout << i << " ";
            cnt++;
            for(int j = 2*i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    cout << cnt;
}