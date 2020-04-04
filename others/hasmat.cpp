#include<stdio.h>

int main() {
      long a,b,c;

      while (scanf("%ld %ld",&a,&b)!=EOF) 
	  {
 		if (a>b) 
			c=a-b;
        else 
			c=b-a;

        printf("%ld\n",c);
      }
	  return 0;
}