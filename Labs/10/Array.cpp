#include <iostream>
#include <string>
using namespace std;
int main(){

		string buf;
		int n;
		cin>>n;
		string arr[n];
		for(int i=0;i<n;i++){
				cin>>arr[i];
		}
		for(int i=0;i<n;i++){
				if(arr[i].length()>arr[i+1].length()){
						buf = arr[i+1];
						arr[i+1]=arr[i];
						arr[i]=buf;
				}
		}				
		for(int i=0;i<n;i++){
				cout<<arr[i]<<endl;
		}		
		arr[0]="";
		for(int i=0;i<n;i++){
				if(arr[i]==""){
					continue;
				}
				cout<<arr[i]<<endl;
		}
		
		return 0;
}

