#include <iostream>
#include "math.h"
#include "Header.h"

using namespace std;
extern "C" float integral_calc(int predel_1, int predel_2);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	int predel_1, predel_2;

	cout << "������� ������ ������" << endl;
	cin >> predel_1;

	cout << "������� ������� ������" << endl;
	cin >> predel_2;
	double Result = integral_calc(predel_1, predel_2);
	cout << "���������:" << Result << endl;

	return 0;
}


