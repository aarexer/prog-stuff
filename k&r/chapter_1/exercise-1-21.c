#include <stdio.h>

#define TABSIZE 4

void entab(char to[], char from[]);

int main() {
    char line[] = "hello      world";
    char result[1000];
    entab(result, line);
    printf("%s\n", result);
    return(0);
}

void entab(char to[], char from[]) {
    int i, j, k, ns, nt, c, m;
    //init 
    i = j = ns = nt = 0;
    while ((c = from[i]) != '\0') {
        if (c == ' ') {
            ++ns;
        }
        else if (ns > 0) {
            nt = ns / TABSIZE;
            for (m = 0; m < nt; ++m, ++j) {
                to[j] = '\t';
            }

            for (k = 0; k < ns % TABSIZE; ++k, ++j) {
                to[j] = ' ';
            }

            to[j] = c;
            ns = 0;
            ++j;
        }
        else {
            to[j] = c;
            ++j;
        }
        ++i;
    }

    to[j] = '\0';
  }