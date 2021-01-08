#include <cstdio>
#include "random.h"
#include "../params.h"
#include "./base.h"

int main(int, char* argv[]) {
	long long seed=atoll(argv[1]);
	auto gen=Random(seed);
	int n=N_MAX,m=0,q=Q_MAX;
	vvp g(n);
	vi a(n);
	vp b(q);
	for(int i=0;i<n;i++) a[i]=i;
	for(int i=0;i<q;i++) b[i]={i%n,n+i};
	Output(n,m,q,a,g,b,gen);
}