#include <iostream>
using namespace std;
int main()
{
	double Amount, Zakah;
	bool input_check;
	do {


		cout << "Please Enter the Amount of Money you have to know your Zakah : ";
		cin >> Amount;
		//The following three lines will make sure only numerical values are entered by the user.
		input_check = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		while (Amount < 0)
		{
			cout << "Error! Please Enter a Positive Number. \n";
			cin >> Amount;
			input_check = cin.fail();
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (input_check == true);
	if (Amount < 5000)
	{
		cout << "There's No Zakah. \n";
		system("pause");
		return 0;
	}
	Zakah = Amount / 40; 
	cout << "The Amount You Entered is : " << Amount << " Saudi Riyals. \n";
	cout<< "Your Zakah is : " << Zakah <<" Saudi Riyals "<< endl;

	system("pause");
	return 0;
}