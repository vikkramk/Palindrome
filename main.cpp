/*Palindrome*/

//Libraries
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

//Main
int main() {
	//Declarations
	char string[81];
	int counter, len;

	//Prompt user and take input. Excess is discarded
	cout << "Enter a string:";
	cin >> string;
	string[80] = '\0';

	//Discard punctuation
	//Run through string. If not alphanumeric, copy rest over it
	counter = 0;
	while (counter < strlen(string)) { 
		if (!isalpha(string[counter]) && !isdigit(string[counter])) {
			strcpy(string+counter, string+counter+1);
		}
		else counter++;
	}

	len = strlen(string);

	//Compare characters of each end of string and counting towards middle
	counter = 0;
	while (counter < len/2 && string[counter] == string[len-1-counter]) { counter++; }

        i
	//If reached middle, all characters the same on either side, inform user
	if (counter == len/2)
		cout << "Palindrome";

	else
		cout << "Not a Palindrome";
	

	//Quit successful
	return 0;
}
