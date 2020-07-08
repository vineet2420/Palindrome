#include <iostream>
#include <string>

using namespace std;

bool palindrome(string str, int iBegin, int iEnd){

	//anchor case:
	if(iBegin>=iEnd){
	
		return true;

	}

	//"abcxyz"
	//if(str[0]==str[str.size()-1])
	else{
		if(str[iBegin]==str[iEnd])
			return palindrome(str, iBegin+1, iEnd-1);
	

		else{
			return false;
		}

	}
}


int main(){

	string palindromeTest = "";

	cout<<"Enter a string: "<<endl;
	cin>> palindromeTest;

	bool palinVal = palindrome(palindromeTest, 0, palindromeTest.size()-1);
	
	cout<<boolalpha<<palinVal<<endl;
	


	return 0;

}
