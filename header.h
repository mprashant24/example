#include<stdlib.h>
void * my_malloc(int size){
	return malloc(size);
}

void my_free(void* p){
	free(p);
}

