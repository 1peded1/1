#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	int x;
	cout << "Enter x=";
	cin >> x;
	float rez;
	float prod = 1;
	for (int i = 1; i < 11; i++)
	{
		prod = prod * pow(i, 3);
	}
	rez = pow(x, 5) + prod;
	cout << "Z=" << rez << endl;

	system("pause");
	return 0;
}
