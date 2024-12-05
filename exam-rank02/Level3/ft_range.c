#include <stdlib.h>

int     *ft_range(int start, int end)
{
        int size = (end - start >= 0) ? end - start + 1 : start - end + 1;
        int     *ranges = (int *)malloc(sizeof(int) * size);

        int     i = 0;
        if (start <= end)
        {
                while (start <= end)
                {
                        ranges[i++] = start;
                        start++;
                }
        }
        else
        {
                while (start >= end)
                {
                        ranges[i++] = start;
                        start--;
                }
        }
        return (ranges);
}
