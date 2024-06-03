#include <stdio.h>
int main()
{
  int i, j, k, cnt = 0;
  int x;
  scanf("%d", &x);
  for (i = x / 5; i >= 1; i--)
  {
    for (j = (x - 5 * i) / 2; j >= 1; j--)
    {
      for (k = (x - 5 * i - 2 * j); k >= 1; k--)
      {
        if (x == 5 * i + 2 * j + k)
        {
          cnt += 1;
          printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k);
        }
      }
    }
  }
  printf("count = %d", cnt);
}