//                         1
//                       2 3
//                     4 5 6
//                  7 8 9 10
//            11 12 13 14 15

    #include<iostream>
 using namespace std;
  int main(){
	int n=5;
	  int num=1;
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
        cout<<"  ";
           }
            
    	for(int j=0;j<i+1;j++){
    	cout<<num<<" ";	
				num=num+1;
		}
   cout<<endl;
}

   return 0;
    }
  
   
