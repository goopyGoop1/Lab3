#include <iostream>

using namespace std;

using VEC = int*;
using MATRIX = VEC*;

int main() {



    int a = 5;  // Define an integer

    // Define pointers using aliases
    VEC v = &a;       // v points to a
    MATRIX m = &v;    // m points to v

    // Display the value of a using both v and m
    cout << "The value of a using v: " << *v << "\n";
    cout << "The value of a using m: " << **m << "\n";

    return 0;
}


