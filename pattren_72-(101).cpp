//                          2
//                        4 6
//                    8 10 12
//                14 16 18 20
//             22 24 26 28 30

   #include<iostream>
  using namespace std;
  int main(){
	int n=5;int num=2;
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
      cout<<"   ";
           }
            
    	for(int j=0;j<i+1;j++){
    		cout<<num<<" ";
    			num=num+2;
		}
	     
   cout<<endl;
      
}

   return 0;
    }
