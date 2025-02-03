//                      1
//                    3 5
//                 7 9 11
//            13 15 17 19
//         21 23 25 27 29

     #include<iostream>
  using namespace std;
  int main(){
	int n=5;int num=1;
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
