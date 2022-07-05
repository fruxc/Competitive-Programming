#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    string start = to_string(x), str = "";
    int len = start.length();
    while (len--)
    {
        str += start[len];
    }
    return str.compare(to_string(x)) ? true : false;
}
int main()
{
    return isPalindrome(0);
}
