#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
	if(a.length()==b.length()){
		return a<b;//jo lexiographically smaller hai
	}
	return a.length()>b.length();
}

int main(){

	int n;
	cin>>n;
	cin.get();

	string s[100];

	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}
	sort(s,s+n,compare);

	cout<<endl;

	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	cout<<endl<<endl;
	return 0;
}
