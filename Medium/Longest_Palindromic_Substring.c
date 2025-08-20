#include <stdlib.h>

int check_if_palindrom(char *s, int right, int left)
{
  if (right == left)
    return 1;
  while (s[left] == s[right])
  {
    right--;
    left++;
    if (right == left || left > right)
      return 1;
  }
  return 0;
}

char* longestPalindrome(char* s)
{
    int i = 0, pal_len = -1, j = 0, long_pal = 0, saved_pal = 0;
    char *arr;
    while (s[i] != '\0')
    {
        while (s[i+j] != '\0')
        {
            if (check_if_palindrom(s, j+i, i) == 1)
            {
                pal_len = (j+i) - i + 1;
                if (pal_len > long_pal)
                {
                    long_pal = pal_len;
                    saved_pal = i;
                }
            }
            j++;
        }
        j = 0;
        i++;
    }
    i = 0;
    if (pal_len != -1)
    {
        arr = malloc(sizeof(char) * long_pal + 1);
        while (i < long_pal)
        {
            arr[i] = s[saved_pal];
            saved_pal++;
            i++;
        }
        arr[i] = '\0';
        return arr;
    }
    return NULL;
}