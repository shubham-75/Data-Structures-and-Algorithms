#include<bits/stdc++.h>
using namespace std;

int main(){


	vector<int> d{1,2,3,10,14};
	d.push_back(16);
//Push_back usually has 0(1) time complexity
	for(int x:d){
		cout<<x<<",";
	}

cout<<endl;
	
//pop_back removes the last element in 0(1) time complexity
d.pop_back();
	

//Insert some element in the middle of the vector
d.insert(d.begin()+3,100);
//IF YOU WANT TO INSERT MULTIPLE ELEMENT OF THE VECTOR:

d.insert(d.begin()+3,4,100);
//Here 100 will be inserted at pos 3, 4 times

//Deleting element from the middle in the vector
d.erase(d.begin()+3);

//Deleting multiple elements from the middle in the vector
d.erase(d.begin()+3,d.begin()+6);
for(int x:d){
		cout<<x<<",";
	}
//There is also a resize operation available but we avoid shrinking the size of a vector
//on resizing the size will increase (0's will be placed in the newly added memory space)
//but the capacity will remain same(it can increase,not be decreased.)
	d.resize(8);

//To remove all elements vector(doesnt delete memory occupied i.e capacity of vector remains same)
	cout<<endl;
	d.clear();
	cout<<"The size of the array is now "<<d.size()<<endl;

//	Check if vector is empty or not:

if(d.empty()){
	cout<<"This vector is empty "<<endl;
}

d.push_back(10);
d.push_back(11);
d.push_back(12);
//Now frontmost element in vector is :
cout<<d.front()<<endl;
//Now backmost element in vector is :
cout<<d.back()<<endl;


//Normal addition of elements in vector : 
int n;
cin>>n;
vector<int> v;
//Reserve prevents doubling until (n), n memory has been cosumed:
v.reserve(1000);
for(int i=0;i<n;i++){
	int no;
	cin>>no;
	v.push_back(no);
}
	
for(int x:v){
   cout<<x<<",";
}
	
// Using reserve function since normal method keeps doubling space thereby taking more time
cout<<endl<<endl;
return 0;
}
