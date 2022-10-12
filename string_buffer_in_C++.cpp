#include <bits/stdc++.h>
using namespace std;
int main(){
	
    int n;
    char ch;
    printf("Enter Number then chracter : \n");
    cin >> n;
    string str;
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.ignore();
	getline(cin,str);

    cout<<n<<" "<<str<<endl;
    return 0;
}
