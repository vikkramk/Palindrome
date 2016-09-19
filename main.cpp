/*Palindrome*/

//Libraries
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

//Main
int main() {
	//Declarations
	char str[81], pstr[81];
	int c, pc, len;

START:
	
	//Prompt user and take input. Excess is discarded
	cout << "Enter a string:";
	cin >> str;
	str[80] = '\0';

	//Discard punctuation
	//Run through string and only copy characters or numbers into other string
	len = strlen(str);
	for (c = pc = 0; c < len; c++)
		if (isalpha(str[c]) || isdigit(str[c]))
			pstr[pc++] = str[c];

	pstr[pc] = '\0';
	len = strlen(pstr);

	//Compare characters of each end of string and counting towards middle
	c = 0;
	while (c < len/2 && pstr[c] == pstr[len-1-c]) { c++; }

        
	//If reached middle, all characters the same on either side, inform user
	if (c == len/2)
		cout << "Palindrome\n";

	else
		cout << "Not a Palindrome\n";

	goto START;	
	//Quit successful
	return 0;
}
