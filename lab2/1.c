#include <stdio.h>
int main(Bitcount)
{
    unsigned int a=0;
    unsigned int max =~a;
    printf("max number:%u\n",max);
}
int bitcount(unsigned x)
{   int b; 
    for (b= 0; x!=0; x>>=1)
        if(x & 01)
        b++;
    return b;
    printf("the max bit :%u\n",b);
}
