#include <bits/stdc++.h>
using namespace std;
int board[101][101][101];
int dist[101][101][101];
int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

int main(){ //���� �ذ� x �����Է�2�� ����ȵ�  
	int M,N,H;
	int day = 0;
	cin >> M >> N >> H;
	queue<tuple<int,int,int> > Q;
	for(int k=0; k<H; k++){
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				cin >> board[i][j][k];
				if(board[i][j][k] == 1){
					Q.push(make_tuple(i,j,k));
				}
				if(board[i][j][k] == 0){
					dist[i][j][k] = -1;
				}
			}
		}	
	}
	
	while(!Q.empty()){
		int x,y,z;
		tie(z,x,y) = Q.front();
		Q.pop();
		for(int dir=0; dir<6; dir++){
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			int nz = z + dz[dir];
			if(nx<0 || nx>=M || ny<0 || ny>=N || nz<0 || nz>=H) continue;
			if(dist[nx][ny][nz] >= 0) continue;
			dist[nx][ny][nz] = dist[x][y][z] + 1;
			Q.push(make_tuple(nx,ny,nz));
		}
	}
	
	for(int k=0; k<H; k++){
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				if(dist[i][j][k] == -1){
					cout << "-1";
					return 0;
				}
				day = max(day, dist[i][j][k]);
			}
		}	
	}
	
	cout << day;
	return 0;
}

/*
1. 36���� �����ؾ��ϴ� �κ��Դϴ�.
2. 14 ~ 19���ο��� Q�� � ������ �־����� �����غ�����.
3. 30���ο��� Q�� � ������ ������ �����غ�����.
2���� 3���� �ѹ� �´��� ���غ�����
*/
