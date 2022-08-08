#include<iostream>
#include<unordered_map>
using namespace std;
char findRepeatedChar(unordered_map<char,int> ump,string k){
    for(int j=0;k[j];j++){
        if(ump[k[j]]>1)
            return k[j];
    }
    return '\0';
}
int main(){
    string k;
    cout<<"Enter a string:";
    cin>>k;  
    unordered_map<char,int> ump;
    for(int i=0;k[i];i++){
        ump[k[i]]++;
    }
    char p = findRepeatedChar(ump,k);
    if(p!='\0')     
        cout<<"The repeated character is:"<<p; 
    else
        cout<<"No repeated character"; 

    return 0;
}