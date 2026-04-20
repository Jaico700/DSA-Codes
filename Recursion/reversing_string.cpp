#include<iostream>
#include<string>
using namespace std;

string reverse(string str, int s, int e)
{
    if(s > e) return str;
    swap(str[s],str[e]);
    return reverse(str, s + 1, e - 1);
}

int main()
{
    string str = "abcde";

    cout << reverse(str,0,4);
    
}