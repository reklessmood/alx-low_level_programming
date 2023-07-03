#include <unistd.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char.
 *
 * Return: void.
 */

void set_string(char **s, char *to);

int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    write(1, s0, 9);
    write(1, "\n", 1);
    write(1, s1, 12);
    write(1, "\n", 1);
    set_string(&s1, s0);
    write(1, s0, 9);
    write(1, "\n", 1);
    write(1, s1, 9);
    write(1, "\n", 1);
    
    return 0;
}

void set_string(char **s, char *to)
{
    *s = to;
}
