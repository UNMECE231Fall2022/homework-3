#include <iostream>

class Complex {
	private:
		double _real;
		double _imag;

	public:
		Complex();
		Complex(double real, double imag);
		Complex(const Complex& c);

		// Setter declaration
		void set_imag(double r);

		// Getter declaration
		double real() const;

		void print_polar() const;

		Complex add(const Complex &c);
		Complex mult(const Complex &c);

		Complex conj() const;

		double mag() const;

		Complex operator+(const Complex& c);

		Complex& operator=(const Complex& c);

		friend std::ostream &operator<<(std::ostream &out, const Complex &c);
};
