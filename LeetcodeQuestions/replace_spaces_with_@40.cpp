#include<iostream>
using namespace std;

void modify(char str1[], char str2[])
{
    int k = 0;
    for(int i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] == ' ')
        {
            str2[k++] = '@';
            str2[k++] = '4';
            str2[k++] = '0';
            continue;
        }
        str2[k++] = str1[i];
    }
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
    char str2[1000] = {'0'};
    modify(str1,str2);
    print(str2);
}