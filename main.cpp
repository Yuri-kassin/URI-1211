#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include <string.h>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


int main(){
	int yy,n,t,j,i,a;
	string aux;
	vector<string> v;


	while(cin>>n){
        string x[n];
		cin.ignore();
		t=0;

        for(i=0;i<n;i++){
			 cin>>x[i];
			 v.push_back(x[i]);
		}
			sort(v.begin(),v.end());
		for(i=0;i<n-1;i++){
			for(j=0;j<v[0].size();j++){
				if(v[i][j]==v[i+1][j]) t++;
				else break;
			}
		}
			cout<<t<<endl;
			while(!v.empty()) v.pop_back();
		}
	system("pause");
	return 0;
}
