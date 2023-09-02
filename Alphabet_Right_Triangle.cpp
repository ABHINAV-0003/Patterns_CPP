#include<iostream>
using namespace std;
int main(){
int n;

cin>>n;
for(int i=0;i<n;i++){
    char c='A';
  for(char j='A';j<'A'+i;j++){
    cout<<j;
  }
  cout<<endl;
}


}