#include <stdio.h>

#define USING_GETS

int main(int argc, char *argv[]) {
  char input[64];

#ifdef USING_GETS
  while (gets(input) != NULL) {
#else
  while (scanf("%s", input) == 1) {
#endif
    printf("Input: %s\n", input);
  }

  return 0;
}
