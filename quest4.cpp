#include<iostream>
#include<cstring>
using namespace std;
void convertToUpperCase(string &k){
    for(int i=0;k[i];i++){
        if(k[i]>='a' && k[i]<='z'){
            k[i] -= 32;
        }
    }
}
int main(){
    string real;
    cout<<"Enter the string:";
    getline(cin,real);
    cout<<"The real string is:"<<real<<"\n"; 
    convertToUpperCase(real);
    cout<<"The string in uppercase is:"<<real; 
    return 0;
}