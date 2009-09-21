/*
 * list.c - implementation of the integer list functions 
 */


#include <stdlib.h>
#include <stdio.h>
#include "list.h"



list_t* lst_new()
{
   list_t *list;
   list = (list_t*) malloc(sizeof(list_t));
   list->first = NULL;
   return list;
}


void lst_destroy(list_t *list)
{
   printf("lst_destroy\n");
}


void lst_insert(list_t *list, int value)
{
	int i = 0;
	while(1) {
	if (list[i] == NULL) {
		list[i] = value;
		list[i+1]
	}

	}
   printf("lst_insert: value=%d\n", value);
}


void lst_remove(list_t *list, int value)
{
	int i = 0;
	printf("lst_remove: value=%d\n", value);
	
	
}


void lst_print(list_t *list)
{
   printf("lst_print\n");
}
