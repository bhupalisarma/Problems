//arithmetic pointer

#include <iostream>
using namespace std;

int main(){
    int a=10;
    int*aptr;
    aptr= &a;

    cout<<*aptr<<endl;
    *aptr=69;
    cout<<a<<endl;
}