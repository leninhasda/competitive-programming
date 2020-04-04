                /* 	graph theory, MST. */

#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>

#define max 200005

using namespace std;

typedef struct edge{
	int a,b;
	int cost;

}edge;

vector<edge> edges;

int parent[max];
int rank[max];

bool cmp(const edge &x,const edge &y) {
	if(x.cost!=y.cost)
		return x.cost<y.cost;
	return x.a<y.a;
}

void initialize() {
	int i;
	for(i=0;i<max;i++){
		rank[i]=1;
		parent[i]=i;
	}
}

int find_parent(int s){
	if(parent[s]!=s)
		parent[s]=find_parent(parent[s]);
	return parent[s];
}

void union_nodes(int a,int b){
	if(rank[a]>rank[b])
		parent[b]=a;
	else{
		parent[a]=b;
		if(rank[a]==rank[b])
			rank[b]++;
	}
}

int mst(int n,int m) {
	double sum=0;
	int i,p1,p2,e=0;
	
	for(i=0;i<m;i++) {
		p1=find_parent(edges[i].a);
		p2=find_parent(edges[i].b);
		if(p1!=p2) {
			union_nodes(p1,p2);
			sum+=edges[i].cost;
			e++;
			if(e==n-1)
				break;
		}
		
	}
	return sum;
}

int main() {
	edge tme;
	int i,n,m,totalcost;
	
	while(cin>>n>>m && n && m) {
		initialize();
		totalcost=0;
		for(i=0;i<m;i++) {
			cin>>tme.a>>tme.b>>tme.cost;
			totalcost+=tme.cost;
			edges.push_back(tme);
		}
		//qsort(edges,m,sizeof(edge),cmp);
		sort(edges.begin(),edges.end(),cmp);
		
		printf("%d\n",totalcost-mst(n,m));

		edges.clear();

	}
	return 0;

}
