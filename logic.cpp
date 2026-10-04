#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total = 0;
    if (n > 400)
    {
        total = 100 * 5 + 100 * 7 + 200 * 10 + (n - 400) * 15;
    }
    else if (n > 200)
    {
        total = 100 * 5 + 100 * +(n - 200) * 10;
    }
    else if (n > 100)
    {
        total = 100 * 5 + (n - 100) * 7;
    }
    else
    {
        total = n * 5;
    }
    cout << total;

    return 0;
}