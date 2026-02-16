#include<stdlib.h>
// fonction malloc()


void*malloc(taill_octet);
// ex
// int *p=malloc(4*sizeof(int));
// *(p+0)=9;
// *(p+1)=95;
// *(p+2)=19;
// *(p+3)=12;

//fonction free()

void free(pointeur);// libere la memoire allouee par malloc
 
// fonction calloc()
void*calloc(nbr_element,taill_elment);

//fonction realloc()
void realloc(pointeur,taill_octet);


