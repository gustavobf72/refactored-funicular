 #include <iostream>
 
using namespace std;

 
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void criptografa_frase (char *frs, int tam)
{

    // Primeira passada

    int i;

    for (i = 0; i < tam; i++)
    {
        if ( isalpha( frs[i]) )
        {
            frs[i] += 3; 
        }
    }

    // Segunda passada
    
    char c_aux;

    for (i = 0; i < tam/2; i++)
    {
       
        if (i != (tam-1-i) )
        {
            c_aux = frs[i];
            frs[i] = frs[tam-2-i];
            frs[tam-2-i] = c_aux;
        }
    }

    // Terceira passada

    
    for (i = (tam-1)/2; i < tam; i++)
    {
        frs[i]--;
    }

   
 
    for (i = 0; i < tam-1; i++)
    {
        fprintf(stdout, "%c", frs[i]); 
    }
}

int main()
{
    int i, num_casos_teste;
    char frase[1101], bn;

    fscanf(stdin, "%d", &num_casos_teste); 

    fscanf(stdin, "%c", &bn); 
    for (i = 0; i < num_casos_teste; i++)
    {
        fgets(frase, 1100, stdin);
        criptografa_frase( frase, strlen(frase) ); 
        fprintf(stdout, "\n");
    }

    return 0;
}
  
  
