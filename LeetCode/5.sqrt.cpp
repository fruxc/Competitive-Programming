#include <iostream>
using namespace std;

int mySqrt(int x)
{
    int start = 0, end = x, result = 1;
    while (start <= end)
    {
        long long int middle = start + (end - start) / 2;
        long long int square = middle * middle;
        if (square == x)
            return middle;
        else if (square > x)
            end = middle - 1;
        else if (square < x)
        {
            result = middle;
            start = middle + 1;
        }
    }
    return result;
}
int main()
{
    cout << mySqrt(26) << endl;
    return 0;
}
