// To find factorial of a number N

#include <iostream>
using namespace std;

int factorial(int N);

int main(){

    int n ;
    cout<<"Enter a positive number: ";
    cin>>n;

    cout<< "Factorial of "<<n<<"="<<factorial(n);
    return 0;
    }

    int factorial(int n){
        if(n>1)
        return n*factorial(n-1);
        else
        return 1;
    }

