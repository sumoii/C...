#ifndef _ARRAY_H_
#define _ARRAY_H_ 
typedef struct {
	int *array;
	int size;
} Array;

Array array_create(int init_size);
void array_free(/*
	Name: 
	Copyright: 
	Author: 
	Date: 26/04/21 19:23
	Description: 
*/
Array *a);
int array_size(const Array *a);
int * array_at(Array *a,int index);
void array_inflate(Array *a,int more_size);

#endif
