#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool isPalindrome(int n){
    //initialization
    int OGnum=n;
    int Revnum=0;

    while (n>0){
        int digit=n%10;
        Revnum=Revnum*10 + digit;
        n=n/10;
    }
    return OGnum==Revnum;
}
int main(){
    int num;
    std::cout<<"Enter a NUmber: ";
    cin>>num;

    if (isPalindrome(num)){
        cout<<"The given number is Palindrome!";
    }
    else{cout<<"The Number is not PAlindrome!!"<<endl;}
}
