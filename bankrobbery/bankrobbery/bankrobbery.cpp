// bankrobbery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void hackAccount(int& x, int& y);
int main()
{
	int myBalance = 150;
	int vicBalance = 1000;
	cout << "original values\n";
	cout << "my current balance: " << myBalance << "\n";
	cout << "Victom Current balance " << vicBalance << "\n\n";
	//begining hack
	//making text green
	system("color 0a");
	cout << "Hacking\n";
	system("TIMEOUT 5");// added cool delay command
	hackAccount(myBalance, vicBalance);
	cout << "my balance: " << myBalance << "\n";
	cout << "Victom balance: " << vicBalance << "\n";

	return 0;

}

void hackAccount(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
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
