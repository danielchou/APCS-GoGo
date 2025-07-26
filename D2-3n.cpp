/*
輸入將有一個正整數 n
請重複以下操作：
(1) 假如 n 為奇數，則把 n 變成 3*n + 1，否則把 n 變成 n 的一半
(2) 輸出 n
(3) 假如 n 變成 1，或是循環次數超過 15 次，則直接結束程式

Input 輸入將有一個正整數 n
Output
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 15; i++)
    {
        if (n % 2 == 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }
        cout << n << "\n";
        // 檢查是否變成 1
        if (n == 1)
        {
            break;
        }
    }
    return 0;
}