#include <stdio.h>
void factorize(int n)
{
for (int i = 2; i * i <= n; ++i)
{
while (n % i == 0) {
printf("%d=%d*%d\n", n, i, n / i);
n /= i; }}
if (n > 1)
{printf("%d=%d*%d\n", n, n, 1); }}
int main(int argc, char *argv[])
{
if (argc != 2)
{printf("Usage: %s <file>\n", argv[0]);
return (1); }
FILE *file = fopen(argv[1], "r");
if (file == NULL)
{perror("Error opening file");
return (1); }
int n;
while (fscanf(file, "%d", &n) == 1)
{factorize(n); }
fclose(file);
return (0); }
