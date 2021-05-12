#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,v1,x2,v2,d;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 == v2) {cout << "NO";return 0;}
    if ( (x1<x2 && v1>v2) || (x1>x2 && v1<v2) )
    {
        d = abs (x1-x2);
        while (x1 != x2)
        {
            x1 += v1;
            x2 += v2;
            if (abs(x1-x2) >= d) {cout << "NO";return 0;}
        }
        if (x1 == x2) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
    return 0;
}
