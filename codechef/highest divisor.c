#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d",&n);
	for (int i=1;i<10;i++)
	{
	  if(n%i==0){
	  m=i;
	  }
	}
	printf("%d",m);
	return 0;
}
