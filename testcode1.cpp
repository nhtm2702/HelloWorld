#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b>c && a+c>b && b+c>a)
    {
        double p = (a+b+c)/3;
        cout << p << endl;
        if (a==b && b==c) cout << "deu";
        else
        {
            if (a==b || a==c || b==c) cout << "can";
            else
            {
                if (a*a+b*b == c*c || a*a+c*c == b*b || b*b+c*c == a*a) cout << "vuong";
                else cout << "thuong";
            }
        }
    }
    else cout << "Invalid";
    return 0;
}
