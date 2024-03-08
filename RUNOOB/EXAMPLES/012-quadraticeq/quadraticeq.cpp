#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "input a, b, c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {5
        x1 = x2 = -b / (2 * a);
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i"
             << ", x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}