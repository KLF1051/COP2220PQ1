// Kevin Feldhaus
// C++
// Pop Quiz 1
// 09/10/2019

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string f = " ", l = " ", fn = " ";
	int a = 0;

	cout << "Enter first name: "; //prompt the user for first name
	cin >> f; //store the value entered by the user
	cout << "Enter last name: "; //prompt the user for last name
	cin >> l; //store the value entered by the user
	cout << "Enter your age: "; //prompt the user for their age
	cin >> a; //store the value entered by the user
	cout << endl;

	//Concatenate
	fn = f + " " + l;

	cout << "Hello " << fn << ", in 12 years your age will be " << a + 12 << ".";
	cout << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
