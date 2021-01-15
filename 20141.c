#include<stdio.h>

int tab[100];
int n;

void Z(int a, int b)
{
  int pom = 0;
  pom = tab[a];
  tab[a] = tab[b];
  tab[b] = pom;
}


void BZ(int a, int b)
{
  if(a!=b && a<n && a>=0 && b<n && b>=0)
     Z(a, b);
}


void wczytaj()
{
  scanf("%d", &n);

  for(int i = 0; i<n; i++)
  {
    scanf("%d", &tab[i]);
  }
}


void naprzemian(int a, int b)
{
  while(a<b)
  {
    BZ(a,b);
    a+=2;
    b-=2;
  }
}

void sortuj()
{
  int a = 0;
  int b = 0;
  int c = n - 1;
  int komorka = 0;

  if(n == 1)
  {

  }
  else
  {

     while(b<=c)
    {

        komorka = tab[b];

        if(komorka == 0)
        {
          BZ(a,b);
          a++;
          b++;

        }
        else if(komorka == 1)
        {
          b++;

        }
        else
        {
          BZ(b,c);
          c--;

        }

  }

  for(int i = 0; i<n; i++)
  {
    printf("%d", tab[i]);
  }


  naprzemian(2*a - b, b - 1);

}
}

int main()
{
  wczytaj();
  sortuj();

  for(int i = 0; i<n; i++)
  {
    printf("%d", tab[i]);
  }
}
