#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    int m= y-x;
	    if( z*2 >= m )
	    printf("YES \n");
	    else
	    printf("NO \n");
	}
	return 0;
}
