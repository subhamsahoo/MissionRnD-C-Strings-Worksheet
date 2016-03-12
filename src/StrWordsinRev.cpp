/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i = 0, j, start = 0, end;
	char temp;
	j = len - 1;
	while (i<j)
	{
		temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}

	input[len] = ' ';

	for (i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == ' ')
		{
			end = i - 1;
			while (start<end)
			{
				temp = input[start];
				input[start] = input[end];
				input[end] = temp;
				start++;
				end--;
			}
			start = i + 1;
		}
	}
}
