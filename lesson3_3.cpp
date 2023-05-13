#include  <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int args, char **argv) {
    system("chcp 65001");
    srand(time(0));
    int price[]={30,40,80};
    int disNum,sum=0;
    cout<<"\t請問您要吃幾盤[1-99]";
    cin>>disNum;
    int *dishPrice=new int[disNum];
    for(int m=0;m<disNum;m++){
        *(dishPrice+m)=price[rand()%3];
        sum+=*(dishPrice+m);
        cout<<"\n\t	盤子."<<setw(2)<<setfill('0')<<m+1<<"-金額:"<< *(dishPrice+m)<<endl<<endl;
    }
    cout<<"\t消費金額"<< sum<<endl;
    return 0;
}