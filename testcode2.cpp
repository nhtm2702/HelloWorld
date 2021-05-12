#include <iostream>
using namespace std;

int UCLN(int a,int b)
{
    int r;
    do
    {
        r = a % b;
        a = b;
        b = r;
    }
    while (b!=0);
    return a;
}

int main()
{
    double a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 == b1 && b1 == c1 && c1 == 0) {cout << "Vo so nghiem";return 0;}
    if (a2 == b2 && b2 == c2 && c2 == 0) {cout << "Vo so nghiem";return 0;}
    if (a1 != 0 && a2 != 0)
    {
        if (a1/a2 == b1/b2 && b1/b2 != c1/c2) cout << "Vo nghiem";
        else if (a1/a2 == b1/b2 && b1/b2 == c1/c2) cout << "Vo so nghiem";
        else
        {
            int bc = a1 * a2 / UCLN(a1,a2);
            int so1 = bc / a1;
            int so2 = bc / a2;
            a1 *= so1;b1 *= so1;c1 *= so1;
            a2 *= so2;b2 *= so2;c2 *= so2;
            int y = (c1-c2) / (b1 - b2);
            int x = (c1-b1*y)/a1;
            cout << "x = " << x << ", y = " << y;
        }
    }
    else
    {
        if (a1 == 0 && a2 != 0)
        {
            int y = c1/b1;
            int x = (c2-b2*y)/a2;
            cout << "x = " << x << ", y = " << y;
        }
        else if (a1 != 0 && a2 == 0)
        {
            int y = c2/b2;
            int x = (c1-b1*y)/a1;
            cout << "x = " << x << ", y = " << y;
        }
        else if (a1 == 0 && a2 == 0)
        {
            if (b1 == b2 && c1 == c2 && b1 != 0) cout << "x = " << 0 << ", y = " << c1/b1;
            else if (b1 == b2 && c1 == c2 && b1 == 0) cout << "Vo so nghiem";
            else cout << "Vo nghiem";
        }
    }
    return 0;
}
