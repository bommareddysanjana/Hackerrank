#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,r,s=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for (i=0;i<=5;i++){
        r=n%10;
        n=n/10;
        s=s+r;
    }
    printf("%d", s);
    return 0;
}
