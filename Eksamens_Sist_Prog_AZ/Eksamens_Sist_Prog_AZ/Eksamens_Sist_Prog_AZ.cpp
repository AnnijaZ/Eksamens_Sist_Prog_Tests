// Eksamens_Sist_Prog_AZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int parbaude(string atbildes, int punkti) {
	string ievade;
	cout << "Atbilde: "; cin >> ievade;
	if (atbildes == ievade) {
		punkti++;
	}
	return punkti;
}

int main()
{
	int punkti = 0, i=0, pagp=0;
	string nepareizie = "";
	string jautajumi[] = { "1. Ar kuriem no šiem datu tipiem var izmantot skaitliskās funkcijas?\n",
							"2. Kuras no šīm funkcijām ir iebūvētas?\n" };
	string varianti[] = { "a) int\nb) char\nc) double\nd) float\n",
							"a) pow(a,b)\nb) min(a,b)\nc) sqrt(a)\nd) max(a,b)\n"};
	string atbildes[2] = {"a,c,d", "b,d"};
	
	cout << "Tests par biežāk lietotajām funkcijām darbam ar skaitliskajiem manīgajiem programmēšanas valodā C++!\n\n";
	cout<<"Atbildes formāts burti alfabēta secībā atdalot ar komatu, piemērs: \"a,b,c\"\n";

	while (i < 2) {
		cout << jautajumi[i];
		cout << varianti[i];
		pagp = punkti;
		punkti = parbaude(atbildes[i], punkti);
		if (pagp == punkti) {
			nepareizie = nepareizie + to_string(i);
		}
		i++;
	}

}
