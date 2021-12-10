#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char list [10][20]={"luca","giovanni","alberto","davide","francesco","franco","willy","matteo","denise","rosa"};
    char name [20];
    int a=0;
    
    cin>>name;
    if (res(list,name,a)){
        cout <<a;
    }else{
        cout << "non presente";
    }
    return 0;
}

