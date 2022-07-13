#include <stdio.h>
#include <math.h>  //ライブラリが足りていないので追加
#include <stdlib.h>  //ライブラリが足りていないので追加

double myRoot(double x) // x の平方根を返す関数。x >= 0 ではないとき exit(1) とする。 doubleを返したいのでdoubleに変 更
{
  double y;  // doubleに変更
  if( x < 0 ){  //0は含まないのでイコールをのけた
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i;
  double *x = (double *)malloc(sizeof(double) * 100);

  i = 0;   //iの値が定められていないためここで0にする
  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
