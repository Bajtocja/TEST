#include<stdio.h>
#include<stdio.h>

int roznekonce(struct Tlista* A[], int n)
{
  int licznik = 0;
  struct Tlista* pom = (struct Tlista* pom)malloc(sizeof(struct Tlista pom));
  pom->nast = NULL;
  for(int i = 0; i<n; i++)
  {
    struct Tlista* L = A[i];
    while((L->nast)->nast != NULL)
    {
       L = L->nast;
    }
    if(L->nast == pom)
    {
    }
    else
    {
      L->nast = pom;
      licznik++;
    }
    return licznik;
   }
}

int main()
{

}
