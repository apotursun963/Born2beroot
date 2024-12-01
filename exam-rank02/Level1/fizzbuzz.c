/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/

#include <stdio.h>
#include <unistd.h>

void    write_if_not(int num)
{
    char numbers[] = "0123456789";

    if (num > 9)
        write_if_not(num / 10);
    write(1, &numbers[num % 10], 1);
}

int main()
{
    int i = 1;
    char str[] = "fizzbuzz";
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, str, 8);
        else if (i % 5 == 0)
            write(1, &str[4], 4);
        else if (i % 3 == 0)
            write(1, str, 4);
        else
            write_if_not(i);
        i++;
        write(1, "\n", 1);
    }
    return 0;
}

