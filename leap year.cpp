#include <iostream>
using namespace std;


void num(int year)

{
   
	if (year % 4 == 0)
		cout << "the year is a leap year";

	else
		cout << " the year is not a leap year";

	system ("pause>0"); 

}




int main()
{
	int year;
	cout << "enter a year you want ";
	cin >> year;
	cout << endl;
	num(year);

	return 0;


	system("pause > 0");

}

