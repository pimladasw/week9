#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, min = INT_MAX, max = INT_MIN, temp;
    char n[3];
    cin >> A >> B >> C;
    if (A > C)
    {
        int temp = A;
        A = C;
        C = temp;
    }
    if (A > B)
    {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C)
    {
        int temp = B;
        B = C;
        C = temp;
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (n[i] == 'A')
        {
            cout << A << " ";
        }
        else if (n[i] == 'B')
        {
            cout << B << " ";
        }
        else cout << C << " ";
    }
    return 0;
}