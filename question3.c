#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    // char path[200];
    // printf("File Path: ");
    // scanf("%s",path);
    // printf("1\n");
    FILE *file = fopen("C:\\Users\\noahz\\Documents\\HPC\\c-mini-challenges-n0ah-z\\mv.txt","r");
    if (file == NULL){
        printf("Error!\n");
        return 1;
    }

    int rows;
    int cols;
    fscanf(file, "%d %d\n", &rows, &cols);
    int matrix[rows][cols];
    int num;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            fscanf(file, "%d", &num);
            matrix[i][j] = num;
            // printf("%d ", matrix[i][j]);
        }
        // printf("\n");
    }
    // printf("\n");

    int vlen;
    fscanf(file,"%d\n",&vlen);
    int *vector = malloc(sizeof(int)*vlen);

    for (int i = 0; i < vlen; i++){
        int num;
        fscanf(file,"%d", &num);
        vector[i] = num;
    }
    clock_t start = clock();
    int solution[vlen];
    int rowsum = 0;
    
    for (int i = 0;  i < rows; i++){
        for (int j = 0; j < cols; j++){
            // printf("(%d * %d) + ", matrix[i][j], vector[j]);
            rowsum += matrix[i][j] * vector[j];
            //printf("%d ", rowsum);
        }
        solution[i] = rowsum;
        rowsum = 0;
        printf("%d ", solution[i]);
    }
    printf("\n");
    clock_t end = clock();
    double cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("time = %f seconds\n", cpu_time_used);
    return 0;
}