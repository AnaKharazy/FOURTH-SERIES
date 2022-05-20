#include <stdio.h>

int main() {
    int n;
    printf("\n enter the data usage:");
    scanf("%d", &n);
    if((n<0) || ((n<=1)) ){
        printf("charge is 250");
    }
    else if((n<1) || ((n<=2)) ){
        printf("charge is 500");
    }
    else if((n<2) || ((n<=5))){
        printf("charge is 1000");
    }
    else if((n<5) || ((n<=10))){
        printf("charge is 1500");
    }
    else if(n>10){
        printf("charge is 2000");
    }
    else{
        printf("invalid input");
    }
    return 0;
}
