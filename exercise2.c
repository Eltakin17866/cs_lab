#include<stdio.h>

int main(){
int a, b, k, temp, sum = 0;
scanf("%d, %d", &a, &b);
scanf("%d", &k);
if (a>b){
    temp = 0;
    a = b;
    b = temp;
}
for (int i = a; i<=b; i++){
    if (i % k == 0){
        sum += i;
    }
}
 printf("The sum of elements divisible by %d in the range [%d, %d] is: %d\n", k, a, b, sum);

    return 0;
    }