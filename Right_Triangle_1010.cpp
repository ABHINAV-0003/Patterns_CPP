#include<iostream>
using namespace std;
int main(){
int n,start;
cin>>n;
for(int i=0;i<n;i++){
    if(i/2==0){
        start=0;
    }
    else{
        start=1;
    }
    for(int j=0;j<i;j++){
        cout<<start;
        start=1-start;
    }
    cout<<endl;
}


}