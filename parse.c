#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "parse.h"

char ** parse_args(char * line) {
  char **final= calloc(10, sizeof(char*));
  int index = 0;
  while (line) {
    char *p = strsep(&line, " ");
    *(final+index) = p;
    index++;
  }
  // int i;
  // for (i = 0; i < index; i++) {
  //   printf("%s\n", *(final+i));
  // }
  return final;
}
