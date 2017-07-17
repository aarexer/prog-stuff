#include <stdio.h>



unsigned getbits(unsigned x, int n, int p, unsigned y)
{
    unsigned rmby;    
    unsigned lmbx;    
    unsigned rmbx;    

    lmbx = (x >> p+1);
    lmbx = (lmbx << p+1);

    rmbx = (x-lmbx) >> p-n+1;   
    rmbx = (x-lmbx)^(rmbx<<p-n+1);
    
    rmby = y >> n;           
    rmby = y^(rmby<<n);      
                             
    rmby = rmby << (p-n+1);  

    return (lmbx+rmbx+rmby);
}