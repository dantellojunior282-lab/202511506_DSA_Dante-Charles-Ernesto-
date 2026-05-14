#include <iostream>
#include <string>
using namespace std;


void greet(string name)
{
    cout << "Hello, " << name << "!" << endl;
}


int add(int a, int b)
{
    return a + b;
}

int main()
{

    string name;
    cout << "Enter your name: ";
    cin >> name;
    greet(name);


    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = add(num1, num2);
    cout << "Sum = " << result << endl;

    return 0;
}
