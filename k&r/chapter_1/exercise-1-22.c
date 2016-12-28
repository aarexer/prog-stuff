#include <stdio.h>

#define MAXLINE 1000

int getl(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];

    len = 0;
    while ((len = getl(line, 20)) > 0) {
        printf("%s\n", line);
    }
    
    return 0;
}

int getl(char s[], int lim) {
    int c, i, k;

    for (i = 0, k = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i, k++) {
      if (k >= lim) {
        s[i++] = '\n';
        k = 0;
      }
      s[i] = c;
    }
    
    if (i == lim - 2) {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
  }