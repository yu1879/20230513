#include  <iostream>

using namespace std;
void mySwap(int ,int );

int main(int args, char **argv) {
    system("chcp 65001");
    int a=66,b=33;
    cout<<"呼叫函數的a="<<a<<",b="<<b<<endl;
    mySwap(a,b);
    cout<<"呼叫函數後的a="<<a<<",b="<<b<<endl;

    return 0;
}
void  mySwap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}