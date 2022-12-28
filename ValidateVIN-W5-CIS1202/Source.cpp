/*
* Kurt Kangas
* CIS 1202 C++ Programming II
* Week 5 Project
* VIN Validation Checker
*/

#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>

using namespace std;

bool valid(char[]);
void origin(char[], char[]);
int year(char[]);


int main()
{
	const int SIZE = 18;
	char VIN[SIZE];
	char originName[SIZE];

	strcpy(VIN, "1FTRW14W84KC76110");

	if (valid(VIN))
	{
		cout << "\nVIN is valid";

		origin(VIN, originName);

		cout << "\nOrigin: ";
		for (int i = 0; i < strlen(originName); i++)
		{
			cout << originName[i];
		}

		cout << "\nYear: " << year(VIN) << endl;
	}
	else {
		cout << "\nVIN is not valid";
	}

	cout << endl << endl;
	system("pause");
	return (0);
}
bool valid(char vin[])
{
	bool invalid = true;

	while (invalid)
	{
		invalid = false;

		cout << "Testing the VIN " << vin;
		if (strlen(vin) == 17)
		{
			for (int i = 0; i < 17; i++)
			{
				if (islower(vin[i])) {
					invalid = true;
					return 0;
				}
				else if ((vin[i]) == 'I' || (vin[i]) == 'O' || (vin[i]) == 'Q' || (vin[i]) == 'Z')
				{
					invalid = true;
					return 0;
				}
			}
		}
		else {
			invalid = true;
			return 0;
		}
	}
	return 1;
}
void origin(char vin[], char originName[])
{
	int a = vin[0];

	if (vin[0] >= 'A' && vin[0] <= 'H')
	{
		strcpy(originName, "Africa");
	}
	else if (vin[0] >= 'J' && vin[0] <= 'R')
	{
		strcpy(originName, "Asia");
	}
	else if (vin[0] >= 'S' && vin[0] <= 'Y')
	{
		strcpy(originName, "Europe");
	}
	else if (vin[0] >= '1' && vin[0] <= '5')
	{
		strcpy(originName, "North America");
	}
	else if (vin[0] >= '6' && vin[0] <= '7')
	{
		strcpy(originName, "Oceania");
	}
	else {
		strcpy(originName, "South America");
	}
	return;
}
int year(char vin[])
{
	switch (vin[9])
	{
	case 'P':
		return 1993;
		break;
	case 'R':
		return 1994;
		break;
	case 'S':
		return 1995;
		break;
	case 'T':
		return 1996;
		break;
	case 'V':
		return 1997;
		break;
	case 'W':
		return 1998;
		break;
	case 'X':
		return 1999;
		break;
	case 'Y':
		return 2000;
		break;
	case '1':
		return 2001;
		break;
	case '2':
		return 2002;
		break;
	case '3':
		return 2003;
		break;
	case '4':
		return 2004;
		break;
	case '5':
		return 2005;
		break;
	case '6':
		return 2006;
		break;
	case '7':
		return 2007;
		break;
	case '8':
		return 2008;
		break;
	case '9':
		return 2009;
		break;
	case 'A':
		return 2010;
		break;
	case 'B':
		return 2011;
		break;
	case 'C':
		return 2012;
		break;
	case 'D':
		return 2013;
		break;
	case 'E':
		return 2014;
		break;
	case 'F':
		return 2015;
		break;
	case 'G':
		return 2016;
		break;
	case 'H':
		return 2017;
		break;
	case 'J':
		return 2018;
		break;
	case 'K':
		return 2019;
		break;
	case 'L':
		return 2020;
		break;
	case 'M':
		return 2021;
		break;
	default:
		return 0;
	}
}