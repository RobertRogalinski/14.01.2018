#include<stdio.h>
#include<stdlib.h>

int funkcja(int a, int b)
{
  if(a==0)
  {
    b=b+1;
    return b;
  }
  if(a>0&&b==0)
  {
    funkcja(a-1,1);
  }
  if(a>0&&b>0)
  {
    funkcja(a-1,funkcja(a,b-1));
  }



}


int main()
{
  int m, n;
  printf("Podaj liczbę m: ");
  scanf("%d", &m);
  printf("Podaj liczbę n: ");
  scanf("%d", &n);

  funkcja(m,n);
  int wynik=funkcja(m,n);
  printf("%d\n", wynik);


  return 0;
}
