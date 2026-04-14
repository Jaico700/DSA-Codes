#include<iostream>
using namespace std;
int main()
{
    char ch1[6] = {'a', 'b', 'c', 'd','e','f'};
    char ch2[6] = "abcde";
    cout << ch1 << endl;
    cout << ch2 << endl; 
    
    char *c = &ch2[0];
    cout << ch2 << endl; 

    
}