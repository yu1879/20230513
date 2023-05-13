#include  <iostream>
#include  <cmath>

using namespace std;
int calSum(int max);
int calSum(int max){
    int sum=0;
    for(int m=1;m<=max;m++){
        sum+=m;
    }
    return sum;
}
//
//void sayHello(){
//    cout<<"這是一個不用傳入參數，且無回傳的函數\n";
//}
//void sayHello(int a){
//    cout<<"這是一個不用傳入參數，且無回傳的函數\n";
//    cout<<a<<endl;
//}
int main(int args, char **argv) {
    system("chcp 65001");
    cout<<"1+2+3+...+10="<<calSum(10)<<endl;
    cout<<"1+2+3+...+100="<<calSum(100)<<endl;
    cout<<"1+2+3+...+500="<<calSum(500)<<endl;


//sayHello();
//    sayHello(5);
//    /*

//  自訂函數語法

//  回傳資料型態(若無回傳用void)  函數名稱(形式參數(可有可無,若有的話:資料型態  參數名稱)){

  //函數要做的程式
//    return 值(若上方為void則此行不用寫);
  }
//      double a=3.12;
//      cout<<floor(a)<<endl;
//
//
//      return 0;
//      */
