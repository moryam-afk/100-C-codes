//               1
//              21
//             321
//            4321
//           54321

    #include<iostream>
  using namespace std;
  int main(){
	int n=5;
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
      cout<<" ";

	  }
	      int num=5;
		for(int k=0;k<i+1;k++){
			if( i==0  && k==0){cout<<1;}
			else if (i==1 &&  k==0) { cout<<2;}
			else if (i==1 && k==1)  { cout<<1;}
			else if (i==2 && k== 0) { cout<<3;}
			else if (i==2 && k==1)  { cout<<2;}
			else if (i==2 && k==2)  { cout<<1;}
		    else if (i==3 && k==0)	{ cout<<4;}
		    else if (i==3 && k==1)	{ cout<<3;} 
	        else if (i==3 && k==2)	{ cout<<2;}
		    else if (i==3 && k==3)	{ cout<<1;}
		    else if (i==4 && k==0)	{ cout<<5;}
		    else if (i==4 && k==1)	{ cout<<4;}
	        else if (i==4 && k==2)	{ cout<<3;}
		    else if (i==4 && k==3)	{ cout<<2;}
		    else if (i==4 && k==4)	{ cout<<1;}
		}
	
   cout<<endl;
      
}

   return 0;
    }

