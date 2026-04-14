#include<iostream>
#include <cstring>
using namespace std;

int presentcheck(char str1[], char str2[])
{
    int len2 = strlen(str2);
    int i = 0, j = 0;
    int s = 0;
    while(str1[i] != '\0' && str2[j] != '\0')
    {
        if(str1[i] == str2[j])
        {
            if(j == 0) s = i;
            if(j == len2 - 1) return s;
            i++;
            j++;
        }
        else
        {
            j = 0;
            i = s + 1;
        }
    }
    return -1;
}

void mod(char str[], int len, int index)
{
    bool check = 1;
    while(check = 1)
    {
        check = 0;
        for(int i = index; i < strlen(str) - len; i++)
        {
            if(str[i + len] == '\0')
            {
                str[i] = '\0';
                return;
            }
            str[i] = str[i + len];
            check = 1;
        }
    }
    str[strlen(str) - len] = '\0';
}

void modify(char str1[], char str2[])
{
    int len2 = strlen(str2);
    int index = presentcheck(str1, str2);
    if(index == -1)
    {
        cout << str2 << " Not present in " << str1;
        return;
    }
    mod(str1,len2,index);
}

void print(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
}

int main()
{
    char str1[1000];
    cin.getline(str1,1000);
    char str2[1000];
    cin.getline(str2,1000);
    modify(str1,str2); 
    print(str1);
}