#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(((a+b)/2) < 35 || ((a+c)/2) < 35 || ((c+b)/2) < 35 )
	    printf("Fail \n");
	    else
	    printf("Pass \n");
	}
	return 0;
}
