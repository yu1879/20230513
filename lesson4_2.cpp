#include  <iostream>
#include  <cstdlib>
#include  <ctime>
using namespace std;
void genLotto(int [],int );
void showLotto(int [],int );
void sortLotto(int [],int );
void mySwap(int*,int * );
int main(int args, char **argv) {

    srand(time(0));
    int lotto[6];
    genLotto(lotto,6);
    showLotto(lotto,6);
    sortLotto(lotto,6);
    showLotto(lotto,6);
//大樂透產生器
//1.產生6個1-49不重覆的整數亂數genLotto
    return 0;
}
//void genLotto(int lotto[],int length){
//
//}
void genLotto(int lotto[],int length){
    for(int m=0; m<length; m++) {
        lotto[m]=rand()%49+1;
        //驗證是否有覆
        for(int p=0; p<m; p++) {
            if(lotto[m]==lotto[p]) {
                m--;
                break;
            }
        }
    }

}
void showLotto(int lotto[],int length) {
    for(int m=0; m<length; m++)
        cout<<lotto[m]<<"\t";
    cout<<endl;
}
//排序--begin
void sortLotto(int lotto[],int length){
    for(int m=0; m<length-1; m++) {
        for(int p=m+1; p<length; p++) {
            if(lotto[m]>lotto[p]) {
                //交換
                mySwap((lotto+m),&lotto[p]);
            }
        }
    }

}
void mySwap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//void genLotto(int[],int);
//void showLotto(int[],int);
//void sortLotto(int[],int);
//void mySwap(int *,int *);
//int main() {
//    srand(time(0));
//    int lotto[6];
////3.將六個號碼由小到大排序sortLotto
//
//
//
//    cout<<"\n==================================================\n";
//
//    return 0;
//}
////排序--begin
//void sortLotto(int lotto[],int length){
//    for(int m=0; m<length-1; m++) {
//        for(int p=m+1; p<length; p++) {
//            if(lotto[m]>lotto[p]) {
//                //交換
//                mySwap();
//            }
//        }
//    }
//
//}
////排序--end
//
////交換--begin
//void mySwap(int *a,int *b){
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
////交換--end
//
//
////印出樂透內容--begin
//void showLotto(int lotto[],int length) {
//    for(int m=0; m<length; m++)
//        cout<<lotto[m]<<"\t";
//    cout<<endl;
//}
////印出樂透內容--end
//
////產生大樂透的函數--begin
//void genLotto(int lotto[],int length) {
//    for(int m=0; m<length; m++) {
//        lotto[m]=rand()%49+1;
//        //驗證是否有覆
//        for(int p=0; p<m; p++) {
//            if(lotto[m]==lotto[p]) {
//                m--;
//                break;
//            }
//        }
//    }
//
//}
////產生大樂透的函數--end