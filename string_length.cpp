#include<iostream> 
using namespace std;
#include<string.h>

class stringlen{
	 int count;
	 string s;
	public :
		stringlen(){
			cout <<"Enter the string : ";
			cin >> s;
			count =0;
			for (int i=0;s[i]!='\0' ;i++){
				count ++;
			}
			cout << "Length of the string : " << count << endl;
		}
 
		
	
};

int main(){
	class stringlen s;
	
	return 0;
}


