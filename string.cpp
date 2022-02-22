
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
  string str="lavanya miranam";
  string str1(5,'L'),str2;
  string s1="using",s2="append";
  string s3="abc",s4="XYZ",s5="abc",s6;
  
  //getline(cin,str2);
  //cin>>str;
  cout<<str<<"------only string"<<endl;
  cout<<str1<<"------using fixed sizeof"<<endl;
  //cout<<str2<<endl;//using getline()
  s1.append(s2);
  cout<<s1<<endl;
  cout<<str+str1<<"---------using + operator"<<endl;
 cout<<s1[4]<<"----accesing any element "<<endl;
 str.clear();
 cout<<str<<"-----using clear() to str1"<<endl;
cout<<s3.compare(s4);
cout<<" "<<s4.compare(s3)<<endl;
cout<<s3.compare(s5)<<endl;
cout<<s6.empty()<<"--using empty()"<<endl;
s1.erase(5,2);
cout<<s1<<"--------using erase( )"<<endl;
s6="lavanya Mirana";
cout<<s6.find("Mira")<<"----usinf find(string indeex,string)"<<endl;
s1.insert(5,"ap");
cout<<s1<<"-----using insert(string index,string)"<<endl;
string s7="lavanya";
cout<<s7.size()<<" "<<s7.length()<<endl;
cout<<s7.substr(2,6)<<"-------using substring"<<endl;
    string st="9.230";
    cout<<stoi(st)<<"---------using stoi()"<<endl;
    cout<<stof(st)<<"---------using stof()"<<endl;
    int i=90;
    float f=8.78;
    cout<<to_string(i)+"lava"<<"-------using to_string()"<<endl;
    cout<<to_string(f)+"lava"<<"----------using to_string()";
  sort(s7.begin(),s7.end());
    cout<<s7<<"-----using sort(startinf iterator,ending iterator"<<endl;
    reverse(s7.begin(),s7.end());
    cout<<s7<<"-----using reverse(startinf iterator,ending iterator"<<endl;

    
}
