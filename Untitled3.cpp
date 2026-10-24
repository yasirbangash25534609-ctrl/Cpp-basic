#include <stdio.h>

int add(int a, int b){
    return a + b;
}

void display(int result){
    printf("The sum is:%d\n", result);
}

int main() {
    int sum = add(3, 4);
    display(sum);
    return 0;
}
