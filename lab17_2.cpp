#include<iostream>
using namespace std;

void myString(char *&p,int a){
	p = new char[a+1];    
	for(int i = 0; i < a;i++) p[i] = 'A'+i;
	p[a]=0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
