// charpter 4 practice.cpp: 定义控制台应用程序的入口点。
//

/*1.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>


int main()
{
	using namespace std;
	cout << "What is your first name? ";
	string a, b;
	getline(cin, a);
	cout << a << endl;
	cout << "What is your last name? ";
	getline(cin, b);
	cout << b << endl;
	cout << "What letter grade do you deserve？ ";
	char g;
	cin >> g;
	cout << "What is your age? ";
	int c;
	cin >> c;
	cout << c << endl;
	
	cout << "Name: " << b << ", " << a << endl;
	cout << "Grade: " << char(g + 1) << endl;
	cout << "Age: " << c << endl;
	cin.get();
	cin.get();
    return 0;
} */

/*2
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert: \n";
	getline(cin, dessert);
	cout << " I have some delicious " << dessert << " for you, "
		<< name << ".\n";
	cin.get();
	cin.get();
	return 0;
} */

/*3 4
#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>

int main()
{
	using namespace std;
	string str1, str2;
	char char1[20], char2[20];

	cout << "Enter your first name: ";
	cin >> char1;
	cout << "Enter your last names：";
	cin >> char2;
	cout << "Here's the information in a single string:";
    strcat(char2, ", ");
	strcat(char2, char1);
	cout << char2 << endl;
	cout << "Enter your first name: ";
	cin >> str1;
	cout << "Enter your last names：";
	cin >> str2;
	cout << "Here's the information in a single string:";
	string str3 = str2 + ", " + str1;
	cout << str3;
	cin.get();
	cin.get();
	return 0;

}  */

/*5 6
#include "stdafx.h"
#include <iostream>
#include <string>

struct CandyBar
{
	char brand[20];
	double weight;
	int calorie;
};

int main()
{
	using namespace std;
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << snack.brand << endl << snack.calorie << endl << snack.weight << endl;

	CandyBar charr[3];
	charr[0] = { "haha haha", 5.1, 23 };
	charr[1] = { "jaja jaja", 1.23, 1 };
	charr[2] = { "kaka kaka", 2.42, 999 };
	cout << charr[0].brand << endl << charr[0].calorie << endl << charr[0].weight << endl;
	cout << charr[1].brand << endl << charr[1].calorie << endl << charr[1].weight << endl;
	cout << charr[2].brand << endl << charr[2].calorie << endl << charr[2].weight << endl;
	cin.get();
	return 0;
} */




/* Try string
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
	
	string brand;
	double weight;
	int calorie;
};

int main()
{
	using namespace std;
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << snack.brand << endl << snack.calorie << endl << snack.weight << endl;
	cin.get();
	return 0;
} */

//7 8
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
	string name;
	double Diameter;
	double weight;
};
int main()
{
	Pizza* pt = new Pizza;
	cout << "Please enter company name: ";
	getline(cin, pt->name);
	cout << "Please enter dimeter: ";
	cin >> (*pt).Diameter;
	cout << "Please enter  weight: ";
	cin >> pt->weight;
	cout << "Pizaa company name: " << (*pt).name << endl;
	cout << "Pizaa diameter: " << pt->Diameter << endl;
	cout << "Pizza weight: " << (*pt).weight << endl;
	cin.get();
	cin.get();
	cin.get();
	return 0;
} 


/*10
#include "stdafx.h"
#include <iostream>
#include <array>
int main()
{
	using namespace std;
	array<double, 3>run;
	cout << "Please enter time1: ";
	cin >> run[0];
	cout << "Please enter time2: ";
	cin >> run[1];
	cout << "Please enter time3: ";
	cin >> run[2];
	cout << "Time1: " << run[0] << endl;
	cout << "Time2: " << run[1] << endl;
	cout << "Time3: " << run[2] << endl;
	cout << "Equal time:" << (run[0] + run[1] + run[2]) / 3.0 << endl;
	cin.get();
	cin.get();
	cin.get();
	return 0;

} */