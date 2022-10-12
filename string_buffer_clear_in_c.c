#include <stdio.h>

int main(){
    int n;
    char ch;
    printf("Enter Number then chracter : \n");
    scanf("%d",&n);
    while ((getchar()) != '\n');
    scanf("%c",&ch);

    printf("%d %c",n,ch);
    return 0;
}
