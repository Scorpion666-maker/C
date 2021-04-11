#include<stdio.h>
int dd(int n)
{
    int s=1,i,h=1;
	for(i=0;i<=99;i++)
	{
	    s=2*s;
		h++;
		if(s>=n)
        break;
	
	}
    return h;
    
}
int main()
{
   int n,h;    
   printf("输入结点数n:");  
   scanf("%d",&n);
   h=dd(n);
   printf("小于n的结点构造的满二叉树的深度:%d\n",h);
}