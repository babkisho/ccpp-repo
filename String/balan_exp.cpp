#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char exp[50];
    int open = 0, close = 0, start, end, len;
    cout<<"Emter exp: ";
    cin >> exp;
    len = strlen(exp);

    // // cout << len;
    for (start = 0, end = len - 1; start < len; start++, end--)
    {
        if (exp[start] == '(')
            open++;
        else if (exp[start] == ')')
            open--;
        if (exp[end] == ')')
            close++;
        else if (exp[end] == '(')
            close--;
        if (open < 0)
        {
            exp[start] = -1;
            open = 0;
        }
        if (close < 0)
        {
            exp[end] = -1;
            close = 0;
        }
    }
    for (start = 0; start < len; start++)
    {
        if (exp[start] != -1)
            cout << exp[start];
    }
    // cout << exp;
}
