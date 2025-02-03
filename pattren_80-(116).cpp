//                     E 
//                   D D
//                 C C C
//               B B B B 
//             A A A A A


  #include<iostream>
 using namespace std;
  int main(){
	int n=5;
	char ch='E';
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
        cout<<"  ";
           }
    	for(int j=0;j<i+1;j++){
    	cout<<ch<<" ";	
		
		}
	  	ch=ch-1;
   cout<<endl;
}

   return 0;
    }
   

