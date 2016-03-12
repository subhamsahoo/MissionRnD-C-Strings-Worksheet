/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	if (str==nullptr)
	return '\0';
	int count;
	char letter;
	for (count = 0; str[count] != '\0'; count++)
	{
	}
	if (K > count)
		return '\0';
	letter = str[count - K - 1];
	return letter;
	
}