#include <stdio.h>
/*                   1
 *                 2 3 2
 *               3 4 5 4 3
 *             4 5 6 7 6 5 4
 *           5 6 7 8 9 8 7 6 5
 *         6 7 8 9 0 1 0 9 8 7 6
 *       7 8 9 0 1 2 3 2 1 0 9 8 7
 *     8 9 0 1 2 3 4 5 4 3 2 1 0 9 8
 *   9 0 1 2 3 4 5 6 7 6 5 4 3 2 1 0 9
 * 0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0 
 */
int main(void)
{
        int N1 = 10;

        for (int i = 1; i <= N1; i++)
        {
                for (int j = 0; j <= (N1 - 1) - i; j++) {
                        printf("  ");
                }

                for (int j = 0; j < i; j++) {
                        printf("%d ", (i + j) % 10);
                }
                
                for (int k = i - 2 ; k >= 0; k--) {
                        printf("%d ", (i + k) % 10);
                }
                putchar('\n');
        }

        return 0;
}