#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,v1,x2,v2,d;
    cin >> x1 >> v1 >> x2 >> v2;
    int v,x;
    v = v1 - v2;
    x = x2 - x1;
    if ((x % v == 0) && (x/v >= 0)) cout << "YES";
    else cout << "NO";
    return 0;
}
