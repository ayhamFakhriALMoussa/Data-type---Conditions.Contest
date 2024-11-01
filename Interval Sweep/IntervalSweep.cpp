#include <iostream>
using namespace std;
int main () {
    // Contest
    int a,b;
    cin>>a>>b;
    if (a==0&&b==0)
    {
        cout <<"NO";
    }
    else if(a-b==1||a-b==-1||a-b==0)
    {
        cout <<"YES";
    }
    else cout <<"NO";
    
    return 0 ;

    // Other
    // int a , b;
    // cin >> a >> b;
    // if (a - b == 1 || b - a == 1 || (a == b && a != 0 && b != 0))
    // {
    //     cout << "YES";
    // }else cout << "NO";

}