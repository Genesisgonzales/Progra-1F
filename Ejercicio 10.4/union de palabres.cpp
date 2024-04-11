#include <iostream>
using namespace std;
string up(const string& p1, const string& p2){
	return p1 + p2;
}
	int main(int argc, char *argv[]) {
		string p1, p2;
		cout<<"Primera palabra"<<endl;
		cin>>p1;
		cout<<"Ingrese segunda palabra"<<endl;
		cin>>p2;
		string up=(p1 + p2);
		cout<<"Las palabras unidas "<<up<<endl;
		return 0;
	}
	
	
