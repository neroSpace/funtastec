#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	float A[105][105], B[105][105], C[105][105];
	float N,M,P;
	
	cin >> N >> M >> P;
	
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			cin >> A[i][j];
		
	
	for(int x = 0; x < M ; x++)
		for(int y = 0; y < P; y++)
			cin >> B[x][y];
	
	for(int a = 0; a < N; a++)
		for(int b = 0; b < P; b++){
			C[a][b]=0;
			for(int c = 0; c < M; c++)
				C[a][b] += A[a][c] * B[c][b];
			cout << C[a][b];
			if(b==P-1) cout << endl;
			else cout << " ";
		}
		return 0;
}
