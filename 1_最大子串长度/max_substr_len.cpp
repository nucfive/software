/*************************************************************************
	> File Name: max_substr_len.cpp
	> Author: 魏如峰 
	> Mail: 18734914520@163.com
	> Created Time: Sun 16 Feb 2020 02:52:27 PM CST
    > 十进制数串中相同数字最大游程，即同一个数字连续出现的最大次数和输出这
    > 个数字
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX 1000
int a[MAX] = {0};
int main() {
    freopen("./result", "w", stdout);
    int n;
    cin >> n;
    cout << "输入数组：";
    for ( int i = 0; i < n; ++i ) {
        cin >> a[i];
    }
    
    for( int i = 0; i < n; ++i ) {
        cout << a[i] << " "; 
    }
    cout << endl;
    int max_len = 0;
    int current_value;
    int current_value_len = 1;
    int max_len_value ;

    for ( int i = 0; i < n; ++i ) {
        current_value = a[i];
        if(current_value == a[i + 1]) {
            current_value_len += 1;
        } else {
            if( current_value_len >= max_len) {
                max_len = current_value_len;
                max_len_value = current_value;
            }
            current_value_len = 1;
        }
    }

    cout << "max_len = " << max_len << endl;
    cout << "max_len_value = " << max_len_value << endl; 
    
    return 0;
}

