
#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex z1(3, 2);
    Complex z2(1, 4);
    double x = 2.0;

    cout << boolalpha;

    cout << "z1 = ";
    z1.afficher();

    cout << "z2 = ";
    z2.afficher();

    cout << "\nAddition Complex + Complex : ";
    (z1 + z2).afficher();

    cout << "Addition Complex + double : ";
    (z1 + x).afficher();

    cout << "\nSoustraction Complex - Complex : ";
    (z1 - z2).afficher();

    cout << "Soustraction Complex - double : ";
    (z1 - x).afficher();

    cout << "\nMultiplication Complex * Complex : ";
    (z1 * z2).afficher();

    cout << "Multiplication Complex * double : ";
    (z1 * x).afficher();

    cout << "\nDivision Complex / Complex : ";
    (z1 / z2).afficher();

    cout << "Division Complex / double : ";
    (z1 / x).afficher();

    cout << "\n== Complex / Complex : ";
    cout << (z1 == z2) << endl;

    cout << "== Complex / double : ";
    cout << (z1 == x) << endl;

    cout << "\n< Complex / Complex : ";
    cout << (z1 < z2) << endl;

    cout << "< Complex / double : ";
    cout << (z1 < x) << endl;

    cout << "\n> Complex / Complex : ";
    cout << (z1 > z2) << endl;

    cout << "> Complex / double : ";
    cout << (z1 > x) << endl;

    cout << "\n!= Complex / Complex : ";
    cout << (z1 != z2) << endl;

    cout << "!= Complex / double : ";
    cout << (z1 != x) << endl;

    return 0;
}