#include <stdio.h>
// Helder Alves , Andrius Pinheiro
int Numeros(int NUMERO );

int main()
{
    int numero,p;
    printf("Digite o numero");
    scanf("%d", &numero);
    p = Numeros(numero);
    if(p==0)
    {
    printf("numero eh par");
    }
    if(p==1)
    {
    printf("numero eh impar");
    }
    return 0;
}

int Numeros(int NUMERO)
   {
    int  res;
    res=NUMERO%2;
    
    return res;
    }
