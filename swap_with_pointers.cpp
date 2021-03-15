#include<iostream> 
using namespace std;

class swap{
  int a,b;
  public :
  	void swappping(int *a,int *b){
		 *a = *a + *b;
		 *b = *a - *b;
		 *a = *a - *b;
		  
	  }
	  swap(){
		  cout << "Enter two numbers : " ;
		  cin >> a >> b;
		  swappping(&a,&b);
		  cout << "Swapped Numbers : "<< a << " " << b << endl; 
	  }
	
};

int main(){
	class swap s;
	
	return 0;
}


