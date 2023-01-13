#include <iostream>
#include <cmath>

using namespace std;

long long int sequence1(int);
double sequence2(int);
double sequence3(int);

int main() {
    cout << sequence1(4) << endl;
    cout << sequence2(4) << endl;
    cout << sequence3(4) << endl;
    return 0;
}

long long int sequence1(int n) {
    if (n == 1)
        return 2;
    else
        return pow(2,n) + sequence1(n - 1);
}

double sequence2(int n) {
    if (n == 1)
        return 1;
    else
        return sqrt(n * sequence2(n - 1));
}

double sequence3(int n) {
    if (n == 1)
        return 2;
    else
        return 1 + (n / sequence3(n-1));
}