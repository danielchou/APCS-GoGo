#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m = n / 2;

    // 第一層
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < 2 * n - m)
        {
            if (i >= m && i < 2 * n - m)
                cout << "*";
            else
                cout << "@";
        }
    }
    cout << "\n";

    // 第二層
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < m - i - 1)
                cout << "@";
            else if (j == m - i - 1)
                cout << "*";
            else
                cout << ". ";
        }
        cout << "*" << "\n";
    }

    // 第三層
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
                cout << "@";
            else if (j == i + 1)
                cout << "*";
            else
                cout << ". ";
        }
        cout << "*" << "\n";
    }
    return 0;
}