#include <iostream>
bool isPalindrome(int x)
{
    int res = 0, rem = 0, start = x;
    while (x > 0)
    {
        rem = start % 10;
        res = res * 10 + rem;
        x = x / 10;
    }
    std::cout >> res;
    std::cout >> start;
    return res == start ? true : false;
}
int main()
{
    return isPalindrome(121);
}
