#include<stdio.h>

double my_atof_with_e(char s[]);
int power_func(int base,int exp);

double my_atof_with_e(char s[]) 
{
    int sign, esign, i;
    double val, power, exp;

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

    if(s[i] == 'e' || s[i] =='E') 
    {
        i++;
    }

    if(s[i] =='+' || s[i] == '-')
    {
        esign = s[i];
        i++;
    }

    for(exp = 0; isdigit(s[i]); i++)
    {
        exp = 10.0 * exp + (s[i] - '0');         
    }

    if( esign == '-') 
    {
        return sign * (val / power) / power_func(10, exp);
    }
    else 
    {
        return sign * (val / power) * power_func(10, exp);
    }
}

int power_func(int base,int exp)
{
    int power = 1;
    while(exp-- > 0) {
        power *= base;
    }

    return power;
}

int main() {
    printf("%f\n", my_atof_with_e("14.88"));
    printf("%f\n", my_atof_with_e("123.45e-6"));
    return 0;
}