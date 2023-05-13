#include  <iostream>

using namespace std;
string add(string,string);
int add(int,int);
int main(int args, char **argv) {
    cout<<add(1234,5678)<<endl;
    cout<<add("1234","5678")<<endl;


    return 0;
}
string add(string a,string b){
    return a+b;
}
int add(int a,int b){
    return a+b;
}
