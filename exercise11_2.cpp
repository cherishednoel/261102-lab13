#include <iostream>

using namespace std;

long long int sum = 0;
long long int fibo1 = 1;
long long int fibo2 = 1;

long long int fibonacci(int);

int main() {
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    } else if (n == 2) {
        return 1;
    } else {
        for(int i = 3; i <= n; i++) {
            sum = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = sum;
        }
        return sum;
    }
}