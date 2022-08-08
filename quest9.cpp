#include<iostream>
#include<vector>
using namespace std;
void reverseTheStringWordWise(vector<string> &v){
    for(int i=0;i<(v.size()/2);i++){
        string temp = v[i]; 
        v[i] = v[v.size()-1-i]; 
        v[v.size()-1-i] = temp;
    }
}
int main(){
    vector<string> v1;
    int n;
    cout<<"Enter the number of words you want:"; 
    cin>>n;
    cout<<"Enter strings in the vector:";
    for(int i=0;i<n;i++){
        string k;
        getline(cin>>ws,k);
        v1.push_back(k);
    }
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<"\n";
    reverseTheStringWordWise(v1);
    cout<<"After reversal:";
    for(auto j:v1){
        cout<<j<<" ";
    }
    return 0;
}