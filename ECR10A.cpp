//codeforce-Gabriel and Caterpillar(模拟)
//有一个虫刚开始在h1的高度,有个苹果在h2的高度,已知其白天每小时爬a米,夜晚滑落b米每小时.
//并且规定白天时间是10~22.有个小孩每天2点下课.他想看到虫吃到苹果的场景,问第几天他能看到？
//解题思路:模拟,有解释可知第一天从2点开始算起.以后都是从10点. 
#include<cstdio>
#include<cstring>
int main()
{
    int h1,h2,a,b,i,j,k;
    scanf("%d%d",&h1,&h2);
    scanf("%d%d",&a,&b);
    k=0;
    i=h1;
    j=1;
    while(i<h2)
    {
      if(j==1)   //第一天 
      {
         i=i+a*8; //虫可以到达的高度 
         j=0;
         if(a<=b&&i<h2) //如果白天上升的速度小于夜晚下降的速度并且第一天没到达.那么以后也到不了。 
         {
            k=-1;break;     
         }  
      }
      else    //第一天未到,以每天白天其爬的时间都为12. 
      {
        i=i+a*12;   
      } 
      if(i>=h2)   //吃到苹果,跳出循环 
      {
        break;
      }
      else
      {
        k++;      //否则,记录天数.并减去夜晚下降的高度. 
        i-=b*12;
      }
    }
    printf("%d\n",k);
    return 0;
}