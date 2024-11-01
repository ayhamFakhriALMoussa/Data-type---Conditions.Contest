#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long e, m, b, total;
    cin >> e >> m >> b;
    if (b == 0 || e == 0)
    {
        cout << 0;
    }
    else if (m <= e && m <= b)
    {
        total = m;
        e -= m;
        b -= m;
        if (e <= b)
        {
            total += e / 2;
        }
        else if (e / 2 >= b)
        {
            total += b;
        }
        else
        {
            total += e / 2;
        }
        cout << total;
    }
    else if (b <= e && b <= m)
    {
        total = b;
        cout << total;
    }
    else if (e <= m && e <= b)
    {
        total = e;
        cout << total;
    }
    return 0;
}