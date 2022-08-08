#include<iostream>
#include<cstring>
using namespace std;
bool checkIfAlphaNumeric(string k){
    int countOfAlphabets = 0;
    int countOfNumbers = 0;
    for(int i=0;k[i];i++){
        if((k[i]>='A' && k[i]<='Z')||(k[i]>='a' && k[i]<='z'))
            countOfAlphabets++;
        else if(k[i]>='0' && k[i]<='9')
            countOfNumbers++;
        else
            continue;
    }
    return (countOfNumbers>0 && countOfAlphabets>0)?1:0;
}
int main(){
    string real;
    cout<<"Enter the string:";
    getline(cin,real);
    bool isAlphaNumeric = checkIfAlphaNumeric(real);
    if(isAlphaNumeric)
        cout<<"Alphanumeric string"; 
    else
        cout<<"Not alphanumeric string";
    return 0;
}