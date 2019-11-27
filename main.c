#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "parse.h"

int main() {
  char line[100] = "ls -l -a";
  char *p = line;
  char ** args = parse_args(p);
  execvp(args[0], args);
  return 0;
}
