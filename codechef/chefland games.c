#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0,i<n;i++){
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a==b && b==c && c==d)
	    printf("IN");
	    else
	    printf("OUT");
	}
	return 0;
}

