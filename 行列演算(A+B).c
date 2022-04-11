#include <stdio.h>

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

    printf("縦×横の数を指定してください\n");
    scanf("%d%d", &m, &n);
    printf("数を入力\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("数を入力\n");

    for (c = 0; c < m; c++)
        for (d = 0 ; d < n; d++)
            scanf("%d", &second[c][d]);

    printf("結果:\n");

    for (c = 0; c < m; c++) {
        for (d = 0 ; d < n; d++) {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }

    return 0;
}