/********************************************************
Given 3 numbers a,b,c print a*b mod c.
Sample Testcase :
INPUT
5 3 2
OUTPUT
1
*********************************************************/
#include <stdio.h>
int main(void) {    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a*b % c);
    return 0;
}
