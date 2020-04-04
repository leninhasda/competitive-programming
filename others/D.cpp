#include<iostream>
#include<queue>
using namespace std;

typedef struct
{
	int point, time;
}nc;

class cmp
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (nc& lhs, nc&rhs) const
  {
    return (lhs.time<rhs.time);
  }
};

typedef struct
{
	priority_queue<nc, vector<nc>, cmp > adj;
}vtx;



int main()
{
//	int i;
	vtx a;
	nc b[3],t;
	b[0].point = 1; b[0].time = 3;
	b[1].point = 2; b[1].time = 6;
	b[2].point = 3; b[2].time = 9;

	a.adj.push(b[0]);
	a.adj.push(b[2]);
	a.adj.push(b[1]);

	while(a.adj.empty()==false)
	{
		t = a.adj.top();
		a.adj.pop();
		cout<<t.time<<endl;
	}
	return 0;
}

/*/ constructing priority queues/*
#include <iostream>
#include <queue>
using namespace std;



int main ()
{
  int myints[]= {10,60,50,20};

  priority_queue<int> first;
  priority_queue<int> second (myints,myints+3);
  priority_queue< int, vector<int>, greater<int> > third (myints,myints+3);

  // using mycomparison:
  priority_queue< int, vector<int>, mycomparison > fourth;

  typedef priority_queue<int,vector<int>,mycomparison> mypq_type;
  mypq_type fifth (mycomparison());
  mypq_type sixth (mycomparison(true));

  return 0;
}*/
