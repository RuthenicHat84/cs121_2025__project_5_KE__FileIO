// fileio.cpp start

#include <fstream>
#include <iostream>
#include <sstream>

int main(){

    // variables for reading files
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream ss;

    // variables for data storage (strings)
    std::string sNum1;
    std::string sNum2;
    std::string text;

    // variables for data storage (ints)
    int a;
    int b;


    // open the file
    inFile.open("data.csv");
    
    // while loop start
    while(getline(inFile, currentLine)){

        // clear string stream
        ss.clear();
        
	// pass the current line into the stringstream
        ss.str(currentLine);
	
	// store values into sperate variables
        getline(ss, sNum1, ',');
        getline(ss, sNum2, ',');
        getline(ss, text);

	// clear string stream
        ss.clear();
        ss.str("");

	// pass values through converter
        ss << sNum1 << " " << sNum2;
        ss >> a >> b;
	
	// get sum of values
        int sum = a + b;

	// for the length of sum, print the value stored in text
	// for loop start
        for (int i = 0; i < sum; i++){
            std::cout << text << " ";
        } // end for
	

	// new line
        std::cout << std::endl;

    } // end while
    inFile.close();

    return(0);

} // end main

