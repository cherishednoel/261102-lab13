#include <iostream>

using namespace std;

long long int sum = 0;
long long int fibo1 = 0;
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
    int i = 0;
    while(i < n) {
        if(i == 0 || i == 1) {
            sum = i;
        } else {
            sum = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = sum;
        }
        i++;
    }
    return sum;
}