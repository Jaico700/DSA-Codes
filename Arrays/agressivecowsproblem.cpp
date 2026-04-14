#include <iostream>
#include <algorithm>

using namespace std;

bool possible(int stall[], int n, int c, int mid)
{
    int lastplacedcow = 0;
    int ncows = 1;
    int i = 1;
    while(i < n)
    {
        if(stall[i] - stall[lastplacedcow] >= mid)
        {
            ncows++;
            lastplacedcow = i;
        }
        if(ncows == c) return 1;
        i++;
    }
    return 0;
    return 0;
}

int agressivecows(int stall[], int n, int c)
{
    int s = 1;
    int maxm = stall[0];
    int minm = stall[0];
    for(int i = 0; i < n; i ++)
    {
        maxm = max(maxm,stall[i]);
    }
    for(int i = 0; i < n; i ++)
    {
        minm = min(minm,stall[i]);
    }
    int e = maxm - minm;
    int ans = -1;
    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(possible(stall, n , c, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int stall[] = {1 , 2 , 8 , 4 , 9};
    int n = 5;
    int c = 2;
    sort(stall, stall + n);
    int ans = agressivecows(stall, n, c);
    cout << ans;
}