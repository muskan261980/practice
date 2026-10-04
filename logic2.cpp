
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    if (n > 0)
    {
        cout << "positive";
    }
    else if (n == 0)
    {
        cout << 0;
    }
    else
    {
        cout << "negative";
    }
    if (n % 5 == 0)
    {
        cout << "divisible by 5";
    }
    else
    {
        cout << "not divisible by 5";
    }
    return 0;
}