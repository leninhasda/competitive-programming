#include<iostream>
#include<string>
#include<map>
#include<cmath>
using namespace std;
int p[1000002],prm[1000000];
int pr[1000002]={0};
int main(){
	memset(p,0,sizeof(p));
	memset(pr,0,sizeof(pr));
	int i,j;
	pr[0]=1;
	pr[1]=1;
	for( i=2;i<sqrt(1000001);i++){
		if(pr[i]==0){
			for( j=i*i;j<1000001;j+=i)
				pr[j]=1;
		}
	}
	int k=0;
	for(i=0;i<1000001;i++){
		if(pr[i]==0){
			prm[k]=i;
			p[i]=k;
			k++;
		}
	}

	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		int min=100000,mn1,mn2,max=0,max1,max2,x=0,y=0,px,py,s;
		for(j=a;j<=b;j++)
		{
			if(pr[j]==0)
			{
				x = j;
				break;
			}
		}
		for(j=b;j>=a;j--)
		{
			if(pr[j]==0)
			{
				y = j;
				break;
			}
		}

		
		if(x==0||y==0||x==y){
			printf("There are no adjacent primes.\n");
		}
		else{
			px=p[x];
			py=p[y];
		
			for(i=px;i<py;i++){
				s=prm[i+1]-prm[i];
				if(s<min){
					min=s;
					mn1=prm[i];
					mn2=prm[i+1];
				
				}
				if(s>max){
					max=s;
					max1=prm[i];
					max2=prm[i+1];
				}
			}
			printf("%d,%d are closest, %d,%d are most distant.\n",mn1,mn2,max1,max2);
		}


	}

	return 0;
}