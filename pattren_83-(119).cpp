//1 2 3 4 5
//  1 2 3 4
//    1 2 3
//      1 2
//        1

 #include<iostream>
  using namespace std;
  int main(){
  	int n=5;
  	
  	for( int i=0;i<n;i++){
  		for(int j=0;j<i;j++){
  		    cout<<"  ";
		  }
		  	int num=1;
		for(int k=0;k<n-i;k++){
			cout<<num<<" ";
			num=num+1;
		}
		cout<<endl;
	  }
	    return 0;
  }
