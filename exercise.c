#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]) {
    int array[N] = { 0 };
    int array_sum = 0;

    // Read array from input;
    scanf("%d", array[0]);

    ////////////////////////////
    // Add your function here //
    ////////////////////////////
  
    for (int i =0; i < N; i++) {
      array_sum += array[i];
    }

    ////////////////////////////

    printf("somma del vettore=%d\n", array_sum);

    return 0;
}
