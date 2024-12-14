// #count even and odd numbers from an array 

// #include<stdio.h>
// void main(){
//     int i, arrayOfNumbers[10], evenCount = 0, oddCount = 0;
//     printf("Enter 10 Integers : ");
//     for(i = 0; i < 10; i++){
//         scanf("%d\n",&arrayOfNumbers[i]);
//         if(arrayOfNumbers[i] % 2 == 0){
//             evenCount++;
//         }
//         else{
//             oddCount++;
//         }
//     }
//     printf("Count of even numbers from the list : %d\n", evenCount);
//     printf("Count of odd numbers from the list : %d\n", oddCount);
// }

// #Transpose of a matrix


// #include<stdio.h>
// void main(){
//     int matrix[2][3], i, j;
//     printf("Enter elements of matrix of order 2*3 : ");
//     for(i = 0; i < 2; i++){
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d ", &matrix[i][j]);
//         }
//     }
//     for(i = 0; i < 3; i++){
//         for (j = 0; j < 2; j++)
//         {
//             printf("%d\t", matrix[j][i]);
//         }
//         printf("\n");
//     }
// }



#include<stdio.h>
void main(){
    int matrix[3][3], i, j, sumRow, sumCol;
    printf("Enter elements of matrix of order 3*3 : ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d ", &matrix[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        sumRow = sumCol = 0;
        for(j = 0; j < 3; j++){
            sumRow += matrix[i][j];
            sumCol += matrix[j][i];
        }
        printf("\n");
        printf("%d\n", sumRow);
        printf("%d", sumCol);
    }
}