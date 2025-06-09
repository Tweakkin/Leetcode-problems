#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) 
{
  if (strlen(s) <= 1)
    return false;
  int Brackets_count = 0;
  char Brackets[strlen(s)];
  
  if (!*s)
    return false;
  while (*s)
  {
    if (*s == '(' || *s == '{' || *s == '[')
    {
      Brackets[Brackets_count] = *s;
      Brackets_count++;
    }
    else if (*s == ')' && Brackets_count > 0)
    {
      if (Brackets[Brackets_count - 1] == '(')
        Brackets_count--;
      else
        return false;
    }
    else if (*s == '}'&& Brackets_count > 0)
    {
      if (Brackets[Brackets_count - 1] == '{')
        Brackets_count--;
      else
        return false;
    }
    else if (*s == ']' && Brackets_count > 0)
    {
      if (Brackets[Brackets_count - 1] == '[')
        Brackets_count--;
      else
        return false;
    }
    else
      return false;
    s++;
  }
  if (Brackets_count == 0)
    return true;
  else
    return false;
} 