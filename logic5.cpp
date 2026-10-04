#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (true)
    {
        cout << "choose method" << "D" << "W" << "B" << "E";
        char ch;
        cin >> ch;
        if (ch == 'D')
        {
            int a;
            cin >> a;
            n = n + a;
            cout << "deposit successful" << endl;
        }
        if (ch == 'W')
        {
            int b;
            cin >> b;
            if (b <= n)
            {
                n = n - b;
                cout << "cash withdrawn" << n;
            }
            else
            {
                cout << "insufficient balance";
            }
        }
        else if (ch == 'B')
        {
            cout << "balance" << n << endl;
        }
        else if (ch == 'E')
        {
            cout << "final balance" << n << endl;
            break;
        }
    }
    return 0;
}