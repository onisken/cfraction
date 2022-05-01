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
    std::cout << "temp = a + b = " << a.getNumerator() << "/" << a.getDenominator() << " + " <<
              b.getNumerator() << "/" << b.getDenominator() << " = " <<
              temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    temp = b * c;
    std::cout << "temp = b * c = " << b.getNumerator() << "/" << b.getDenominator() << " * " <<
              c.getNumerator() << "/" << c.getDenominator() << " = " <<
              temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    temp = c * 7;
    std::cout << "temp = c * 7 = " << c.getNumerator() << "/" << c.getDenominator() << " * " << " 7 = " <<
              temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "a++ = " << a.getNumerator() << "/" << a.getDenominator() << " ++ = ";
    std::cout << a++.getNumerator() << "/" << a++.getDenominator() << std::endl;

    std::cout << "temp += a++ => " << temp.getNumerator() << "/" << temp.getDenominator() << " += "
                                   << a++.getNumerator() << "/" << a++.getDenominator() << " => ";
    temp += a++;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

}
