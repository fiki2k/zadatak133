// Program treba izracunat trag i normu matrice.

#include<stdio.h>
#include<math.h>

int main()
{
        static int A[10][10];
        int i, j, m, n, trag = 0, sum1 = 0, a = 0, norma;

        printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
                 a = A[i][j] * A[i][j];
                 sum1 = sum1 + a;
                }
        }

        norma = sqrt((double)sum1);
        printf("\nNorma matrice je = %d \n", norma);
        for (i = 0; i < m; ++i) {
                trag = trag + A[i][i];
        }
        printf("\nTrag matrice je = %d \n", trag);

        return 0;
}
