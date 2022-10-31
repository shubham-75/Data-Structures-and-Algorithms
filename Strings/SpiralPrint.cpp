#include<bits/stdc++.h>
using namespace std;

void spiral(int a[][1000],int r , int c){

	int sr = 0;
	int sc = 0;
	int er = r-1;
	int ec = c-1;


	while(sr<=er and sc<=ec){

		//print first row:
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;

		//print end column
		for(int i =sr; i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;
		//print last row
		if(er>sr)
		{for(int i = ec;i>=sc;i--){
			cout<<a[er][i]<<" ";
		}
		er--;
	}
		//print first column:
	    if(ec>sc)
	{for(int i=er;i>=sr;i--){
			cout<<a[i][sc]<<" ";
		}
		sc++;
	}


	}

}

int main(){

	int a[1000][1000] = {0};
	int r,c;
	cout<<"Enter the number of ros and columns respectively "<<endl;
	cin>>r>>c;


	int val =1;

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j] = val;
			val++;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	spiral(a,r,c);

	return 0;
}
