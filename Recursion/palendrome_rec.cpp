#include<iostream>
#include<string>
using namespace std;

bool palendrome_check(string str, int s, int e)
{
    if(s > e) return true;
    if(str[s] != str[e]) return false;
    return palendrome_check(str, s + 1, e - 1);
}

int main()
{
    string str = "abcba";

    cout << palendrome_check(str,0,4);
    
}