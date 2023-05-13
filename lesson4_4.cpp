#include  <iostream>
#include <cmath>
using namespace std;
string add(string,string);
int add(int,int);
int volumn(int a);
int volumn(int a,int b,int c);
int main(int args, char **argv) {
    system("chcp 65001");
//    cout<<add(1234,5678)<<endl;
//    cout<<add("1234","5678")<<endl;
    cout<<"立方體"<< volumn(3)<<endl;
    cout<<"長方體"<< volumn(5,6,10)<<endl;

    return 0;
}
string add(string a,string b){
    return a+b;
}
int add(int a,int b){
    return a+b;
}
int volumn(int a){
    return pow(a,3);
}
int volumn(int a,int b,int c)
{
    return a*b*c;

}
//#include<iostream>
//#include<cmath>
//using namespace std;
//string add(string,string);
//int add(int,int);
//int volumn(int a);
//int volumn(int a,int b,int c);
//int main() {
////函數多載overloading(函數名稱相同,功能相同,但形參的數目不同,或資料型態不同)
//    cout<<"立方體"<<volumn(3)<<endl;
//    cout<<"長方體"<<volumn(5,6,10)<<endl;
//
//    return 0;
//}
//int volumn(int a) {
//    return pow(a,3);
//}
//int volumn(int a,int b,int c) {
//    return a*b*c;
//}