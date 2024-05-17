

#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter the three numbers: \n");
    scanf("%d%d%d", &a,&b,&c);

    if (a < b) {
        if (b < c) {
            printf("Largest number is: %d\n",c);
        }

        else if (b > c) {
            printf("Largest number is: %d\n",b);
        }
    }
    else {
        printf("Largest number is: %d\n",a);
    }

    return 0;
}