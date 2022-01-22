#include <iostream>
using namespace std;

/* 
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
int main()
{
    short int i;          // 有符号短整数
    short unsigned int j; // 无符号短整数
    int maxx_int;
    j = 40000;
    maxx_int = 0xffff;
    i = j;
    cout << i << " " << j << " ";
    i = maxx_int;
    cout << i << " " << maxx_int << " ";
    //由于超出范围，只能按周期算， 得到-32768 + (x-32767)
    //  = x - 65535
    return 0;

    
}
