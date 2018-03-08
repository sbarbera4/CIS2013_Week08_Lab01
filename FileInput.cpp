#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int number;
	int one, two, three, four;
	char cont = 'y';
	ifstream in_a;

	in_a.open("numbers.dat");
	if (in_a.fail())
	{
		cout << "Something really awful happened here with numbers.dat";
		exit(1);
	}


	in_a >> one >> two >> three >> four;

	cout "Our previous numbers are " << one << " " << two << " " << three << " " << four;

	cin >> cont;

	in_a.close();

	return 0;
}


