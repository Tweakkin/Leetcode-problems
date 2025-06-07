#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) 
{
  if (strsSize == 0 || strs[0][0] == '\0')
  {
    char *result = malloc(sizeof(char) * 1);
    result[0] = '\0';
    return result;
  }
    
  int i = 0, j = 1;
  char current_char;
  char *result;
  while(strs[0][i] != '\0')
  {
    current_char = strs[0][i];
    j = 1;
    while(j < strsSize)
    {
      if (strs[j][i] == '\0' || strs[j][i] != current_char)
      {
        result = malloc(sizeof(char) * (i + 1));
        for (int x = 0; x < i; x++)
          result[x] = strs[0][x];
        result[i] = '\0';
        return (result);
      }
      j++;
    }
    i++;
  }
  return (strs[0]);
}
