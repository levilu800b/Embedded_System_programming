#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char characters = 'z';

    while(characters >= 'a')
    {
        ft_putchar(characters);
        characters--;
    }
}

int main()
{
    ft_print_reverse_alphabet();

    return 0;
}