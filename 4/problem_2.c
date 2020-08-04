#include <stdio.h>

int main (void)
{
    char str[100];
    int n;
    int i;

    printf("入力は「n（整数）（半角スペース） S（文字列）」\n");
    scanf("%d %s", &n, str);

    for (i=0; i < n; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
