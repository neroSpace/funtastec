#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n; 
	int b[100000];
	int bes=0, modus=0, bil, nilai;
	for(int z=0;z<=100000;z++){
		b[z]=0;
	}
	
	cin >> n;
	
	for(int x=0;x<n;x++){
		cin >> bil;
		if(bil > bes){
			bes = bil;
//			cout << bes << endl;
		}
		b[bil]++;
	}
	
	for(int y=1;y<=bes;y++){
		if(b[y] >= modus){
			modus = b[y];
			nilai = y;
		}
	}
	
	cout << nilai << endl;
}
