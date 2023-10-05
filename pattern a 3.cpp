#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter ";
	cin>>n;
	int row=1;
	char count ='A';
	while(row<=n){
		int col=1;
		while(col<=n){
			char ch='A'+row-1;
			cout<<count<<" ";
			count++;
			col++;
		}
		cout<<endl;
		row++;
	}
}
