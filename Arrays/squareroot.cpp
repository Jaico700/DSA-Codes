#include <iostream>
using namespace std;

int sqroot(int n)
{
    int arr[100];
    for(int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    int s = 0;
    int e = n - 1;
    int mid;
    while(s <= e)
    {
        mid = s + (e-s)/2;
        if((arr[mid])*(arr[mid]) < n) s = mid + 1;
        else if((arr[mid])*(arr[mid]) > n) e = mid - 1;
        else return arr[mid];
    }
    return arr[mid];
}

double precisesqroot(int n ,int p, double ans)
{
    double factor = 1;
    for(int i = 1; i <= p; i++)
    {
        factor = factor / 10;
        for(double j = ans; j*j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "The number whose square root is to be found: ";
    cin >> n;
    
    double ans = sqroot(n); 
    cout << "The ans is " << ans << endl;
    int p;
    cout << "The number of pricise digits required: ";
    cin >> p;
    ans = precisesqroot(n,p, ans);
    cout << "The ans is " << ans << endl;
}