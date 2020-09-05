#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int N, M;
	int matrix[105][105], trans[105][105];
	cin >> N >> M;
	
	
	for(int x = 0; x < N; x++){
		for(int y = 0; y < M; y++){
			cin >> matrix[x][y];
		}
	}
	
	for(int i = 0; i < M; i++)
		for(int j = N-1 ; j >= 0; j--){
			cout << matrix[j][i];
			if(j==0)cout << endl;
			else cout << " ";	
		}
	return 0;
	
}
