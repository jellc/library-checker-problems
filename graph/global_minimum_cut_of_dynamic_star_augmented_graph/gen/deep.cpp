#include <cstdio>
#include "random.h"
#include "../params.h"
#include "./base.h"

int main(int, char* argv[]) {
	long long seed=atoll(argv[1]);
	auto gen=Random(seed);
	int n=N_MAX,m=n-1,q=Q_MAX;
	vvp g(n);
	vi a;
	vp b;
	for(int i=0;i<n-1;i++){
		g[i].push_back({i+1,i+1});
		g[i+1].push_back({i,i+1});
	}
	Random_Query(n,q,W_MAX,g,a,b,gen);
	Add_Zero(M_MAX-m,g,gen);
	m=M_MAX;
	Output(n,m,q,a,g,b,gen);
}