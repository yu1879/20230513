#include <iostream>
#include <cstdlib>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    system("chcp 65001");
    srand(time(0));

    int lotteType,max;
    int *lotto;
//int a=100;
//lotto=&a;
//cout<<lotto<<endl;
//cout<<&a<<endl;
    cout<<"請輸入\n 1.三星彩\n 2.四星彩\n";
    cin>>lotteType;
    max=lotteType==1?3:4;
    lotto=new int(max);

    for(int m;m<max;m++){
        *(lotto+m)=rand()%10;
        for(int p=0;p<m;p++){
            if(lotto[p]==lotto[m]){
                m--;
                break;
            }
        }
    }
    for(int m =0;m<max;m++){
        cout<<*(lotto+m)<<"\t";
        cout<<endl;
    }



    return 0;
}