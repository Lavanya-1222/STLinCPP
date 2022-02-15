//this is array int stl
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
//this is array stl 
array<int,3> arr;
  //array<int,3> arr={20}->{20,0,0}
arr.fill(56);//it fill entrire with 56
arr[2]=90;
for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";//it works
cout<<endl;
for(int i=0;i<arr.size();i++)cout<<arr.at(i)<<" ";
cout<<endl;
for(auto i:arr)cout<<i<<" ";//its also works 
cout<<endl;
for(auto i=arr.begin();i!=arr.end();i++)cout<<*i<<" ";//its also works now i is pointer here
cout<<endl;
for(auto i=arr.rbegin();i!=arr.rend();i++)cout<<*i<<" ";// it will prin reverse
cout<<endl;
cout<<"size="<<arr.size();//size of array
cout<<endl;
cout<<"1st element="<<arr.front();//1st element
cout<<endl;
cout<<"last element="<<arr.back();//last element odf array

}
