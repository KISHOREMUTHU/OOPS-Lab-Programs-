#include<iostream> 
using namespace std;
#include<string.h>

class bank{
	long int acno;
	double bal;
	string name;
	public: 
  void get(){
	  cout << "Reading Details : " << endl;
	  cout << " Enter account number : ";
	  cin >> acno;
	  cout << " Enter name : " ;
	  cin >> name ;
	  cout << " Enter Balance : ";
	  cin >> bal;
  }
  void print(){
	  cout << endl << "Displaying Details : " << endl; 
	  cout << "Account number : ";
	  cout << acno << endl;
	  cout << " Name : " ;
	  cout << name << endl ;
	  cout << " Balance : ";
	  cout << bal << endl;
  }
 
		
	
};

int main(){
	int n;
	cout << "Enter number of Users : ";
	cin >> n;
	class bank b[n];
	for(int i =0;i<n ;i++){
		b[i].get();
	}
		for(int i =0;i<n ;i++){
		b[i].print();
	}
	return 0;
}



