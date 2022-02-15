#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> v1;//{10,20}
v1.push_back(10);
v1.push_back(20);//it will add elements frim back
v1[1]=30;
for(auto i:v1)cout<<i<<" ";
cout<<"vector1"<<endl;


v1.pop_back();//it will remove elements from back
for(auto i:v1)cout<<i;
cout<<" vector 1 after pop 1 element"<<endl;


vector<int> v2(5,12);//{12,12,12,12,12}
v2.push_back(16);//it will add element at 5th index orend 
for(auto i:v2)cout<<i<<" ";
cout<<"vector2"<<endl;

vector<int> v3(v2.begin(),v2.end());//it will copy the start oth and will be last-1 th position [)
for(auto i:v3)cout<<i<<" ";
cout<<"vector 3 after copying from vector 2"<<endl;


v2.push_back(19);
for(auto i:v2)cout<<i<<" ";
cout<<"vecotor 2 after adding 19"<<endl;

vector v4(v2.begin(),v2.end()-1);//v2.begin(),v2.begin()+6
for(auto i:v4)cout<<i<<" ";
cout<<"vecotor 4 after copying till 16";
v4.clear();//it will clear entire vector
for(auto i:v4)cout<<i<<" ";//it will nor print anything no eror

}
