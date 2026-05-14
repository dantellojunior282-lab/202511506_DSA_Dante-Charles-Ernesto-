#include <iostream>
#include <string>
using namespace std;

void congratulate(string name)
{
    cout << "Congratulations, " << name << "!" << endl;
}

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    congratulate(name);
    return 0;
}
