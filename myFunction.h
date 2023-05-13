#include  <iostream>
#include  <cstdlib>
#include  <ctime>
using namespace std;
void genLotto(int [],int );
void showLotto(int [],int );
void sortLotto(int [],int );
void mySwap(int*,int * );

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