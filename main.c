#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int j , k , l , k1 , m , n , *t; //инциализация переменных
    srand(time(NULL)); //разные запуска генератора псевдослучайных чисел = разная база
    do printf("(n x m), n=") , scanf("%d" , &n); while (2 > n); // цикл, ввод n
    do printf("(n x m), m=") , scanf("%d" , &m); while (1 > m); // цикл, ввод m
    do printf("k=") , scanf("%d" , &k); while (0 >= k || k > n); // цикл, ввод k
    do printf("k1=") , scanf("%d" , &k1); while (0 >= k1 || k1 > n - 1 || k == k1); // цикл, ввод k1
    int *a = ( int * ) malloc(n * m * sizeof(int));
    int **p = ( int ** ) malloc(n * sizeof(int));
    for (k-- , j = 0; j - n; p[ j++ ] = &a[ j * m ]);
    for (j = 0; j - n * m; a[ j++ ] = rand( ) & 7);
    for (j = 0; j - n; j++ , printf("\n"))
        for (printf("%d: " , j + 1) , l = 0; l - m; l++)
            printf("%d\t" , p[ j ][ l ]); // вывод перевоначальной матрицы
    if ( k1 > k ) {
        for (; k + 1 != k1 - 1; k++) t = p[ k ] , p[ k ] = p[ k + 1 ] , p[ k + 1 ] = t; // преобразования исходя из условия k1 > k
        t = p[ k ] , p[ k ] = p[ k + 2 ] , p[ k + 2 ] = t;
    }
    else for (; k != k1; k--) t = p[ k ] , p[ k ] = p[ k - 1 ] , p[ k - 1 ] = t; // преобразования исходя из условия k1 < k
    for (printf("\n") , j = 0; j - n; j++ , printf("\n"))
        for (printf("%d: " , j + 1) , l = 0; l - m; l++)
            printf("%d\t" , p[ j ][ l ]); // вывод преобразованной матрицы так,
            // чтобы строка с исходным номером k непосредственно следовала за строкой с исходным номером k1,
            // сохранив порядок следования остальных строк

    free(a); // оцищение памяти
    free(p);
    return 0;
}