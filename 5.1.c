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
   printf("��������n:");  
   scanf("%d",&n);
   h=dd(n);
   printf("С��n�Ľ�㹹����������������:%d\n",h);
}