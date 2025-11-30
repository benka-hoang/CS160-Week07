#include<iostream>
#include<fstream>
#include"Date.h"

using namespace std;

int main() {
	ifstream inp("input.txt"); ofstream out("output.txt");
	Date d = { 2025, 11, 30 };
	outputDateWithFormat(out, &d, "yy MMM dd");
	inp.close(); out.close();
	return 0;
}