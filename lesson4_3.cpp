#include  <iostream>

using namespace std;
int rec(int);
int factor(int);
int reverse(int);
int reverse(int n);
int strMethod(int );

int main(int args, char **argv) {
    system("chcp 65001");
    cout<<"請輸入任意數字:";
    int max;
    cin>>max;
    cout<<max<<endl;
    cout<<reverse(max)<<endl;
//cout<<max<<"!="<<factor(max)<<endl;
//rec(8);
    return 0;
}
int strMethod(int n){
    string source=to_string(n);
    string result="";
    int len=source.length();
    for(int m=len-1;m>=0;m--){
        result+=source.substr(m,1);
    }
    return stoi(result);


}
int reverse(int n){
    static int rev=0,rem;
    if(n==0){
        return rev;
    }
    else{
        rem=n%10;
        rev=rev*10+rem;
        return reverse(n=n/10);
    }
}

int factor(int n){
//	cout<<m<<endl;
    if(n==1){
        return 1;
    }else{
        return n*factor(n-1);
    }
}
