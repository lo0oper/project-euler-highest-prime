#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){

    int long long  n,temp,k,i,j,max;
    cin>>n;
    temp=n;
    max=0;


   while(temp>1 ){


        while(temp%2==0){
            cout<<"primefactor "<<2<<" ";
            temp=temp/2;
        }
        for(i=3;i<=temp;i+=2){

		cout<<i<<endl;            
		if(temp%i==0){
                	cout<<"primefactor "<<i<<" ";
                	temp=temp/i;
                	if(i>max){
                    		max=i;
                	}
            	}   
        }
        
    }
    cout<<"\ngretest factor is "<<max;
}
