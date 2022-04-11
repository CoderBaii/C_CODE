#include <iostream>
#include <cmath> //cmath头文件包含数学常用函数
using namespace std;

int main() { //实现四舍五入

    double d;
    cin >> d; // cin主要用于从标准输入读取数据，这里的标准输入，指的是终端的键盘。


    cout<<round(d)<<endl;  //round函数将返回一个指定格式的舍入整数，该整数将被舍入到最接近的整数
    //cout<<endl输出换行

    return 0;
}
