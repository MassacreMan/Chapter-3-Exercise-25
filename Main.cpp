//This program calculates the number of grapevines that can be planted in a row. 
#include <iostream>
using namespace std;

int main()

{
	//Variable for the number of grapevines, the space between each grapevine, and the length of the row.
	double totalGrapevines, length, endPostSpace, grapevineSpace;

	cout << "This program calculates the number of grapevines that can be planted in a row." << endl;
	cout << "Enter the length of the row: (in feet) " << endl;
	cin >> length;
	cout << "Enter the amount of space used by an endpost: (in feet) " << endl;
	cin >> endPostSpace;
	cout << "Enter the space between vines: (in feet)" << endl;
	cin >> grapevineSpace;
	totalGrapevines = (length - (2 * endPostSpace)) / grapevineSpace;
	cout << "The amount of grapevines that can be planted in a row is : " << totalGrapevines << endl;
	return 0;
}