#include <stdio.h>

void back_count (char *string, unsigned int *conta)
{

  if (*string)
  {
    if (*string == *(string + 2))
      ++*conta;

    back_count(string + 1, conta);
  }
}

int main (void)
{
  char input[201];
  unsigned int conta = 0;

  scanf("%s", input);

  back_count(input, &conta);

  printf("%u\n", conta);
}