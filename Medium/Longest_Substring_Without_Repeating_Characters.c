
int check_if_duplicated(char *str, char c, int right, int left)
{
    while (left < right)
    {
        if (str[left] == c)
            return 0;
        left++;
    }
    return 1;
}

int lengthOfLongestSubstring(char* s) 
{
    int left = 0, right = 0;
    int current_len = 0, max_len = 0;
    char **arr;
    
    while (s[right] != '\0')
    {
        while (check_if_duplicated(s, s[right], right, left) == 0)
            left++;
        current_len = right - left + 1;
        if (current_len > max_len)
            max_len = current_len;
        right++;
    }
    return max_len;
}
