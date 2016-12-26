#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define NCHARS 256

int main() {
  int c;
  int charFreq[NCHARS];

  for (int i = 0; i < NCHARS; ++i) {
    charFreq[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ++charFreq[c];
  }

  for (int i = 0; i < NCHARS; ++i) {
    if (charFreq[i] != 0) {
      switch(i) {
        case ' ':  printf("spaces: "); break;
        case '\n': printf("\\n: "); break;
        case '\t': printf("\\t: "); break;
        default: printf("%c: ", i);
      }
      
      for (int j = 0; j < charFreq[i]; j++) {
        printf("=");
      }
      printf("\n");
    }
  }

  return 0;
}