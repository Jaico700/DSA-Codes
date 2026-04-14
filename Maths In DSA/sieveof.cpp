#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 50;
    vector<bool> isprime(n + 1, true);
    int cnt = 0;
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= n; i++) 
    {
        if (isprime[i]) {
            cout << i << " ";
        }
    }
}