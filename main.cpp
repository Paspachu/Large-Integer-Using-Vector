#include <iostream>
#include <vector>
#include "vector_int.h"
using namespace std;


int main() {
    // This is how print works!!
    vector<int> v = {2, 6, 3, 8, 2, 0, 1};
    print(v);
    cout << endl;

    // This is how int_to_vector works!!
    int p = 294781;
    vector<int> q = int_to_vector(p);
    print(q);
    cout << endl;

    // This is an example for comparison operators!!
    vector<int> a = {2, 4, 5, 3, 1};
    vector<int> b = {2, 5, 2, 1, 1};
    print(a);
    if (a > b) {
        cout << "> ";
    } else {
        cout << "< ";
    }
    print(b);
    cout << endl;

    // This is how arithmetic operators work!!
    int first = 9347;
    int second = 3173;
    vector<int> vfirst = int_to_vector(first);
    vector<int> vsecond = int_to_vector(second);
    cout << "Integer: " << (first * second) << endl;
    cout << "Vector: ";
    print(vfirst * vsecond);
    cout << endl;

    return 0;
}