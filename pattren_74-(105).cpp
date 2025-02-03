//              1
//            4 9
//       16 25 36 
//   49 64 81 100
#include<iostream>
 using namespace std;
  int main(){
	int n=4;
	  int num=1;
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
        cout<<"   ";
           }
            
    	for(int j=0;j<i+1;j++){
    	cout<<num*num<<" ";	
				num=num+1;
		}
   cout<<endl;
}

   return 0;
    }
  
