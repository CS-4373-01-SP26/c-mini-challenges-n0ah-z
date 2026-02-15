#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);;
    clock_t start = clock();
    while (n <= 100){

        double angle = (double) M_PI / n;

        double p = n * sin(angle);
        printf("n = %d, pi = %f\n", n, p);
        n *= 2;
    }
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Total time = %f\n", cpu_time_used);
    return 0;
}