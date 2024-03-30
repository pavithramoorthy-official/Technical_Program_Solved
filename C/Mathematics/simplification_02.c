/****************************************
Given numbers A,B find A^B.
Input Size : 1 <= A <= 5 <= B <= 50
Sample Testcase :
INPUT
3 4
OUTPUT
81
****************************************/
#include <stdio.h>

int main(void) {
    
    int a,b,i,r = 1;
    
    scanf("%d%d",&a,&b);
    for(i = 0; i < b; i++){
        r = r * a;
        
    }
    printf("%d", r);
    return 0;
}
