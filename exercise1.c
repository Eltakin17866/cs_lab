#include<stdio.h>

int main() {
int n, i;

long long sum = 0, product = 1;


scanf("%d", &n);

 if (n < 1) {
        printf("The entered value must be 1 or greater.\n");
       
    }

    for (i = 1; i <= n; i++) {
     int xi = 3*i - 1;
     sum += xi;
     product *= xi;
    }
printf("%d\n", sum);
printf("%d\n", product);

return 0;


}