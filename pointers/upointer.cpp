#include <iostream>
using namespace std;

void update(int **ptr2)
{
    *ptr2 = *ptr2 + 1;
}

int main()
{
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = & ptr1;
    cout << *ptr2 << endl;
    update(ptr2);
    cout << *ptr2 << endl;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
}