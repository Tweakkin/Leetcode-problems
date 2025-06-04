
#include <stdbool.h>

bool isPalindrome(int x) 
{
	//Started by checking Edge cases
    if (x < 0)
      return (false);
    else if (x <= 9 && x >= 0)
      return (true);

	//Variables
    char str[11];
    int i = 0;

	//Converting the integer into a string
    while (x != 0)
    {
        str[i] = (x%10) + 48;
        i++;
        x /= 10;
    }
    str[i] = '\0';

	//Cheking if it's a Palindrome
    int j = i - 1;
    i = 0;
    while (i < j)
    {
      if (str[i] != str[j])
        return false;
      i++;
      j--;
    }
    return true;
}