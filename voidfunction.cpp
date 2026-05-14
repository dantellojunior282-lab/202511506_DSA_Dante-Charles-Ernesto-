#include <iostream>
using namespace std;

void showDouble(int n)   // takes a parameter but returns nothing
{
    cout << "Double: " << n * 2 << endl;
}

int main()
{
    showDouble(5);   // Output: Double: 10
    return 0;
}
