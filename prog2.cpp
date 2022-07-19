#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "minhas_funcoes.h"
//



int main(void) {/* inicio */
    /* numero aleatorio */
    double eps;
    /* variavel auxiliar */
    int i, a, b, c;
    float n;

    srand(time(NULL));

    /* funcao geradora de numeros aleatorios 
       inteiros: rand() */
    /* a funcao rand() gera inteiro entre 0 
       e a constante RAND_MAX */
    //printf("RAND_MAX: %15d\n",RAND_MAX);

    // contadores de casos
    //     inicializados com zeros
    a = b = c = 0;
    n = 1e3;

    for ( i=0; i<n; i++ ) {
        eps = drand();// entre 0 e 1
        if (eps<0.1) {
            a++;
//            printf("\teps=%15d menor que RAND_MAX/10\n",eps);
        } else if (eps<0.5) {
            b++;
//            printf("\teps=%15d menor que RAND_MAX/2\n",eps);
        } else {
            c++;
//            printf("\teps=%15d\n",eps);
        }
    }
    printf("a=%f\nb=%f\nc=%f\n",a/n,b/n,c/n);
    return 0;
}



