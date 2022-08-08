#include<iostream>
#include<cstring>
using namespace std;
int countWordsInString(string k){
    int count = 0;
    for(int j=0;k[j];j++){
        if(k[j]==32)
            count++;
    }
    return count+1;
}
int main(){
    string k;
    cout<<"Enter a string:";
    getline(cin,k); 
    cout<<"The total number of words in the string are:"<<countWordsInString(k);
    return 0;
}