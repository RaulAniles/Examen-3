#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;
    cout << "Ingrese el numero para buscar su factorial: ";
    cin >> n;
    cout << "Factorial = " << factorial(n);

    return 0;
}

int factorial(int n) {
    if (n - 1 > 0) {
        return (n)*factorial(n - 1);
    }
    return n;
}