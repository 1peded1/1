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
	int sum = 0;
	for (int i = 1; i < 6; i++)
	{
		sum = sum + i + 2 * x;
	}
	rez = tan(sum);
	cout << "Y=" << sum << endl;

	system("pause");
	return 0;
}
