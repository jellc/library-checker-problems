#include <iostream>
#include "random.h"
#include "../params.h"

using namespace std;

int main(int, char* argv[]) {


    long long seed = atoll(argv[1]);

    int q = MAX_Q;
    vector<long long> a(q);
    for (int i = 0; i < q; i++) {
        a[i] = seed * 100 + 1 + i;
    }

    printf("%d\n", q);
    for (auto x: a) {
        printf("%lld\n", x);
    }
    return 0;
}
