#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool isPalindrome(int n){
    //initialization
    int OGnum=n;  //input in the original 
    int Revnum=0;   //reversed number set to 0

    while (n>0){
        int digit=n%10;    //select the digit from the unit place
        Revnum=Revnum*10 + digit;   //add the unit place digit is added in the revsered. (followed by ten-th place)
        n=n/10;  //removing the unit place 
    }
    return OGnum==Revnum;  //checking if true, return 1 
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
