# cs121_2025__project_5_KE__FileIO

### This will read a 3-column csv file with x rows, where columns 1 and 2 are integer values, and column 3 is a string value. 
### It will then add up the integers, and print the string as many times as the sum of the integers

## The program will:
* open and read csv file called "data.csv" 

* on each line, the program will copy the values of each piece of data on the line (3 datapoints total per line)

	* store the first two values in strings that will be converted to integers called "sNum1" and "sNum2" (string numbers)

	* store the last value in a string that will be printed

* convert the first two strings into integers, called "a" and "b", by passing them through a converter string stream

* add the two integers and store their sum in a new variable called "sum"

* print text "sum" times
