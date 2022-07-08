#include <iostream>
using namespace std;

bool isPerfectSquare(int num)
{
    int start = 0, end = num, result = 1;
    while (start <= end)
    {
        long long int middle = start + (end - start) / 2;
        long long int square = middle * middle;
        if (square == num)
            return middle;
        else if (square > num)
            end = middle - 1;
        else if (square < num)
        {
            result = middle;
            start = middle + 1;
        }
    }
    return result * result == num ? true : false;
}
int main()
{
    cout << isPerfectSquare(25) << endl;
    return 0;
}
