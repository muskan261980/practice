#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total = 0;
    while (n > 0)
    {
        char ch;
        int hour;
        cin >> ch >> hour;
        if (ch == 'C')
        {

            if (hour > 2)
            {
                total += 2 * 30 + (hour - 2) * 20;
            }
            else
            {
                total += hour * 30;
            }
        }
        if (ch == 'B')
        {

            if (hour > 2)
            {
                total += 2 * 15 + (hour - 2) * 10;
            }
            else
            {
                total += hour * 15;
            }
        }
        if (ch == 'T')
        {

            if (hour > 2)
            {
                total += 2 * 50 + (hour - 2) * 40;
            }
            else
            {
                total += hour * 50;
            }
        }
        n--;
    }
    cout << "total collection" << total;
    return 0;
}