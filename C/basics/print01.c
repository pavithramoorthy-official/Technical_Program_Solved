/************************************************
Write a code to get 2 integers A and N. Print the integer A, N times in separate line.

Input Description:
First line contains an integer A. Second line contains an Integer N.

Output Description:
Print the integer A, N times in a separate line.

Sample Input :
2 3
Sample Output :
2
2
2

************************************************/
#include <stdio.h>
int main(void) {
    //A Simple Hello World
    int a,n,i;
    scanf("%d%d",&a,&n);
    for(i = 0;i < n;i++){
        printf("%d\n",a);
    }
    return 0;
}

