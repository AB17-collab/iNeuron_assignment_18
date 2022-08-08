#include<iostream>
#include<cstring>
using namespace std;
bool checkForPalindrome(string &k){
    string temp = k;
    for(int i=0;i<(k.size()/2);i++){
        char temp = k[i]; 
        k[i] = k[k.size()-1-i]; 
        k[k.size()-1-i] = temp;
    }
    if(!k.compare(temp))   
        return true;
    else
        return false;
}
int main(){
    string k;
    cout<<"Enter a string:";
    getline(cin,k);
    cout<<"The string is:"<<k<<"\n"; 
    bool isPalindrome = checkForPalindrome(k);
    if(isPalindrome)
        cout<<"It is a palindrome";
    else
        cout<<"It is not a palindrome";
    return 0;
}