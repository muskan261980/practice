#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double subtotal = 0;
    for (int i = 0; i < n; i++)
    {
        double price, quantity;
        cin >> price >> quantity;
        subtotal += price * quantity;
    }
    double discount = 0;
    if (subtotal >= 10000)
    {
        discount = subtotal * 0.15;
    }
    else if (subtotal >= 5000 && subtotal <= 9999)
    {
        discount = subtotal * 0.10;
    }
    else if (subtotal >= 1000 && subtotal <= 4999)
    {
        discount = subtotal * 0.05;
    }
    double discountedamount = subtotal - discount;
    double taxval = discountedamount * 0.05;
    double final = taxval + discountedamount;

    cout << fixed << setprecision(2);
    cout << "subtotal:" << subtotal << endl;
    cout << "Discount:" << discount << endl;
    cout << "Tax:" << taxval << endl;
    cout << "Final Amount:" << final << endl;

    return 0;
}