#include "mylib.h"
char skaiciavimo_Strategija = 'v';
int main() {
	//std::ifstream open_f("studentai.txt");
	//char c;
	//while (open_f.get(c)) std::cout << c;
	//std::cout << open_f.rdbuf();
	//open_f.close();
	std::cout << "Miksuotas variantas (skaito eilutemis, iraso per bufer'i):\n";
	mix("studentai.txt", "studentai_copy.txt");

	cout << "Kaip skaiciuoti galutini? v/m ";
	cin >> skaiciavimo_Strategija;


	cout << "Iveskite studenta ";
	vector <studentas> grupe;
	for (int i = 0; i < 3; i++)
	{
		studentas K;
		grupe.push_back(K);
		K.~studentas();
	}
	cout << endl << grupe.size() << endl;
	printf("|-10s|%20s|", "Vardas", "Pavarde");
	for (int i = 0; i < grupe[0].getPazNr(); i++)
		printf("%s%d|", "ND", i + 1);
	printf("%10s|\n", "Egzaminas");
	for (auto& a : grupe) a.printas();
	cout << endl;

	printf("|%-10s|%20s|", "Vardas", "Pavarde");
	printf("%10s|\n", skaiciavimo_Strategija == 'm' ? "Galutinis(m)" : "Galutinis (v)");

	for (auto& a : grupe) a.printasRez();
	system("pause");
}