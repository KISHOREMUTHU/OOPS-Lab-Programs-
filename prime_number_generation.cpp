#include<iostream> 
using namespace std;

class prime{
  int a,b;
  public :
  	  void checkprime(int n){
  	  	int flag =1;
			if(n ==1){
				return;
			}
			else {
				for(int i =2;i<=n/2;i++){
					if(n%i ==0){
						flag =0;
						break;
					}
				}
				if(flag == 1){
					cout << n << endl;
				}
			}
		}
		prime (){
			cout << "Enter two numbers : " ;
			cin >> a >> b;
			cout << " Prime Numbers Between " << a << " and " << b  << " are : " << endl;
			for (int i=a;i<b;i++){
				checkprime(i);
			}
			cout << endl;
		}
		
	
};

int main(){
	class prime p;
	
	return 0;
}


