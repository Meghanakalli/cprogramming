#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int m,n,o = 0,a=3,b=2,c=1,limit; 
scanf("%d",&limit);
while (o < limit)
	 { 
       for(int b=1;b<a;b++)
		 { 
            m = a * a - b * b; 
            n = 2 * a * b; 
            o = a * a + b * b; 
  
            if (o> limit) 
            break; 
            printf("%d %d %d\n", a, b, c); 
        } 
        a++; 
    }  
    return 0;
}
