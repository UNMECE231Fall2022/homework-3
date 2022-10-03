#include <iostream>
#include "complex.hpp"

int main() {
	Complex c1;
	c1.print();

	Complex c2(1.0, 0.0);
	c2.print();

	Complex c3(3.0, 4.0);
	c3.print();

	Complex c4(5.0, 12.0);

	std::cout << '\n';
	std::cout << "Values of c4: " << c4.real() << ", " << c4.imag() << '\n';
	std::cout << "Should be 5, 12\n";

	std::cout << std::endl;

	c1=c3.add(c4);
	c1.print();
	std::cout << "Should be 8 + 16j\n";

	c2=c3.sub(c4);
	c2.print();
	std::cout << "Should be -2 - 8j\n";

	c1 = c3.mult(c4);
	c1.print();
	std::cout << "Should be -33 + 56j\n";

	c2 = c3.div(c4);
	c2.print();
	std::cout << "Should be 0.372781 - 0.0946746j\n\n";

	//Magnitude
	std::cout << "Magnitude: " << c3.mag() << ", should be 5\n";
	std::cout << "Magnitude: " << c4.mag() << ", should be 13\n";

	//Phase
	std::cout << "Phase: " << c3.phase() << ", should be 53.1301\n";
	std::cout << "Phase: " << c4.phase() << ", should be 67.3801\n";

	c3.print_polar();
	std::cout << "Should be 5, 53.1301\n";
	c4.print_polar();
	std::cout << "Should be 13, 67.3801\n\n";

	std::cout << "Testing overloaded operators" << std::endl;

	Complex c5 = c3 + c4;
	std::cout << c5 << std::endl;
	std::cout << (c4 - c3) << std::endl;
	std::cout << (c3 * c4) << std::endl;
	std::cout << (c3 / c4) << std::endl;

	return 0;
}
