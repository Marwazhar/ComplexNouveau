
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double re;
    double im;

public:
    Complex(double r = 0, double i = 0);

    Complex operator+(const Complex& c) const;
    Complex operator+(double x) const;

    Complex operator-(const Complex& c) const;
    Complex operator-(double x) const;

    Complex operator*(const Complex& c) const;
    Complex operator*(double x) const;

    Complex operator/(const Complex& c) const;
    Complex operator/(double x) const;

    bool operator==(const Complex& c) const;
    bool operator==(double x) const;

    bool operator<(const Complex& c) const;
    bool operator<(double x) const;

    bool operator>(const Complex& c) const;
    bool operator>(double x) const;

    bool operator!=(const Complex& c) const;
    bool operator!=(double x) const;

    void afficher() const;
};

#endif

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double re;
    double im;

public:
    Complex(double r = 0, double i = 0);

    Complex operator+(const Complex& c) const;
    Complex operator+(double x) const;

    Complex operator-(const Complex& c) const;
    Complex operator-(double x) const;

    Complex operator*(const Complex& c) const;
    Complex operator*(double x) const;

    Complex operator/(const Complex& c) const;
    Complex operator/(double x) const;

    bool operator==(const Complex& c) const;
    bool operator==(double x) const;

    bool operator<(const Complex& c) const;
    bool operator<(double x) const;

    bool operator>(const Complex& c) const;
    bool operator>(double x) const;

    bool operator!=(const Complex& c) const;
    bool operator!=(double x) const;

    void afficher() const;
};

#endif