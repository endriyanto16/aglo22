/*HERDIYANTO SETIYAWAN / 7409030034*/
#include<stdio.h>
main()
{
int i, j, k, l, b;

printf(“Masukkan bilangan = “); scanf(“%d”, &b);

for(i = 1; i <= b; i++)
{
for(j = 0; j <= b – i; j++)
{
printf(” “);
}
for(k = 1; k <= i; k++)
for(l = 1; l <= k + i; l = l + i + 1)
{
printf(“%d”, i);
}
printf(“\n”);
}
}
