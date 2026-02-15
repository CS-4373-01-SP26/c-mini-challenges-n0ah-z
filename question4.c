#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
    int n;
    int temp;
    printf("n = ");
    scanf("%d", &n);

    clock_t start = clock();
    for(int i = 0; i < n; i++){
        temp = i * n;
    }
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("* = %f\n", cpu_time_used);

    start = clock();
    for(int i = 0; i < n; i++){
        temp = i / n;
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("/ = %f\n", cpu_time_used);

    start = clock();
    for(int i = 0; i < n; i++){
        temp = sqrt((double) n);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("sqrt = %f\n", cpu_time_used);

    start = clock();
    for(int i = 0; i < n; i++){
        temp = sin((double) n);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("sin = %f\n", cpu_time_used);


    return 0;
}