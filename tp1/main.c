/*
 * main.c -- main program function
 */


#include <stdio.h>
#include "list.h"


/*
 * main program
 */

int main(int argc, char *argv[])
{
  list_t *list;
 
  printf("<<BEGIN>>\n");

  /* initialize list */
  list = lst_new();

  /* insert several elements into list */
  lst_insert(list, 1);
  lst_insert(list, 3);
  lst_insert(list, 2);
  lst_insert(list, 0);
  lst_insert(list, 5);

  /* print list 'list' */
  lst_print(list);

  /* remove elements from list */
  lst_remove(list, 1);
  lst_remove(list, 2);
  lst_remove(list, 5);

  /* print list */
  lst_print(list);

  /* clean up list */
  lst_destroy(list);

  printf("<<END>>\n");

  return 0;
}
