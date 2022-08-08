#include<iostream>
#include<cstring>
using namespace std;
bool compareTwoStrings(string a,string b){
    if(a.size()!=b.size())
        return false; 
    else{
        for(int i=0,j=0;i<a.size() && j<b.size();i++,j++){
            if(a[i]==b[i])
                continue;
            else
                return false;
        }
        return true;
    }
}
int main(){
    string a,b; 
    cout<<"Enter two strings: ";
    getline(cin,a);  
    getline(cin,b); 
    bool isSame = compareTwoStrings(a,b);
    if(isSame)
        cout<<"The strings are same";  
    else
        cout<<"The strings are not same";
    return 0;
}