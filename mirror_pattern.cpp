//Name : Ishan Danech
//PRN : 24070123047
//Batch : ENTC A2
#include<iostream>
using namespace std;
int main(){
int n=5;
for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++){
cout<<" ";
}
for(int j=1;j<=i;j++){
cout<<"*";
}
cout<<endl;
}
return 0;
}