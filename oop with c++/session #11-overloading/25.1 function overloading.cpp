#include <iostream>
#include <stdio.h> 
using namespace std;
void strconcat(char *s1, char *s2);
void strconcat(char *s1, int i);
int main() {
	char str[80];
	strcpy(str, "Hello ");
	strconcat(str, "there"); 
	cout << str << "\n";
	strconcat(str, 100); 
	cout << str << "\n";
	return 0;
}
// concatenate two strings 
void strconcat(char *s1, char *s2) {
strcat(s1, s2); 
}
// concatenate a string with a "stringized" integer
void strconcat(char *s1, int i) {
	char temp[80];
	sprintf(temp, "%d", i); 
	strcat(s1, temp);
}