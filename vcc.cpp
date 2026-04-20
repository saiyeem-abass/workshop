#include <iostream>
using namespace std;

int main() {
    int n = 5,b=n,fact = 1;
    while(n>0){
        fact*=n;
        n--;
    }
    cout << "Factorial of "<<b<<" is "<<fact;
    return 0;
}