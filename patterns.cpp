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

    void pattern2(int n){
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                cout<<" *";
            }
            cout<<endl;
        }
    }
};

int main(){
    Pattern p1;
    p1.pattern2(5);
    return 0;
}