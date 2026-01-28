#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int a = 12345;
   int ans = 0;
   for(int i = 4; i >= 0; i--)
   {
    int digit = a % 10;
    ans = digit * pow(10,i) + ans;
    a /= 10;
   }
   cout << ans;
}