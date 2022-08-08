#include<iostream>
#include<cstring>
using namespace std;
void reverseString(string &k){
    for(int i=0;i<(k.size()/2);i++){
        char temp = k[i]; 
        k[i] = k[k.size()-1-i]; 
        k[k.size()-1-i] = temp;
    }
}
int main(){
    string k;
    cout<<"Enter a string:";
    getline(cin,k);
    cout<<"The original string is:"<<k<<"\n";
    reverseString(k);
    cout<<"The reverse of the string is:"<<k;
    return 0;
}