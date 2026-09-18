int score(int x,int y,int z)
{
    double avg=(x+y+z)/3;
    double b=(x-avg)*(x-avg)+(y-avg)*(y-avg)+(z-avg)*(z-avg)/3;
    double score=3*avg-b/3;
    return score;
    
}
#include <stdio.h>
int main()
{
  int x1,x2,x3,y1,y2,y3,z1,z2,z3;
printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);

    int score1=score(x1,x2,x3);
    int score2=score(y1,y2,y3);
    int score3=score(z1,z2,z3);
     if (score1 >= score2 && score2 >= score3) {
      printf("小明 > 小强 > 小林");
  } else if (score1 >= score3 && score3 >= score2) {
      printf("小明 > 小林 > 小强");
  } else if (score2 >= score1 && score1 >= score3) {
      printf("小强 > 小明 > 小林");
  } else if (score2 >= score3 && score3 >= score1) {
      printf("小强 > 小林 > 小明");
  } else if (score3 >= score1 && score1 >= score2) {
      printf("小林 > 小明 > 小强");
  } else {  score3 >= score2 && score2 >= score1;
      printf("小林 > 小强 > 小明");
  }

  return 0;
}