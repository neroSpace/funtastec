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
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			trans[j][i] = matrix[i][j];
		}
	}
	
	for(int a = 0; a < M; a++){
		for(int b = 0; b < N; b++){
			cout << trans[a][b] << " ";
		}
		cout << endl;
	}
}
