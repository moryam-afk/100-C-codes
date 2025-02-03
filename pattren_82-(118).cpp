//      5 5 5 5 5
//        4 4 4 4
//          3 3 3
//            2 2
//              1

 #include<iostream>
  using namespace std;
  int main(){
  	int n=5;
  	int num=5;
  	for( int i=0;i<n;i++){
  		for(int j=0;j<i;j++){
  		    cout<<"  ";
		  }
		for(int k=0;k<n-i;k++){
			cout<<num<<" ";
		}
		   num=num-1;
		cout<<endl;
	  }
	    return 0;
  }
