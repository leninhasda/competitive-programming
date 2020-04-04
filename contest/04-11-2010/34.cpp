#include<stdio.h>
int main(){
	int f[50],i;
	f[0]=1;f[1]=2;
	for(i=2;i<50;i++)
		f[i]=f[i-2]+f[i-1];
	int t,n;
	i=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("Scenario #%d:\n%d\n",i++,f[n]);
		printf("\n");
	}
	return 0;
}