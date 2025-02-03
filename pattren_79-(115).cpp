//                                  E
//                                D E 
//                              C D E
//                            B C D E 
//                          A B C D E

	#include<iostream>
 using namespace std;
  int main(){
	int n=5;
	
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
        cout<<"  ";
           }
           char ch='A';
    	for(int k=0;k<i+1;k++){
    	  cout<<" ";  
		    		if( i==0  && k==0){cout<<'E';}
			else if (i==1 &&  k==0) { cout<<'D';}
			else if (i==1 && k==1)  { cout<<'E';}
			else if (i==2 && k== 0) { cout<<'C';}
			else if (i==2 && k==1)  { cout<<'D';}
			else if (i==2 && k==2)  { cout<<'E';}
		    else if (i==3 && k==0)	{ cout<<'B';}
		    else if (i==3 && k==1)	{ cout<<'C';} 
	        else if (i==3 && k==2)	{ cout<<'D';}
		    else if (i==3 && k==3)	{ cout<<'E';}
		    else if (i==4 && k==0)	{ cout<<'A';}
		    else if (i==4 && k==1)	{ cout<<'B';}
	        else if (i==4 && k==2)	{ cout<<'C';}
		    else if (i==4 && k==3)	{ cout<<'D';}
		    else if (i==4 && k==4)	{ cout<<'E';}
		}
	  	
   cout<<endl;
}

   return 0;
    }
