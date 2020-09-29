#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char num1, num2, num3, num4; //creates the characters that the user will put it that are not saved in file
	char filenum1, filenum2, filenum3, filenum4; //creates characters that user will have saved in file
	int filenum1;
	int filenum2;
	int filenum3;
	int filenum4;
	int num1;
	int num2;
	int num3;
	int num4;
	ifstream infile;
	infile.open("inMeanStd.dat");
	infile >> filenum1, filenum2, filenum3, filenum4;
	float mean;
	float meanfile;
	cout << ("This is the mean of the data in file" << meanfile);
	cout << ("This is the mean of the data imputed" << mean);
	return 0;
}