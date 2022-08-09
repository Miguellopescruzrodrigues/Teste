#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void) {
	char		ch, *cptr;	// 1 byte
	short int 	si, *siptr; // 2 byte
	int 		i, 	*iptr;	// 4 byte
	long int 	li, *liptr;	// 6 byte
	float 		f, 	*fptr;	// 4 byte
	double 		d, 	*dptr;	// 8 byte
	
	cptr = &ch; // pega o endereço de ch e guarda em cptr
	siptr = &si; // pega o endereço de si e guarda em siptr
	iptr = &i; // pega o endereço de i e guarda em iptr
	liptr = &li; // pega o endereço de li e guarda em liptr
	fptr = &f; // pega o endereço de f e guarda em fptr
	dptr = &d; // pega o endereço de d e guarda em dptr
	
	*cptr = 96; //
	*siptr = -1; //
	*iptr =100; // Mesma coisa que i = 100
	*liptr =10000; // Mesma coisa que li = 1000
	*fptr =0.5; // Mesma coisa que f = 0.5
	*dptr =1e-4; // Mesma coisa que d = 0.0001
	
	
	printf("sizeof(ch)) %ld\t%p\n", sizeof(ch), &ch);
	printf("sizeof(si)) %ld\t%p\n", sizeof(si), &si);
	printf("sizeof(i)) %ld\t%p\n", sizeof(i), &i);
	printf("sizeof(li)) %ld\t%p\n", sizeof(li), &li);
	printf("sizeof(f)) %ld\t%p\n", sizeof(f), &f);
	printf("sizeof(d)) %ld\t%p\n", sizeof(d), &d);
	
	printf("\n\n");
	
	printf("ch = %d\n", *cptr);
	printf("si = %d\n", si);
	printf("i = %d\n",  i);
	printf("li = %ld\n", li);
	printf("f = %f\n",  f);
	printf("d = %lf\n",  d);
	
	return 0;
	
	}
