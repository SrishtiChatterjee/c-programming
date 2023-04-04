#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a==0 && a==b && b==c && c==d) //or if(a+b+c+d == 0)
	    printf("IN \n");
	    else
	    printf("OUT \n");
	}
	return 0;
}
