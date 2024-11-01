#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    // Contest
    double x, p, t;
    cin >> x >> p;
    t = (p * 100) / (100 - x);
    cout << fixed << setprecision(2) << t;
    // Ayham
    // double p , d , x;
    // cin >> p >> d;
    // p = 100 - p;
    // x = d * (100 / p);
    // cout << fixed << setprecision(2) << x;
    return 0 ;
}