#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int funkcja(const char *tekst)
{
  int tab[10];
  int i;
  for(i=0; i<10; i++)
  {
    tab[i]=tekst[i];
    printf("%c  %d\n", tekst[i], tab[i]);
  }
  return 0;
}

int main()
{
    const char *tekst="ala ma kota";
    printf("%s\n", tekst);

    funkcja(tekst);

  return 0;
}
