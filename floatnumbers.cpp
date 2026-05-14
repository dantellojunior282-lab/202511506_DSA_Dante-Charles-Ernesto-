#include <iostream>
using namespace std;

float addFourNumbers(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    float a, b, c, d;
    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d;

    cout << "Sum = " << addFourNumbers(a, b, c, d) << endl;
    return 0;
}
