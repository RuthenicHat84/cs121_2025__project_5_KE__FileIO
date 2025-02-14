// fileio.cpp start

#include <fstream>
#include <iostream>
#include <sstream>


int Math(int a, int b);

int main(){
	
	std::string sNum1;
	std::string sNum2;

	std::ifstream inFile;
	std::stringstream ss; 
	std::string currentLine;
	std::string text;

	int a;
	int b;
	// open file
	inFile.open("data.csv");
	// start while
	while(getline(inFile, currentLine, ',')){
		std::cout << currentLine << std::endl;
		
		ss.clear();
		ss.str(currentLine);
		
		getline(ss, sNum1, ',');
		getline(ss, sNum2, ',');
		getline(ss, text);


		ss.clear();
		ss.str("");

		ss << a << " " << b;
		ss >> a >> b;

		int sum = a + b;

		std::cout << sum << std::endl;
	} // end while

	inFile.close();
	return 0;
} // end main
