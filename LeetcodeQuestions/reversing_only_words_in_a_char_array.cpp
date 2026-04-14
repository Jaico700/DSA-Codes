//incomplete + wrong


#include <iostream>
#include <vector>
using namespace std;

void lowercase(char str[])
{
    for(int i = 0; str[i] != 0; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
    }
}

void printv(vector <char>v)
{
    for(int i = 0; v[i] != '\0'; i++)
    {
        cout << v[i];
    }
}

int getlength(vector <char> v)
{
    int length = 0;
    for(int i = 0; v[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void reverse(vector <char>&v,int length)
{
    int s = 0;
    int e = length - 1;
    while(s <= e)
    {
        swap(v[s++],v[e--]);
    }
}

string required_str(char str[])
{
    string ch;
    vector <char>v; 
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            int length = getlength(v);
            cout << length << endl;
            reverse(v,length);
            printv(v);
            cout << endl;   
            int k = 0;
            for(int j = 0; v[j] != '\0'; j++)
            {
                ch[k] = v[j];
                k++;
            }
            ch[k] = ' ';
            v.clear();
            continue;
        }
        v.push_back(str[i]);
    }
    return ch;
}

int main()
{
    char str[100];
    cin.getline(str,100);
    lowercase(str);
    string ch = required_str(str);
    cout << ch;
}