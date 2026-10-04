#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int sum = 0;
    int product = 1;
    while (n > 0)
    {
        int val = n % 10;
        sum += val;
        product *= val;
        n = n / 10;
    }
    cout << "sum" << sum << endl;
    cout << "product" << product << endl;
    if (sum % 3 == 0)
    {
        cout << "divisible by 3";
    }
    else
    {
        cout << "not divisible by 3";
    }

    return 0;
}