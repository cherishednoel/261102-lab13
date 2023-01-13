#include <iostream>
using namespace std;

template <typename T>
T shifting(T,int);

int main() {
    cout << shifting ('A',5.5);
    cout << shifting(6.9f,2);
    shifting(5.5,’A’);

}

template <typename T>
T shifting (T x,int y) {
    return x+y;
}
