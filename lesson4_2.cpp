#include  <iostream>
#include  <cstdlib>
#include  <ctime>
using namespace std;
void genLotto(int[],int);
int main(int args, char **argv) {

    srand(time(0));
    int lotto[6];
//大樂透產生器
//1.產生6個1-49不重覆的整數亂數genLotto
    for(int m=0; m<6; m++) {
        lotto[m]=rand()%49+1;
        //驗證是否有覆
        for(int p=0; p<m; p++) {
            if(lotto[m]==lotto[p]) {
                m--;
                break;
            }
        }
    }


//2.顯示六個號碼showLotto
    for(int m=0; m<6; m++){
        cout<<lotto[m]<<"\t";

}
    cout<<endl;
    for(int m=0;m<5;m++){
        for(int p=m+1;p<6;p++){
            if(lotto[m]>lotto[p]){
                int temp=lotto[m];
                lotto[m]=lotto[p];
                lotto[p]=temp;
            }
        }
    }

    cout<<"===========================================\n"<<endl;

    for(int m=0;m<6;m++ )

    {
        cout<<lotto[m]<<"\t";

    }
    cout<<endl;
    return 0;
}
void genLotto(int lotto[],int length){

}