#include<bits/stdc++.h>

using namespace std;

typedef struct{
	int type;
}grid;


const int X[] = {0, -1, 0, 1};
const int Y[] = {-1 , 0 , 1 , 0};

void bfs(queue< pair<int,int> > fila, grid m[][110]){
	int value;
	pair< int, int> elem;

	while(!fila.empty()){
		elem = fila.front();
		fila.pop();

		for( int i = 0 ; i< 4 ; i++){
			if(m[ elem.first+X[i] ][elem.second + Y[i]].type == -1 ){
				m[elem.first+X[i]] [elem.second + Y[i]].type = m[elem.first][elem.second].type+1;
				fila.push(make_pair(elem.first+X[i],elem.second + Y[i]));
			}

		}

	}

}


int main(int argc, char const *argv[]){
	int l,c;
	char test;
	queue<pair<int,int> > fila;
	cin >> l >> c ;
	l+=2;
	c+=2;
	grid m[110][110];

	for(int i =0 ; i < l ; i++ ){
		for ( int j =0 ; j < c ; j++ ){
			if( i == 0 || j == 0 || i == l-1 || j == c-1){
				m[i][j].type = -2;
			}
			else{
				cin >> test;
				if(test == '-'){
					m[i][j].type = -1;
				} 
				else if(test == 'P'){
					m[i][j].type = 0;
					fila.push(make_pair(i,j));
				}
				else{
					m[i][j].type = -2;
				}

			}

		}
	} 	
	
	bfs(fila, m );	

	for(int i =1 ; i < l-1 ; i++){
		for(int j =1 ; j < c-1 ; j++){
			if( i == 0 || j == 0 || i == l-1 || j == c-1){
			}
			else
				if(m[i][j].type == -2)
					cout << "*";
				else if(m[i][j].type == -1)
						cout << ".";
					 else
						cout << m[i][j].type;	
		}
		cout << "\n";
	}

	return 0;
}