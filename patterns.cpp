// n = 5
/*
*
* *
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;

class Pattern{
public:
    void pattern1(int n){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
};

int main(){
    Pattern p1;
    p1.pattern1(5);
    return 0;
}