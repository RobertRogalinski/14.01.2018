/* Algorytm Euklidesa z odejmowaniem. */

#include <stdio.h>

int main()
{
  int m, n;

  printf("Podaj dwie liczby calkowite");
  printf(" dodatnie m i n < ");
  scanf("%d %d", &m, &n);
  printf("NWD(%d,%d) = ", m, n);

  while ( n != m)
    if ( n > m)
      n = n - m;
    else
      m = m - n;
   printf("%d\n", m);
   return 0;
}
