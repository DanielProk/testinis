#include "mylib.h"
#include "main.h"
char skaiciavimo_Strategija = 'v';


int main() {

    int num1 = 5, num2 = 7;
    double double1 = 3.14, double2 = 2.71;
    /*
    //------------------------------------------------------------
 // Open the input file
    std::ifstream input("studentai.txt");

    if (!input.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    // Read the header line (column names)
    std::string header;
    std::getline(input, header);

    // Initialize vectors to store data
    //std::vector<std::string> vardai;
    //std::vector<std::string> pavardes;
    //std::vector<std::vector<int>> grades;
    studentas temp;
    // Read data from the file
    std::string line;
    while (std::getline(input, line)) {
        std::string vardas, pavarde;
        std::vector<int> nd;
        std::istringstream iss(line);

        iss >> vardas >> pavarde;
        int grade;
        while (iss >> grade) {
            nd.push_back(grade);
        }
        temp.setVardas(vardas);
        temp.setPavarde(pavarde);
        temp.setEgzaminas(nd.back());
        nd.pop_back();
        temp.setPazymiai(nd);

    }

    // Close the input file
    input.close();

    // Determine the maximum number of columns in a row
    size_t maxColumns = 2; // Vardas and Pavarde

    for (const auto& gradeRow : grades) {
        maxColumns = std::max(maxColumns, gradeRow.size());
    }

    // Print the table header
    std::cout << std::left << std::setw(15) << "Vardas" << std::setw(15) << "Pavarde";

    for (size_t i = 1; i <= maxColumns; i++) {
        if (i == maxColumns) {
            std::cout << std::setw(10) << "EGZ";
        }
        else {
            std::cout << std::setw(10) << "ND" + std::to_string(i);
        }
    }

    std::cout << std::endl;

    // Print the table separator line
    for (size_t i = 0; i < (maxColumns + 2) * 10; i++) {
        std::cout << "=";
    }
    std::cout << std::endl;

    // Print the table data
    for (size_t i = 0; i < vardai.size(); i++) {
        std::cout << std::left << std::setw(15) << vardai[i] << std::setw(15) << pavardes[i];

        for (size_t j = 0; j < grades[i].size(); j++) {
            std::cout << std::setw(10) << grades[i][j];
        }

        // Fill the remaining columns with empty cells
        for (size_t j = grades[i].size(); j < maxColumns; j++) {
            std::cout << std::setw(10) << "";
        }

        std::cout << std::endl;

        // Print a separator line between rows
        for (size_t j = 0; j < (maxColumns + 2) * 10; j++) {
            std::cout << "-";
        }
        std::cout << std::endl;
    }

    system("pause");*/

    //------------------------------------------------------------
    
    std::cout << "Suma int: " << add(num1, num2) << std::endl;
    std::cout << "Suma double: " << add(double1, double2) << std::endl;

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








/*
  //------------------------------------------------------------
 // Open the input file
    std::ifstream input("studentai.txt");

    if (!input.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    // Read the header line (column names)
    std::string header;
    std::getline(input, header);

    // Initialize vectors to store data
    //std::vector<std::string> vardai;
    //std::vector<std::string> pavardes;
    //std::vector<std::vector<int>> grades;
    studentas temp;
    // Read data from the file
    std::string line;
    while (std::getline(input, line)) {
        std::string vardas, pavarde;
        std::vector<int> nd;
        std::istringstream iss(line);

        iss >> vardas >> pavarde;
        int grade;
        while (iss >> grade) {
            nd.push_back(grade);
        }
        temp.setVardas(vardas);
        temp.setPavarde(pavarde);
        temp.setEgzaminas(nd.back());
        nd.pop_back();
        temp.setPazymiai(nd);

    }

    // Close the input file
    input.close();

    // Determine the maximum number of columns in a row
    size_t maxColumns = 2; // Vardas and Pavarde

    for (const auto& gradeRow : grades) {
        maxColumns = std::max(maxColumns, gradeRow.size());
    }

    // Print the table header
    std::cout << std::left << std::setw(15) << "Vardas" << std::setw(15) << "Pavarde";

    for (size_t i = 1; i <= maxColumns; i++) {
        if (i == maxColumns) {
            std::cout << std::setw(10) << "EGZ";
        }
        else {
            std::cout << std::setw(10) << "ND" + std::to_string(i);
        }
    }

    std::cout << std::endl;

    // Print the table separator line
    for (size_t i = 0; i < (maxColumns + 2) * 10; i++) {
        std::cout << "=";
    }
    std::cout << std::endl;

    // Print the table data
    for (size_t i = 0; i < vardai.size(); i++) {
        std::cout << std::left << std::setw(15) << vardai[i] << std::setw(15) << pavardes[i];

        for (size_t j = 0; j < grades[i].size(); j++) {
            std::cout << std::setw(10) << grades[i][j];
        }

        // Fill the remaining columns with empty cells
        for (size_t j = grades[i].size(); j < maxColumns; j++) {
            std::cout << std::setw(10) << "";
        }

        std::cout << std::endl;

        // Print a separator line between rows
        for (size_t j = 0; j < (maxColumns + 2) * 10; j++) {
            std::cout << "-";
        }
        std::cout << std::endl;
    }

    system("pause");

    //------------------------------------------------------------
    */