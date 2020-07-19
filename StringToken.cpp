/*
#include<iostream>
#include<cstring>
using namespace std;

//char *strtok(char *s,char *delimeters)
//returns a token on each subseq call
//on 1st call fn shud be passed with string argument for 's'
//on subsequent calls pass string argument as null
int main(){

	char s[30] = "Today is a rainy day";

	char *ptr = strtok(s," ");
	//delimiter yahan pe space hai
	cout<<ptr<<endl;


	while(ptr!=NULL)
	{

	   ptr = strtok(NULL," ");
	   cout<<ptr<<endl;
	}

	return 0;
}
*/
//Making your own tokenizer

#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *str,char delim){
	//string and single char acts as deliminter
	static char*input = NULL;
	if(str!= NULL ){
		input = str;
	}
	//base case after final token has returned
	if(input == NULL){
		return NULL;
	}
	//Start extracting token & store in array
    
    char *output = new char[strlen(input)+1];
    int i = 0;

    for(;input[i]!= '\0';i++)
    {
    	if(input[i]!=delim){
    	output[i] = input[i];}
    	else
    		{output[i] = '\0';
    	input = input + i + 1;
    	return output;}

    }
    //corner case:last token 
    output[i] = '\0';
    input = NULL;
    return output;

}
int main(){

	char s[100] = "Today, is a rainy, day";

	char *ptr = mystrtok(s,' ');
	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr = mystrtok(NULL,' ');
		cout<<ptr<<endl;
	}


	return 0;
}