#include<iostream> 
using namespace std;

class leap{
	int year ;
	public:
		leap(){
			cout << " Enter the year : ";
			cin >> year ;
			if(year %4 ==0 && year %100!=0 || year %400 ==0){
				cout << year << " is a leap year " << endl;
			}
			else {
				cout << year << " is not a leap year " << endl; 
			}
		}
};
int main(){
	class leap l;
	return 0;
}


