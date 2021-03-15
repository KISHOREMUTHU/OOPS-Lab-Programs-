#include<iostream> 
using namespace std;

class factorial{
	int n;
	public :
		factorial(){
			cout << "Enter the number : ";
			cin >> n;
			int i,fact=1;
			for(i=1;i<=n;i++){
				fact*=i;
			}
			cout << " Factorial Without Recursion : " << fact << endl;

            
		
			
		}
		int fact(int n){
			if (n ==0 || n== 1){
				return 1;
			}
			else {
				return n*fact(n-1);
			}
			return 0;
		}
		void factrecurse(){
           //   int fact(int);
              cout <<"Factorial Using Recursion : " <<  fact(n) << endl;	
			  	}
	
};

int main(){
	class factorial f;
	f.factrecurse();	
	return 0;
}



