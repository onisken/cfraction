#include <iostream>
#include "CFraction.h"

int main() {
    std::cout << "Creation of fractions:" << std::endl;
    CFraction a;
    CFraction b(1);
    CFraction c(1, 2);
    std::cout << "a = " << a.getNumerator() << "/" << a.getDenominator() << std::endl;
    std::cout << "b = " << b.getNumerator() << "/" << b.getDenominator() << std::endl;
    std::cout << "c = " << c.getNumerator() << "/" << c.getDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << "Changing fractions:" << std::endl;
    a = c;
    b(5);
    c(2, 3);
    std::cout << "a = " << a.getNumerator() << "/" << a.getDenominator() << std::endl;
    std::cout << "b = " << b.getNumerator() << "/" << b.getDenominator() << std::endl;
    std::cout << "c = " << c.getNumerator() << "/" << c.getDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << "Actions with fractions:" << std::endl;
    CFraction temp;
    temp = a + b;
    std::cout << "temp = a + b = " << a.getNumerator() << "/" << a.getDenominator() << " + ";
    std::cout << b.getNumerator() << "/" << b.getDenominator() << " = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    temp = b * c;
    std::cout << "temp = b * c = " << b.getNumerator() << "/" << b.getDenominator() << " * ";
    std::cout << c.getNumerator() << "/" << c.getDenominator() << " = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    temp = c * 7;
    std::cout << "temp = c * 7 = " << c.getNumerator() << "/" << c.getDenominator() << " * " << " 7 = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "a++ = " << a.getNumerator() << "/" << a.getDenominator() << " ++ = ";
    a = a++;
    std::cout << a.getNumerator() << "/" << a.getDenominator() << std::endl;

    std::cout << "temp += a++ => " << temp.getNumerator() << "/" << temp.getDenominator() << " += ";
    std::cout << a++.getNumerator() << "/" << a++.getDenominator() << " => ";
    temp += a++;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp -= 7 => " << temp.getNumerator() << "/" << temp.getDenominator() << " -= 7 => ";
    temp -= 7;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp (double) = " << double(temp) << std::endl;

    std::cout << "temp-- = " << temp--.getNumerator() << "/" << temp--.getDenominator() << std::endl;
    std::cout << "temp-- (double) = " << double(temp--) << std::endl;

    std::cout << "temp = b - a = " << b.getNumerator() << "/" << b.getDenominator() << " - ";
    std::cout << a.getNumerator() << "/" << a.getDenominator() << " = ";
    temp = b - a;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp - 2 = " << temp.getNumerator() << "/" << temp.getDenominator() << " - 2 = ";
    temp = temp - 2;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp-- = " << temp.getNumerator() << "/" << temp.getDenominator() << "-- = ";
    temp = temp--;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp *= 4 => " << temp.getNumerator() << "/" << temp.getDenominator() << " *=4 => ";
    temp *= 4;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp *= c => " << temp.getNumerator() << "/" << temp.getDenominator() << " *= ";
    std::cout << c.getNumerator() << "/" << c.getDenominator() << " => ";
    temp *= c;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp /= a => " << temp.getNumerator() << "/" << temp.getDenominator() << " /= ";
    std::cout << a.getNumerator() << "/" << a.getDenominator() << " => ";
    temp /= a;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp = b / a(2, 5) = " << b.getNumerator() << "/" << b.getDenominator();
    a(2, 5);
    temp = b / a;
    std::cout << " / " << a.getNumerator() << "/" << a.getDenominator() << " = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp /= 5 => " << temp.getNumerator() << "/" << temp.getDenominator() << " /= 5 => ";
    temp /= 5;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "a(25, 10) = 25/10" << std::endl;
    a(25,10);

    if (a == temp) std::cout << "Now, a == temp;";
    else std::cout << "== is not working :(";
    std::cout << std::endl << std::endl;

    std::cout << "a > b? (a = " << a.getNumerator() << "/" << a.getDenominator();
    std::cout << "; b = " << b.getNumerator() << "/" << b.getDenominator() << ")" << std::endl;
    if (a > b) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "a < b? (a = " << a.getNumerator() << "/" << a.getDenominator();
    std::cout << "; b = " << b.getNumerator() << "/" << b.getDenominator() << ")" << std::endl;
    if (a < b) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "a <= b? (a = " << a.getNumerator() << "/" << a.getDenominator();
    std::cout << "; b = " << b.getNumerator() << "/" << b.getDenominator() << ")" << std::endl;
    if (a <= b) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "a = 10/2" << std::endl;
    a(10, 2);
    std::cout << "a < b? (a = " << a.getNumerator() << "/" << a.getDenominator();
    std::cout << "; b = " << b.getNumerator() << "/" << b.getDenominator() << ")" << std::endl;
    if (a < b) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "a <= b? (a = " << a.getNumerator() << "/" << a.getDenominator();
    std::cout << "; b = " << b.getNumerator() << "/" << b.getDenominator() << ")" << std::endl;
    if (a <= b) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "a >= b? (a = " << a.getNumerator() << "/" << a.getDenominator();
    std::cout << "; b = " << b.getNumerator() << "/" << b.getDenominator() << ")" << std::endl;
    if (a >= b) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "a == b? (a = " << a.getNumerator() << "/" << a.getDenominator();
    std::cout << "; b = " << b.getNumerator() << "/" << b.getDenominator() << ")" << std::endl;
    if (a == b) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "a != 15/3? (a = " << a.getNumerator() << "/" << a.getDenominator() << ")" << std::endl;
    if (a != temp(15, 3)) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

}
