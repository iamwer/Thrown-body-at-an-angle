#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "rus");
	double V, T, param, result;
	const double Pi = asin(1.0), g = 9.8;
	std::cout << " V = ";
	std::cin >> V;

	std::cout << std::endl << " T = ";
	std::cin >> T;

	if (1 < fabs(g * T / (2 * V)))
		std::cout << "Incorrect" << std::endl;
	else
	{
		param = asin(g * T / (2 * V));
		std::cout << "”гол = " << param * (90 / Pi) << std::endl;
	}

	system("pause");
	return 0;
}