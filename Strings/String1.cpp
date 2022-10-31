#include<bits/stdc++.h>
using namespace std;

int main()
{


	string s1 = "Hello World! ";
	string s2("Hello World 2!");
	string s3(s2);
	string s4 = s3;
	char a[] = {'a','b','c','\0'};
	string s5(a);

	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;


//is empty
string s0;
if(s0.empty()){
	cout<<"This string is empty "<<endl;
}
//append
s0.append("I love c++");
cout<<s0<<endl;
s0 = s0 + " and python";
cout<<s0<<endl;


//remove

cout<<s0.length()<<endl;
s0.clear();
cout<<s0.length()<<endl;


//compare 2 strings:
string a1="Apple";
string a2="Mango";
cout<<a1.compare(a2)<<endl;
if(a2>a1){
	cout<<"Mango is lexiographically greater than apple "<<endl;
}

//accessing characters from the string:
cout<<a1[0]<<endl;

//find substrings:
string a3 = "Shubham is a very good boy ";
int index = a3.find("good");
cout<<index<<endl;

//remove word from string

string word = "good";
int len = word.length();
cout<<a3<<endl;
a3.erase(index,len+1);
cout<<a3<<endl;


//iterate over the entire string:

for(int i=0;i<a3.length();i++){
	cout<<a3[i]<<"$";
}
cout<<endl<<endl;


//Iterators:

for(auto it = a1.begin();it!=a1.end();it++){
	cout<<(*it)<<",";
}
cout<<endl;
//for each loop
for(auto c:a1){
	cout<<c<<".";
}
}
