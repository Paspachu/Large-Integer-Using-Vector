#include <iostream>
#include <vector>
#include "vector_int.h"
using namespace std;


int main() {
    int p = 17289;
    int q = 4;

    vector<int> x = int_to_vector(p);
    vector<int> y = int_to_vector(q);

    print(pow(x, q));

    return 0;
}