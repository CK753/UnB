#include <stdio.h>

void troca (char *string)
{
  if (*string)
  {

    if (*string == 'x')
    {
        putchar('y');
    }

    else
    {
        putchar(*string);
    }

    troca(string + 1);
  }
}

int main (void)
{
  char input[80];

  scanf("%s", input);
  troca(input);
  putchar('\n');

}