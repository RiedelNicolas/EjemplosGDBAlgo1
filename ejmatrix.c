#include <stdlib.h>
#include <time.h>


void random_fill (int matrix[4][4]) {
    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 4; j++) {
            matrix[i][j] = rand()%5;
        }
    }
}


int main() {
    int matrix[4][4] = {0};
    srand(time(NULL));
    random_fill(matrix);
    return 0;
}