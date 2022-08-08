#include<iostream>
#include<cstring>
using namespace std;
int findLength(string k){
    int i=0,count = 0;
    while(k[i]){
        count++;
        i++;
    }
    return count;
}
int main(){
    string k;
    cout<<"Enter a string:";
    getline(cin,k);
    cout<<"The lenght of the string is:"<<findLength(k);
    return 0;
}