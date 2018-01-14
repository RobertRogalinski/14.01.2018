#include<stdio.h>

int x, y;
void euklides(int a, int b)
{
  if(b!=0)
  {
    euklides(b, a%b);
    int pom=y;
    y=x-a/b*y;
    x=pom;
  }
}
int main()
{
  x=1, y=0;
  int a, b;

  printf("Podaj liczbę a: ");
  scanf("%d", &a);
  printf("Podaj liczbę b: ");
  scanf("%d", &b);

  euklides(a, b);

  int wynik=a*x+b*y;
  printf("nwd %d i %d= %d * %d + %d * %d = %d\n", a, b, a, x, b, y, wynik);
  //<<a*x+b*y<<endl);


  //cin.get();
  return 0;
}
