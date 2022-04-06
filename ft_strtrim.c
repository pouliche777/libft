#include "libft.h"

int char_inset(char c, char *set)
{
    int i;

    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);

}

char *ft_strtrim(char const *s1, char const *set)
{
    int end;

    if (!s1 || !set)
        return (NULL);
    while (s1 && char_inset(*s1, set))
    {
        s1++;
    }
    end = ft_strlen(s1) - 1;
    while (char_inset(s1[end], set))
    {
        end--;
    }
    return (ft_substr(s1, 0, (size_t)end +1));