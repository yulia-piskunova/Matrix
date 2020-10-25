#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int j , k , l , k1 , m , n , *t;
    srand(time(NULL));
    do printf("(n x m), n=") , scanf("%d" , &n); while (2 > n);
    do printf("(n x m), m=") , scanf("%d" , &m); while (1 > m);
    do printf("k=") , scanf("%d" , &k); while (0 >= k || k > n);
    do printf("k1=") , scanf("%d" , &k1); while (0 >= k1 || k1 > n - 1 || k == k1);
    int *a = ( int * ) malloc(n * m * sizeof(int));
    int **p = ( int ** ) malloc(n * sizeof(int));
    for (k-- , j = 0; j - n; p[ j++ ] = &a[ j * m ]);
    for (j = 0; j - n * m; a[ j++ ] = rand( ) & 7);
    for (j = 0; j - n; j++ , printf("\n"))
        for (printf("%d: " , j + 1) , l = 0; l - m; l++)
            printf("%d\t" , p[ j ][ l ]);
    if ( k1 > k ) {
        for (; k + 1 != k1 - 1; k++) t = p[ k ] , p[ k ] = p[ k + 1 ] , p[ k + 1 ] = t;
        t = p[ k ] , p[ k ] = p[ k + 2 ] , p[ k + 2 ] = t;
    }
    else for (; k != k1; k--) t = p[ k ] , p[ k ] = p[ k - 1 ] , p[ k - 1 ] = t;
    for (printf("\n") , j = 0; j - n; j++ , printf("\n"))
        for (printf("%d: " , j + 1) , l = 0; l - m; l++)
            printf("%d\t" , p[ j ][ l ]);
    free(a);
    free(p);
    return 0;
}