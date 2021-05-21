#include <iostream>

using namespace std;

void print(int x, int y)
{
    if (y == 100)
    {
        if (x == 1) cout << "one hundred ";
        if (x == 2) cout << "two hundred ";
        if (x == 3) cout << "three hundred ";
        if (x == 4) cout << "four hundred ";
        if (x == 5) cout << "five hundred ";
        if (x == 6) cout << "six hundred ";
        if (x == 7) cout << "seven hundred ";
        if (x == 8) cout << "eight hundred ";
        if (x == 9) cout << "nine hundred ";
    }
    if (y == 10)
    {
        if (x == 2) cout << "twenty-";
        if (x == 3) cout << "thirty-";
        if (x == 4) cout << "forty-";
        if (x == 5) cout << "fifty-";
        if (x == 6) cout << "sixty-";
        if (x == 7) cout << "seventy-";
        if (x == 8) cout << "eighty-";
        if (x == 9) cout << "ninety-";
    }
    if (y == 1)
    {
        if (x == 1) cout << "one ";
        if (x == 2) cout << "two ";
        if (x == 3) cout << "three ";
        if (x == 4) cout << "four ";
        if (x == 5) cout << "five ";
        if (x == 6) cout << "six ";
        if (x == 7) cout << "seven ";
        if (x == 8) cout << "eight ";
        if (x == 9) cout << "nine ";
        if (x == 10) cout << "ten ";
        if (x == 11) cout << "eleven ";
        if (x == 12) cout << "twelve ";
        if (x == 13) cout << "thirteen ";
        if (x == 14) cout << "fourteen ";
        if (x == 15) cout << "fifteen ";
        if (x == 16) cout << "sixteen ";
        if (x == 17) cout << "seventeen ";
        if (x == 18) cout << "eighteen ";
        if (x == 19) cout << "nineteen ";
    }
}

int main()
{
    int n,a;
    cin >> n;
    if (n < 0) cout << "negative ";
    n *= -1;
    int devide = 100000000,unit = 100,hang = 3, dem = 0;
    while (n != 0)
    {
        a = n / devide;
        n = n % devide;
        if (a == 1 && unit == 10)
        {
            devide /= 10;
            unit /= 10;
            int b = n / devide;
            n = n % devide;
            a = a*10 + b;
            print (a,unit);
            dem += 2;
        }
        else if (a > 0)
        {
            dem ++;
            print(a,unit);
        }
        devide /= 10;
        unit /= 10;
        if (unit == 0)
        {
            unit = 100;
            hang --;
            if (dem != 0)
            {
                if (hang ==  2) cout << "million ";
                else if (hang == 1) cout << "thousand ";
            }
            dem = 0;
        }
    }
    return 0;
}
