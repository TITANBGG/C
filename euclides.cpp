#include <iostream>             // cin,cout,endl
#include <stdlib.h>             // EXIT_SUCCESS

using namespace std;

int main(void)
{
    int num1, num2;
    int a, b, r = 1;

    cout << "Sayilari yaziniz: ";
    cin >> num1 >> num2;

    a = num1 > num2 ? num1 : num2;
    b = num1 > num2 ? num2 : num1;

    while (b > 0) {
        r = a % b;
        a = b;
        b = r;
    }
    cout << num1 << " ve " << num2
         << " sayilarinin en buyuk ortak boleni: " << a << endl;
    return EXIT_SUCCESS;
}
