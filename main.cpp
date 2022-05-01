#include <iostream>
#include "CFraction.h"

int main() {
    std::cout << "Creation of fractions:" << std::endl;
    CFraction first;
    CFraction second(1);
    CFraction third(1, 2);
    std::cout << "first = " << first.getNumerator() << "/" << first.getDenominator() << std::endl;
    std::cout << "second = " << second.getNumerator() << "/" << second.getDenominator() << std::endl;
    std::cout << "third = " << third.getNumerator() << "/" << third.getDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << "Changing fractions:" << std::endl;
    first = third;
    second(5);
    third(2, 3);
    std::cout << "first = " << first.getNumerator() << "/" << first.getDenominator() << std::endl;
    std::cout << "second = " << second.getNumerator() << "/" << second.getDenominator() << std::endl;
    std::cout << "third = " << third.getNumerator() << "/" << third.getDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << "Actions with fractions:" << std::endl;
    CFraction temp;
    temp = first + second;
    std::cout << "temp = first + second = " << first.getNumerator() << "/" << first.getDenominator() << " + ";
    std::cout << second.getNumerator() << "/" << second.getDenominator() << " = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    temp = second * third;
    std::cout << "temp = second * third = " << second.getNumerator() << "/" << second.getDenominator() << " * ";
    std::cout << third.getNumerator() << "/" << third.getDenominator() << " = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    temp = third * 7;
    std::cout << "temp = third * 7 = " << third.getNumerator() << "/" << third.getDenominator() << " * " << " 7 = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "first++ = " << first.getNumerator() << "/" << first.getDenominator() << " ++ = ";
    first = first++;
    std::cout << first.getNumerator() << "/" << first.getDenominator() << std::endl;

    std::cout << "temp += first++ => " << temp.getNumerator() << "/" << temp.getDenominator() << " += ";
    std::cout << first++.getNumerator() << "/" << first++.getDenominator() << " => ";
    temp += first++;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp -= 7 => " << temp.getNumerator() << "/" << temp.getDenominator() << " -= 7 => ";
    temp -= 7;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp (double) = " << double(temp) << std::endl;

    std::cout << "temp-- = " << temp--.getNumerator() << "/" << temp--.getDenominator() << std::endl;
    std::cout << "temp-- (double) = " << double(temp--) << std::endl;

    std::cout << "temp = second - first = " << second.getNumerator() << "/" << second.getDenominator() << " - ";
    std::cout << first.getNumerator() << "/" << first.getDenominator() << " = ";
    temp = second - first;
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

    std::cout << "temp *= third => " << temp.getNumerator() << "/" << temp.getDenominator() << " *= ";
    std::cout << third.getNumerator() << "/" << third.getDenominator() << " => ";
    temp *= third;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp /= first => " << temp.getNumerator() << "/" << temp.getDenominator() << " /= ";
    std::cout << first.getNumerator() << "/" << first.getDenominator() << " => ";
    temp /= first;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp = second / first(2, 5) = " << second.getNumerator() << "/" << second.getDenominator();
    first(2, 5);
    temp = second / first;
    std::cout << " / " << first.getNumerator() << "/" << first.getDenominator() << " = ";
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "temp /= 5 => " << temp.getNumerator() << "/" << temp.getDenominator() << " /= 5 => ";
    temp /= 5;
    std::cout << temp.getNumerator() << "/" << temp.getDenominator() << std::endl;

    std::cout << "first(25, 10) = 25/10" << std::endl;
    first(25, 10);

    if (first == temp) std::cout << "Now, first == temp;";
    else std::cout << "== is not working :(";
    std::cout << std::endl << std::endl;

    std::cout << "first > second? (first = " << first.getNumerator() << "/" << first.getDenominator();
    std::cout << "; second = " << second.getNumerator() << "/" << second.getDenominator() << ")" << std::endl;
    if (first > second) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "first < second? (first = " << first.getNumerator() << "/" << first.getDenominator();
    std::cout << "; second = " << second.getNumerator() << "/" << second.getDenominator() << ")" << std::endl;
    if (first < second) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "first <= second? (first = " << first.getNumerator() << "/" << first.getDenominator();
    std::cout << "; second = " << second.getNumerator() << "/" << second.getDenominator() << ")" << std::endl;
    if (first <= second) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "first = 10/2" << std::endl;
    first(10, 2);
    std::cout << "first < second? (first = " << first.getNumerator() << "/" << first.getDenominator();
    std::cout << "; second = " << second.getNumerator() << "/" << second.getDenominator() << ")" << std::endl;
    if (first < second) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "first <= second? (first = " << first.getNumerator() << "/" << first.getDenominator();
    std::cout << "; second = " << second.getNumerator() << "/" << second.getDenominator() << ")" << std::endl;
    if (first <= second) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "first >= second? (first = " << first.getNumerator() << "/" << first.getDenominator();
    std::cout << "; second = " << second.getNumerator() << "/" << second.getDenominator() << ")" << std::endl;
    if (first >= second) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "first == second? (first = " << first.getNumerator() << "/" << first.getDenominator();
    std::cout << "; second = " << second.getNumerator() << "/" << second.getDenominator() << ")" << std::endl;
    if (first == second) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

    std::cout << "first != 15/3? (first = " << first.getNumerator() << "/" << first.getDenominator() << ")" << std::endl;
    if (first != temp(15, 3)) std::cout << "Yes, it's TRUE";
    else std::cout << "No, It's FALSE";
    std::cout << std::endl << std::endl;

}
