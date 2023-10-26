#pragma once
#include <iomanip>
#include <numeric>
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <fstream>
#include "fast.h"
#include "mix.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;
using std::domain_error;
using std::sort;

extern char skaiciavimo_Strategija;

extern string failoVardas;

template <typename T>
T add(T a, T b) {
	return a + b;
}

class studentas {
	string vard, pav;
	//array<int, 10> paz;
	vector<int> paz;
	int egz,laik;
	float rez;
public:
	studentas();
	studentas(string v, string p, vector<int>pp, int e);
	studentas(const studentas& temp);
	studentas& operator=(const studentas& temp);
	~studentas();
	//Getter
	inline string getVardas() { return vard; }
	inline int getPazNr() { return paz.size(); }
	inline float getGal() { return rez; }
	//Setter
	inline void setVardas(string t) { vard = t; }
	inline void setPavarde(string t) { pav = t; }
	inline void setEgzaminas(int t) { egz = t; }
	inline void setPazymiai(vector<int>t) { paz = t; }
	void printas();
	void printasRez();
	void rezVid();
	void rezMed();
	//Duomenu ivedimo metodas perdentas cin
	//Duomenu isvedimo metodas perdentas cout
	//Galutinis pazymio skaiciavimo metodas pagal median arba vidurki - renkasi zmogus
	double mediana(vector<int> vec);
	
};
bool maziau(studentas& a, studentas& b);
bool daugiau(studentas& a, studentas& b);
bool daugiauGp(studentas& a, studentas& b);
void rusiavimas(vector<studentas> &Gr);