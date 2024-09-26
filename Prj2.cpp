#include <iostream>

using namespace std;

int main() {
	double x;
	double y;
	double sum;


	cout << "What is x? "; // asks for x 
	cin >> x; // takes in x
	cout << "\n"; //new linw

	cout << "What is y? ";  // ask for y
	cin >> y;     // takes in y 
	cout << "\n"; // new line

	double *ptrX = &x;   // creats the pointer for x
	double *ptrY = &y;	// // creats the pointer for y

	sum = *ptrX + *ptrY;  // sums using the pointer


	cout << "x is " << x << " y is " << y << " sum is " << sum << "\n";  // prints is all out 



	return 0;
}


