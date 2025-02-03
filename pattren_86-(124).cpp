//     E E E E E
//       D D D D
//         C C C 
//           B B 
//             A

 #include<iostream>
  using namespace std;
  int main(){
  	int n=5;
    char ch='E';
  	for( int i=0;i<n;i++){
  		for(int j=0;j<i;j++){
  		    cout<<"  ";
		  }
		
		for(int k=0;k<n-i;k++){
			cout<<ch<<" ";
			
		}
		ch=ch-1;
		cout<<endl;
	  }
	    return 0;
  }
