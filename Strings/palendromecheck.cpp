#include <iostream>
using namespace std;

void validate(char str[], char validstr[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' and str[i] <= 'Z') str[i] += 32;
    }

    int j = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' and str[i] <= 'z')
        {
            validstr[j] = str[i];
            j++;
        }
    }
    validstr[j] = '\0';
}

bool palendromecheck(char ch[], int length)
{
    int s = 0;
    int e = length - 1;
    while(s <= e)
    {
        if(ch[s++] != ch[e--]) return 0;
    }
    return 1;
}

int getlength(char ch[])
{
    int length = 0;
    while(ch[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[1000];
    cin.getline(str,1000);

    char validstr[1000];
    validate(str, validstr);
    cout << str << endl;
    cout << validstr << endl;
    int length = getlength(validstr);
    cout << palendromecheck(validstr, length);
}   