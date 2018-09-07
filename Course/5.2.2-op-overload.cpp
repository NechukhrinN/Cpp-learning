/*Определите для класса Rational операторы сложения, вычитания, умножения и деления, так чтобы 
объекты типа Rational можно было складывать (вычитать, умножать и делить) не только друг с другом 
но и с целыми числами.*/

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational const& Rb1, Rational const& Rb2) {//54 121 = Rb1
	Rational x1 = Rb1;
	x1.add(Rb2);
	return x1;
}

Rational operator+(Rational const& Rb1, int const &x) {
	Rational x1(x, 1);
	Rational Rb2 = Rb1;
	Rb2.add(x1);
	return Rb2;
}

Rational operator+(int const &x, Rational const& Rb1) {
	Rational x1(x, 1);
	Rational Rb2 = Rb1;
	Rb2.add(x1);
	return Rb2;
}

Rational operator-(Rational const& Rb1, Rational const& Rb2) {//
	Rational x1 = Rb1;
	x1.sub(Rb2);
	return x1;
}

Rational operator-(Rational const& Rb1, int const &x) {
	Rational x1(x, 1); //
	Rational Rb2 = Rb1;
	Rb2.sub(x1);
	return Rb2;
}

Rational operator-(int const &x, Rational const& Rb1) {
	Rational x1(x, 1); //
	x1.sub(Rb1);
	return x1;
}

Rational operator*(Rational const& Rb1, Rational const& Rb2) {//
	Rational x1 = Rb1;
	x1.mul(Rb2);
	return x1;
}

Rational operator*(Rational const& Rb1, int const &x) {
	Rational x1(x, 1);
	x1.mul(Rb1);
	return x1;
}

Rational operator*(int const & x, Rational const& Rb1) {
	Rational x1(x, 1);
	x1.mul(Rb1);
	return x1;
}

Rational operator/(Rational const& Rb1, Rational const& Rb2) {//
	Rational x1 = Rb1;
	x1.div(Rb2);
	return x1;
}

Rational operator/(Rational const& Rb1, int const &x) {
	Rational x1(x, 1);
	Rational Rb2 = Rb1;
	Rb2.div(x1);
	return Rb2;
}

Rational operator/(int const &x, Rational const& Rb1) {
	Rational x1(x, 1);
	x1.div(Rb1);
	return x1;
}