//
// Created by anisk on 30.04.2022.
//

#ifndef CFRACTION_CFRACTION_H
#define CFRACTION_CFRACTION_H

class CFraction {
public:

    CFraction() {
        numerator = 0;
        denominator = 1;
    }

    CFraction(int numerator) {
        this->numerator = numerator;
        this->denominator = 1;
    }

    CFraction(int numerator, int denominator) {
        this->numerator = numerator;
        if (denominator == 0)
            this->denominator = 1;
        else
            this->denominator = denominator;
    }

    CFraction(const CFraction &existing) {
        this->numerator = existing.numerator;
        if (denominator == 0)
            this->denominator = 1;
        else {
            this->denominator = existing.denominator;
        }
    }

    int operator() (int numerator) {
        this->numerator = numerator;
        this->denominator = 1;
        return 0;
    }

    int operator() (int numerator, int denominator) {
        this->numerator = numerator;
        if (denominator == 0)
            this->denominator = 1;
        else
            this->denominator = denominator;
        return 0;
    }

    explicit operator double() const {
        return (double) numerator / denominator;
    }

    CFraction operator ++(int) const {
        CFraction temp;
        temp.numerator = numerator + denominator;
        temp.denominator = denominator;
        return temp;
    }

    CFraction operator --(int) const {
        CFraction temp;
        temp.numerator = numerator - denominator;
        temp.denominator = denominator;
        return temp;
    }

    CFraction operator * (const CFraction &exciting) {
        CFraction temp;
        temp.numerator = this->numerator * exciting.numerator;
        temp.denominator = this->denominator * exciting.denominator;
        return temp;
    }

    CFraction operator * (const int &value) {
        CFraction temp;
        temp.numerator = numerator * value;
        temp.denominator = denominator;
        return temp;
    }

    CFraction operator / (const CFraction &exciting) {
        CFraction temp;
        temp.numerator = this->numerator * exciting.denominator;
        temp.denominator = this->denominator * exciting.numerator;
        return temp;
    }

    CFraction operator / (const int &value) {
        CFraction temp;
        temp.numerator = numerator;
        temp.denominator = denominator * value;
        return temp;
    }

    CFraction operator + (const CFraction &exciting) {
        CFraction temp;
        if (this->denominator == exciting.denominator || exciting.denominator == 0) {
            temp.numerator = this->numerator + exciting.numerator;
        } else {
            temp.denominator = this->denominator * exciting.denominator;
            temp.numerator = this->numerator * exciting.denominator + exciting.numerator * this->denominator;
            return temp;
        }
    }

    CFraction operator + (const int &value) {
        CFraction temp;
        temp.numerator = numerator + value * denominator;
        temp.denominator = denominator;
        return temp;
    }

    CFraction operator - (const CFraction &exciting) const {
        CFraction temp;
        if (this->denominator == exciting.denominator || exciting.denominator == 0) {
            temp.numerator = this->numerator - exciting.numerator;
        } else {
            temp.denominator = this->denominator * exciting.denominator;
            temp.numerator = this->numerator * exciting.denominator - exciting.numerator * this->denominator;
            return temp;
        }
    }

    CFraction operator - (const int &value) const {
        CFraction temp;
        temp.numerator = numerator - value * denominator;
        temp.denominator = denominator;
        return temp;
    }

    CFraction operator += (const CFraction &exciting) {
        CFraction temp;

        return temp = CFraction() + exciting;
    }

    CFraction operator += (const int &value) {
        return CFraction() + value;
    }

    CFraction operator -= (const CFraction &exciting) {
        return CFraction() - exciting;
    }

    CFraction operator -= (const int &value) {
        return CFraction() - value;
    }

    CFraction operator *= (const CFraction &exciting) {
        return CFraction() * exciting;
    }

    CFraction operator *= (const int &value) {
        return CFraction() * value;
    }

    CFraction operator /= (const CFraction &exciting) {
        return CFraction() / exciting;
    }

    CFraction operator /= (const int &value){
        return CFraction() / value;
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }

    bool operator == (const CFraction &exciting) const {
        if (((double)this->numerator / this->denominator) == ((double)exciting.numerator / exciting.denominator)) return true;
        else return false;
    }

    bool operator != (const CFraction &exciting) const {
        return !(CFraction() == exciting);
    }

    bool operator > (const CFraction &exciting) const {
        if (((double)this->numerator / this->denominator) > ((double)exciting.numerator / exciting.denominator)) return true;
        else return false;
    }

    bool operator >= (const CFraction &exciting) const {
        if (((double)this->numerator / this->denominator) >= ((double)exciting.numerator / exciting.denominator)) return true;
        else return false;
    }

    bool operator < (const CFraction &exciting) const {
        if (((double)this->numerator / this->denominator) < ((double)exciting.numerator / exciting.denominator)) return true;
        else return false;
    }

    bool operator <= (const CFraction &exciting) const {
        if (((double)this->numerator / this->denominator) <= ((double)exciting.numerator / exciting.denominator)) return true;
        else return false;
    }

private:
    int numerator;
    int denominator;

};

#endif //CFRACTION_CFRACTION_H

