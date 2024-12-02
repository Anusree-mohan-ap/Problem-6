/* Documentation 
Name          : Anusree Mohan
Date          : 02-12-24
Title         : To remove duplicate characters in a string without using any additional buffer
Sample input  : qqwertweqywr
Sample output : qwerty
*/

#include <stdio.h>
#include <string.h>

void remove_duplicate( char *str ) {
	int len = strlen(str);
	for(int i = 0; i < len - 1; i++) {
		for(int j = i+1; j < len; j++) {
			if(str[i] == str[j]) {
				for(int k = j; k < len - 1; k++) {
					str[k] = str[k+1];
				}
				len--;
			}
		}
	}
	str[len] = '\0';
}

int main()
{
	char str[50];		// "qwertfertagwa";
	printf("Enter the string : ");
	scanf(" %s",str);
	remove_duplicate(str);
	printf("String after removing duplicates : %s\n",str); 
    return 0;
}


