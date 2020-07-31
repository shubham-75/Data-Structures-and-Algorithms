/* Vector - Container like Variable sized array
#1 Can double its original size
#2 Can grow or shrink in size
#3 Linear memory but memoey allocation done itself by vector class.
#4 header file : #include<vector>
#5 Doubling of memory is an expensive operation!
(If the memory needs to be doubled and it is not available linearly due to 
preoccupation,then a 2X memory space is found and the previous memory data is copied
to the larger one.)
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){

//Creating and initializing a vector:
	vector<int> a;
	vector<int> b(5,10); //5 int with value as 10
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,10,14};

//Iterating over a vector:

	for(int i=0;i<c.size();i++){
		cout<<c[i]<<",";
	}
	cout<<endl;

//Using iterators to iterate over a vector:

for(auto it=b.begin(); it!=b.end();it++){

//NOTE: auto is equivalent to writing: vector<int> :: iterator
	cout<<(*it)<<",";

}
cout<<endl;

//Iterating over a loop:

for(int x:d){
	cout<<x<<",";
}
cout<<endl;

//Enter data into a vector (User Input):

vector<int> v;
int n;
cout<<"Enter the number of elements you want to add";
cin>>n;
for(int i=0;i<n;i++){
	int no;
	cin>>no;
	v.push_back(no); //adds element to the back of the vector
	//increases the size of array if needed
}
for(int x:v){
	cout<<x<<",";
}
cout<<endl;
	

//Size of elements in the Vector: v.size()
//Capacity size of the underlying array: v.capacity()
//The max capacity till which the array can be expanded(available,worst case): v.max_size()
cout<<endl;
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v.max_size()<<endl;

cout<<endl;
cout<<d.size()<<endl;
cout<<d.capacity()<<endl;
cout<<d.max_size()<<endl;

//NOTE: Capacity is doubled in case of vector v: 1,2,4,8. Thus 8.
//In case of vector d : the capacity was already initialized
//max_size same for a given computer 

}



