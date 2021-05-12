#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,delta;
    cin >> a >> b >> c;
    delta = b*b-4*a*c;
    if (delta == 0) cout << fixed << setprecision(2) << -b/(2*a);
    if (delta > 0)
    {
        cout << fixed << setprecision(2) << (-b-sqrt(delta))/(2*a) << endl;
        cout << fixed << setprecision(2) << (-b+sqrt(delta))/(2*a);
    }
    if (delta < 0)
    {
        cout << fixed << setprecision(2) << -b/(2*a) << " " << -sqrt(-delta)/(2*a) << endl;
        cout << fixed << setprecision(2) << -b/(2*a) << " " << +sqrt(-delta)/(2*a);
    }
    return 0;
}
