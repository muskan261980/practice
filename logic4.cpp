#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int marks;
    int total = 0;
    int failed = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> marks;
        total += marks;
        if (marks < 40)
        {
            failed++;
        }
    }
    double average = (double)total / n;
    cout << "total" << total << endl;
    cout << "average" << average << endl;
    if (failed == 0 && average > 50)
    {
        cout << "failed subjects" << 0 << "result PASS" << endl;
    }
    else
    {
        cout << "failed subjects" << failed << "result FAIL" << endl;
    }

    return 0;
}