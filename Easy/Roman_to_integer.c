#include <string.h>

int romanToInt(char* s) 
{
	//Handling Edge cases
    if (strlen(s) > 15 || strlen(s) < 1)
      return (0);

    int result = 0;

	//Handling each letter of the string
    while (*s)
    {
        while (*s == 'M')
        {
            result += 1000;
            s++;
        }
        while (*s == 'D')
        {
            result += 500;
            s++;
        }
        while (*s == 'C')
        {
            if (*(s+1) == 'D')
            {
              result += 400;
              s++;
            }
            else if (*(s+1) == 'M')
            {
              result += 900;
              s++;
            }
            else
              result += 100;
            s++;
        }     
        while (*s == 'L')
        {
            result += 50;
            s++;
        }
        while (*s == 'X')
        {
            if (*(s+1) == 'L')
            {
              result += 40;
              s++;
            }
            else if (*(s+1) == 'C')
            {
              result += 90;
              s++;
            }
            else
              result += 10;
            s++;
        }
        while (*s == 'V')
        {
            result += 5;
            s++;
        }
        while (*s == 'I')
        {
            if (*(s+1) == 'V')
            {
              result += 4;
              s++;
            }
            else if (*(s+1) == 'X')
            {
              result += 9;
              s++;
            }
            else
              result += 1;
            s++;
        }
    }
	
    return (result);
}