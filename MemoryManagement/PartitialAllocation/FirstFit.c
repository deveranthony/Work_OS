#include <stdio.h>

void firstFit(int blockSize[], int m, int processSize[], int n){
    int i, j;

    int allocation[n];
    for( i = 0 ; i < n; i++ ){
        allocation[i] = -1;
    }

    for (i = 0 ; i < n ; i ++ ){
        for( j = 0 ; j < m; j ++) {
            if(blockSize[j] >= processSize[i] ){
                allocation[i] = j;
                blockSize[j] -= processSize[i];
                break;
            }
        }
    }

    printf("\nProcess No.\t Process Size\tBlock no.\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %i\t\t\t", i+1);
        printf("%i\t\t\t\t", processSize[i]);
        if (allocation[i] != -1)
            printf("%i", allocation[i] + 1);
        else
            printf("Not Allocated");
        printf("\n");
    }
}

int main(){

}