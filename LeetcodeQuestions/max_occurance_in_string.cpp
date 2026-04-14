#include<iostream>
using namespace std;

bool present(char a, char b[])
{
    for(int i = 0; b[i] != '\0'; i++)
    {
        if(b[i] == a) return 1;
    }
    return 0;
}

char maxoccour(string str)
{
    char c;
    char r[108];
    r[0] = '\0';     
    int k = 0;
    int maxcount = -1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(present(str[i],r))
        {
            continue;
        }
        int count = 0;    
        for(int j = i; str[j] != '\0'; j++)
        {
            if(str[i] == str[j]) count++;
        }
        if(count > maxcount)
        {
            maxcount = count;
            c = str[i];
        }
        r[k++] = str[i];
    }
    return c;
}

int main()
{
    string str;
    cin >> str;
    char c = maxoccour(str);
    cout << c;
}