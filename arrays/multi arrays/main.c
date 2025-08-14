#include <stdio.h>

int main() {
    // char gm_board[3][3] = {1, 2, 3, 4}; // Two-dimensional Array 3x3
    // char ar_3D[3][4][5]; // multi-dimensional arrays
    // char ar_4D[3][4][5][6];

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         printf("%d ", gm_board[i][j]);
    //     }
    //     printf("\n");
    // }


    // int two_dim[5][3] = { // 5 rows 3 cols
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9},
    //     {10, 11, 12},
    //     {13, 14, 15},
    // };

    // size_t bytes = sizeof(two_dim);

    // int rows = sizeof(two_dim) / sizeof(two_dim[0]);
    // int cols = sizeof(two_dim[0]) / sizeof(two_dim[0][0]);


    // for(int i = 0; i < rows; i++) {
    //     for(int j = 0; j < cols; j++) {
    //         printf("%d ", two_dim[i][j]);
    //     }
    //     printf("\n");
    // }

    char two_dim[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    char *p_row = two_dim[1];

    printf("%d ", *p_row);

    return 0;
}