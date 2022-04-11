#include <iostream>
using namespace std;

int main() { //实现四舍五入

    double d;
    cin >> d;

    int a;
    a=d;
    if(a>=0){
    if(d+0.5>=a+1)
        cout<<a+1;
    else
        cout<<a;
    }
    else{
        if(d-0.5<=a-1)
            cout<<a-1;
        else
            cout<<a;
    }
    return 0;
}
