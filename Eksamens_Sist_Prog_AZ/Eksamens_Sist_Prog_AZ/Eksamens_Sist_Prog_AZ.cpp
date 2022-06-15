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
						   "2. Kuras no šīm funkcijām ir iebūvētas?\n",
						   "3. Kuras no šīm funkcijām nav iebūvētas?\n",
						   "4. Kuras no šīm funkcijām ir trigonometriskas funkcijas?\n",
						   "5. Kuras no šīm funkcijām ir nepareizi uzrakstītas?\n",
						   "6. Kuras no šīm funkcijām nav skaitliskās funkcijas?\n",
						   "7. Kuras no šīm funkcijām noapaļo skaitli?\n",
						   "8. Kurām no šīm funkcijām vajag dot vairāk nekā vienu skaitli? \n",
						   "9. Kuras no šīm funkcijām nav pareizi uzrakstītas? \n",
						   "10. Kuras no šīm funkcijām nav trigonometriskās funkcijas?"};

	string varianti[] = {   "a) int\nb) char\nc) double\nd) float\n",
							"a) pow(a,b)\nb) min(a,b)\nc) sqrt(a)\nd) max(a,b)\n",
							"a) sin(a)\nb) abs(a)\nc) max(a,b)\nd) pow(a,b)\n",
							"a) acos(a)\nb) sin(a)\nc) tan(a,b)\nd) log(a)\n",
							"a) sinuss(a)\nb) squareroot(a)\nc) abs(a)\nd)  pi_m\n",
							"a) min(a)\nb) toupper()\nc) sqrt(a)\nd) tolower()\n",
							"a) sqrt(a)\nb) round(a)\nc) tan(a)\nd) ceil()\n",
							"a) pow(a, b)\nb) sqrt(a)\nc) min(a, b)\nd) round(a)\n",
							"a) maximum(a)\nb) sqrt(a)\nc) ceiling(a)\nd) round(a)\n",
							"a) sin(a)\nb) acos(a)\nc) abs(a, b)\nd) log(a)" };

	string atbildes[] = {"a,c,d", "b,d", "a,b,d", "a,b,c", "a,b,d", "b,d", "b,d", "a,c", "a,c", "c,d"};
	
	cout << "10 jautājumu tests par biežāk lietotajām funkcijām darbam ar skaitliskajiem manīgajiem programmēšanas valodā C++!\n\n";
	cout<<"Uz katra jautājumi ir 2 vai 3 pareizi atbilžu varianti\nAtbildes formāts ir burti alfabēta secībā atdalot ar komatu, piemērs: \"a,b,c\".\n\n";

	while (i < 10) {
		cout << jautajumi[i];
		cout << varianti[i];
		pagp = punkti;
		punkti = parbaude(atbildes[i], punkti);
		if (pagp == punkti) {
			nepareizie = nepareizie + to_string(i);
		}
		i++;
	}

	cout << "\nPareizi atbildēto jautājumu skaits: " << punkti;
	i = 0;
	if (nepareizie.length() != 0) {
		cout << "\nNepareizi atbildētie jautājumi:\n";
		while (i < nepareizie.length()) {
			cout << jautajumi[(int)nepareizie[i] - 48];
			i++;
		}
	}
	else cout << "\nVisas atbildes pareizas!";

}
