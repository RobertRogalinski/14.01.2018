#include <stdio.h>

int main()
{
  int r, nwd, a, q, b;
  int x, x1, x2;
  int y, y1, y2;
  int nwd_a, nwd_b;


  printf("Podaj liczbę a: ");
  scanf("%d", &nwd_a);

  printf("Podaj liczbę b: ");
  scanf("%d", &nwd_b);


  if(nwd_b>nwd_a)
  {
    nwd=nwd_b;
    nwd_b=nwd_a;
    nwd_a=nwd;
  }

  a=nwd_a;
  b=nwd_b;

  q=a/b;
  r=a-q*b;
  nwd=b;

  x2=1;
  x1=0;
  y2=0;
  y1=1;
  x=1;
  y=y2-(q-1)*y1;

  while(r!=0)
  {
    a=b;
    b=r;

    x=x2 - q*x1;
    x2=x1;
    x1=x;

    y=y2 - q*y1;
    y2=y1;
    y1=y;

    nwd=r;
    q=a/b;
    r=a-q*b;
  }


  printf("NWD(%d, %d) = %d = %d * %d + %d * %d\n", nwd_a, nwd_b, nwd, x, nwd_a, y, nwd_b);

  if (nwd == 1)
  printf("%d * %d mod %d = 1\n", nwd_b, y, nwd_a);

return 0;
}
