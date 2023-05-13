#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   system("chcp 65001");
    int level[]={0,1,2,3,4,5};
    int discount[]={0,8,15,18,20,25};
    int *l=level,*d=discount;
    cout<<"\t+-----[巨匠 3C 市集,收費機制]-----+\n\n";
    //利用迴圈印出貴賓等級及折扣
    for(int m=0;m<6;m++) {
        cout<<"\t  + 貴賓等級 "<<*(l+m)<<" - "<<setw(3)<<100-*(d+m)<<"% 本金,享折扣"<<setw(3)<<*(d+m)<<"%\n\n";
    }

    return 0;
}