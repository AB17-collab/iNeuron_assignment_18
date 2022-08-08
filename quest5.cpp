#include<iostream>
#include<cstring>
using namespace std;
void convertToLowerCase(string &k){
    for(int i=0;k[i];i++){
        if(k[i]>='A' && k[i]<='Z'){
            k[i] += 32;
        }
    }
}
int main(){
    string real;
    cout<<"Enter the string:";
    getline(cin,real);
    cout<<"The real string is:"<<real<<"\n"; 
    convertToLowerCase(real);
    cout<<"The string in lower case is:"<<real; 
    return 0;
}