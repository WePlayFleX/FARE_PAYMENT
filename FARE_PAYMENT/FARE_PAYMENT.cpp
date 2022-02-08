#include <iostream>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

const char ESC = 27;
const double TOLL = 0.5;

class tollBooth
{
private:
	unsigned int totalCars;
	double totalCash;

public:
	tollBooth() : totalCars(0), totalCash(0.0)
	{

	}

	void payingCar()
	{
		totalCars++;
		totalCash += TOLL;
	}

	void nopayCar()
	{
		totalCars++;
	}

	void display()const
	{
		cout << "\nCars: " << totalCars << ", Money: " << totalCash << endl;
	}
};


int main()
{
	tollBooth booth1;
	char ch;

	cout << "Press   0 for car without payment, "
		<< "\n\t1 for each paying machine, "
		<< "\n\tEsc for exit. " << endl;

	do
	{
		ch = getche();

		if (ch == '0')
		{
			booth1.nopayCar();
		}
		if (ch == '1')
		{
			booth1.payingCar();
		}

	} while (ch != ESC);

	booth1.display();

	system("pause");
	return 0;
}