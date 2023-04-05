#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--)
{
   int x,y,X,Y,z,Z;
   scanf("%d%d%d%d%d%d",&x,&X,&y,&Y,&z,&Z);
   if(x<=X && y<=Y && z>=Z)
       printf("YES\n");
   else
       printf("NO\n");
}
return 0;
}
