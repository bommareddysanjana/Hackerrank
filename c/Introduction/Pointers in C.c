#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b, c, d;
    //int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    //update(pa, pb);
    //printf("%d\n%d", a, b);
    c=a+b;
    d=a-b;
    if (d<0){
        d=d*-1;
    }
    printf("%d\n%d", c, d);
    
    
    return 0;
}
