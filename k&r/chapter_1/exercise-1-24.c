#include <stdio.h>

int main() {
    int c;
    int PIN, POUT, BIN, BOUT, BRIN, BROUT, SQ, DQ;

    PIN = POUT = BIN = BOUT = BRIN = BROUT = SQ = DQ = 0;
    
    while((c = getchar()) != EOF)  {
        switch(c) {
            case '(':   ++PIN;  break;
            case ')':   ++POUT; break;
            case '[':   ++BIN;  break;
            case ']':   ++BOUT; break;
            case '{':   ++BRIN; break;
            case '}':   ++BROUT; break;
            case '"':   ++DQ; break;
            case '\'':  ++SQ; break;
        }

        putchar(c);
    }
    
    if(PIN > POUT)   printf("\n Missing %d ')'s ",PIN-POUT);
    if(POUT > PIN)   printf("\n Missing %d '('s ",POUT-PIN);
    if(BIN > BOUT)   printf("\n Missing %d ']'s ",BIN-BOUT);
    if(BIN < BOUT)   printf("\n Missing %d '['s ",BOUT-BIN);
    if(BRIN > BROUT) printf("\n Missing %d '}'s ",BRIN-BROUT);
    if(BRIN < BROUT) printf("\n Missing %d '{'s ",BROUT-BRIN);
    if(DQ % 2 != 0)  printf("\n Missing '\"'s ");
    if(SQ % 2 != 0)  printf("\n Missing \"'\"s ");

    return 0;
}