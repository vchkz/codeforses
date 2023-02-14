#include <iostream>
#include <sstream>
#include <cassert>


struct Rational {
public:
    Rational(const Rational &) = default;

    Rational(int32_t num = 0, int32_t denum = 1) {
        num_ = num;
        denum_ = denum;

        if (denum == 0) {
            throw std::invalid_argument("Division by zero");
        }

        if (denum_ < 0) {
            num_ *= -1;
            denum_ *= -1;
        }

        /// gcd
        int greater;

        int gcd;
        if (num_ > denum_) { greater = num_; }
        else { greater = denum_; }
        for (int i = 1; i < greater + 1; ++i) {
            if ((num_ % i == 0) and (denum_ % i == 0)) {
                gcd = i;
            }
        }
        ///
        num_ /= gcd;
        denum_ /= gcd;
    }

    ~Rational() = default;

    int32_t getNumerator() const {
        return num_;
    }

    int32_t getDenominator() const {
        return denum_;
    }

    Rational operator+=(const Rational &rhs) {
        num_ = num_ * rhs.getDenominator() + rhs.getNumerator() * denum_;
        denum_ *= rhs.getDenominator();
        return *this;
    }

    Rational operator-=(const Rational &rhs) {
        num_ = num_ * rhs.getDenominator() - rhs.getNumerator() * denum_;
        denum_ *= rhs.getDenominator();
        return *this;
    }

    Rational operator*=(const Rational &rhs) {
        num_ *= rhs.getNumerator();
        denum_ *= rhs.getDenominator();
        return *this;
    }

    Rational operator/=(const Rational &rhs) {
        num_ *= rhs.getDenominator();
        denum_ *= rhs.getNumerator();
        return *this;
    }


private:
    int32_t num_;
    int32_t denum_;
};


Rational operator+(const Rational &lhs, const Rational &rhs) {
    return Rational(
            lhs.getNumerator() * rhs.getDenominator() + lhs.getDenominator() * rhs.getNumerator(),
            lhs.getDenominator() * rhs.getDenominator()
    );
}

Rational operator-(const Rational &lhs, const Rational &rhs) {
    return Rational(
            lhs.getNumerator() * rhs.getDenominator() - lhs.getDenominator() * rhs.getNumerator(),
            lhs.getDenominator() * rhs.getDenominator()
    );
}

Rational operator*(const Rational &lhs, const Rational &rhs) {
    return Rational(
            lhs.getNumerator() * rhs.getNumerator(),
            lhs.getDenominator() * rhs.getDenominator()
    );
}

Rational operator/(const Rational &lhs, const Rational &rhs) {
    return Rational(
            lhs.getNumerator() * rhs.getDenominator(),
            lhs.getDenominator() * rhs.getNumerator()
    );
}

std::ostream &operator<<(std::ostream &os, const Rational &rhs) {
    os << rhs.getNumerator() << "/" << rhs.getDenominator();
    return os;
}

std::istream &operator>>(std::istream &is, Rational &rhs) {
    int numerator, denominator;
    char c;
    is >> numerator >> c >> denominator;
    rhs = Rational(numerator, denominator);
    return is;
}

bool operator==(const Rational &lhs, const Rational &rhs) {
    return lhs.getNumerator() * rhs.getDenominator() == rhs.getNumerator() * lhs.getDenominator();
}

bool operator!=(const Rational &lhs, const Rational &rhs) {
    return !(lhs == rhs);
}

bool operator<(const Rational &lhs, const Rational &rhs) {
    return lhs.getNumerator() * rhs.getDenominator() < rhs.getNumerator() * lhs.getDenominator();
}

bool operator>(const Rational &lhs, const Rational &rhs) {
    return rhs < lhs;
}

bool operator<=(const Rational &lhs, const Rational &rhs) {
    return !(rhs < lhs);
}

bool operator>=(const Rational &lhs, const Rational &rhs) {
    return !(lhs < rhs);
}


int main() {
    Rational r1(2, -4);
    std::cout << r1;
//     Test constructor and getters
    Rational r1(1, 2);
    assert(r1.getNumerator() == 1);
    assert(r1.getDenominator() == 2);

    // Test addition
    Rational r2(1, 4);
    Rational result = r1 + r2;
    assert(result.getNumerator() == 3);
    assert(result.getDenominator() == 4);

    // Test subtraction
    result = r1 - r2;
    assert(result.getNumerator() == 1);
    assert(result.getDenominator() == 4);

    // Test multiplication
    result = r1 * r2;
    assert(result.getNumerator() == 1);
    assert(result.getDenominator() == 8);

    // Test division
    result = r1 / r2;
    assert(result.getNumerator() == 2);
    assert(result.getDenominator() == 1);

    std::cout << "All arithmetic tests passed successfully!" << std::endl;

    return 0;
}