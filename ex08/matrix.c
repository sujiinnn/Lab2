#include <stdio.h>
#include <stdlib.h>

int main() {

    int row, col;
    int i, j;

    printf("행과 열을 입력하세요 (row, col) : ");
    scanf("%d %d", &row, &col);

    int **first_matrix = malloc(sizeof(int *) * row);
    int **second_matrix = malloc(sizeof(int *) * row);

    for(i=0; i<row; i++){
        first_matrix[i] = malloc(sizeof(int *) * col);
        second_matrix[i] = malloc(sizeof(int *) * col);
    }

    printf("첫 번째 행렬 : \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &first_matrix[i][j]);
        }
    }

    printf("두 번째 행렬 : \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &second_matrix[i][j]);
        }
    }

    printf("두 행렬을 더한 결과 : \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", first_matrix[i][j] + second_matrix[i][j]);
        }
        printf("\n");
    }

    free(first_matrix);
    free(second_matrix);

    return 0;
}

