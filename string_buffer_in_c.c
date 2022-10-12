#include <stdio.h>

int main(){
    int n;
    char ch;
    printf("Enter Number then chracter : \n");
    
    scanf("%d",&n);
    
    fflush(stdin);
    scanf("%c",&ch);

    printf("%d %c",n,ch);
    return 0;
}
