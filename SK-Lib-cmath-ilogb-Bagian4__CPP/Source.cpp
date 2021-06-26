// C++ program to illustrate the ilogb()
// function when input is 0
#include <cfloat>
#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks
*	Modified For Learn by Rizky Khapidsyah
*	I.D.E : VS2019
*/

using namespace std;

int main() {
	int result, x = 0;

	result = ilogb(x);
	cout << "ilogb (" << x << ") = " << result << endl;

	_getch();
	return 0;
}