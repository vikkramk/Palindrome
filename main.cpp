/*Palindrome*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
	char string[81];
	int counter, len;

	cout << "Enter a string:";

	cin >> string;

	counter = 0;
	while (counter < strlen(string)) { 
		if (!isalpha(string[counter]) && !isdigit(string[counter])) {
			strcpy(string+counter, string+counter+1);
		}
		else counter++;
	}

	len = strlen(string);

	counter = 0;
	while (counter < len/2 && string[counter] == string[len-1-counter]) { counter++; }

	if (counter == len/2)
		cout << "Palindrome";

	else
		cout << "Not a Palindrome";
	

	return 0;
}
