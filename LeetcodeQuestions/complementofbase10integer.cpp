
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = n;
    int bits = 0;
    while(k != 0)
    {
        bits++;
        k = k/2;
    }

    int mask = 1;
    mask = (mask << bits) - 1;

    cout << (n ^ mask);
}