#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    int res = 0, rem = 0, start = x;
    string str = "";
    if (x == 0)
    {
        return true;
    }
    while (x > 0)
    {
        rem = x % 10;
        str.append(to_string(rem));
        x = x / 10;
    }
    return str.compare(to_string(start)) ? false : true;
}
int main()
{
    return isPalindrome(121);
}
