#include<iostream>
#include<string>
#include <algorithm>

using namespace std;
bool ispalindrome(string num){
    std::transform(num.begin(),num.end(),num.begin(), ::tolower);
    std::string str=num;
    std::string rev = str;
    std::reverse(rev.begin(), rev.end());
    return str == rev;
}
int main(){
    string num;
    cout<<"Enter a string or a number to check palindrome: ";
    cin>> num;
    if(ispalindrome(num)){
        cout<<"The given number is PAlinDrome!!"<<endl;
    }
    else{
        cout<<"No, the given number is not palindrome!!";
    }


    return 0;
}