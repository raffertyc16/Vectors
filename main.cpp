#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	vector<int> v;
	int number;
	int number2;
	cout << "Input Vector 1" << endl;
	cin >> number;
	cout << "Input Vector 2" << endl;
	cin >> number2;
	cout << "Vector 1 squared is " << pow(number, 2) << endl;
	cout << "Vector 2 squared is " << pow(number2, 2) << endl;
	cout << "Vector 1 squared plus Vector 2 squared is " << pow(number, 2) + pow(number2, 2) << endl;
	cout << "The magnitute of Vector 1 and Vector 2 is " << sqrt(pow(number, 2) + pow(number2, 2)) << endl;
	cout << "The angle in radians is " << atan(number2 / number) << endl;
	cout << "The angle in degrees is " << (atan(number2 / number))*(180 / 3.1415926535) << endl;
	return 0;

}
