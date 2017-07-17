#include<stdio.h>

double my_atof(char s[]);

double my_atof(char s[]) 
{
    int sign, i;
    double val, power;

    //trim all spaces
    for (i = 0; i < isspace(s[i]); ++i)
        ;

    sign = (s[i] == '-') ? -1 : 1;
    if (!isdigit(s[i]))
    {
        i++;
    }

    for (val = 0.0; isdigit(s[i]); ++i) 
    {
        val = 10.0 * val + (s[i] - '0');
    }

    // if .
    if (!isdigit(s[i]))
    {
        i++;
    }

    for (power = 1.0; isdigit(s[i]); ++i) 
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    return sign * val / power;

}

int main() {
    printf("%f\n", my_atof("14.88"));
    return 0;
}