#include  <iostream>

using namespace std;
void callByValue(int);
int main(int args, char **argv) {
    system("chcp 65001");
int a=200;
cout<<"主函數內，呼叫函數前的a="<<a<<endl;
    callByValue(a);
    cout<<"主函數內，呼叫函數後的a="<<a<<endl;

    return 0;
}
void callByValue(int a){
    a+=100;
    cout<<"函數內運算後的a="<<a<<endl;
}