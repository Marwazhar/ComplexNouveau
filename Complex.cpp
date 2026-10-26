
#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex(double r, double i) {
    re = r;
    im = i;
}

void Complex::afficher() const {
    cout << re;

    if (im >= 0)
        cout << " + " << im << "i";
    else
        cout << " - " << -im << "i";

    cout << endl;
}

Complex Complex::operator+(const Complex& c) const {
    return Complex(re + c.re, im + c.im);
}

Complex Complex::operator+(double x) const {
    return Complex(re + x, im);
}

Complex Complex::operator-(const Complex& c) const {
    return Complex(re - c.re, im - c.im);
}

Complex Complex::operator-(double x) const {
    return Complex(re - x, im);
}

Complex Complex::operator*(const Complex& c) const {
    return Complex(re * c.re - im * c.im,
        re * c.im + im * c.re);
}

Complex Complex::operator*(double x) const {
    return Complex(re * x, im * x);
}

Complex Complex::operator/(const Complex& c) const {
    double d = c.re * c.re + c.im * c.im;

    if (d == 0) {
        cout << "Erreur : division par zero !" << endl;
        return Complex();
    }

    return Complex((re * c.re + im * c.im) / d,
        (im * c.re - re * c.im) / d);
}

Complex Complex::operator/(double x) const {
    if (x == 0) {
        cout << "Erreur : division par zero !" << endl;
        return Complex();
    }

    return Complex(re / x, im / x);
}

bool Complex::operator==(const Complex& c) const {
    if (re == c.re && im == c.im)
        return true;
    else
        return false;
}

bool Complex::operator==(double x) const {
    if (re == x && im == 0)
        return true;
    else
        return false;
}

bool Complex::operator<(const Complex& c) const {
    double m1 = sqrt(re * re + im * im);
    double m2 = sqrt(c.re * c.re + c.im * c.im);

    if (m1 < m2)
        return true;
    else
        return false;
}

bool Complex::operator<(double x) const {
    double m1 = sqrt(re * re + im * im);

    if (m1 < fabs(x))
        return true;
    else
        return false;
}

bool Complex::operator>(const Complex& c) const {
    double m1 = sqrt(re * re + im * im);
    double m2 = sqrt(c.re * c.re + c.im * c.im);

    if (m1 > m2)
        return true;
    else
        return false;
}

bool Complex::operator>(double x) const {
    double m1 = sqrt(re * re + im * im);

    if (m1 > fabs(x))
        return true;
    else
        return false;
}

bool Complex::operator!=(const Complex& c) const {
    if (re != c.re || im != c.im)
        return true;
    else
        return false;
}

bool Complex::operator!=(double x) const {
    if (re != x || im != 0)
        return true;
    else
        return false;
}