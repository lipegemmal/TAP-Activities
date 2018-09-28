#include <bits/stdc++.h>

using namespace std;


void busca(vector<int>v,int arg,int elemento,int &pos1,int &pos2){
	if(arg > v.size())
		return;

	busca(v,arg*2+1,elemento,pos1,pos2);
	
	if(v[arg] == elemento){
		if(pos1 == -1)
			pos1 = arg;
		else
			pos2 = arg;
	}

	busca(v,arg*2+2,elemento,pos1,pos2);


}


int main(){
	int tam,i, elemento,pos1 =-1,pos2=-1;
	vector<int> v(200);
	string s="";
	cin >> tam;

	for(i=0 ; i< tam ; i++){
		cin >> v[i];
	}

	cin >> elemento;

	busca(v,0,elemento,pos1,pos2);
	pos2++, pos1++;
/*	for(pos1=0 ; v[pos1] != elemento ; pos1++);
	for(pos2=pos1+1 ; v[pos2] != elemento ; pos2++);
*/
	
	int c1,c2;
	vector<int>caminho1, caminho2;
	int inicio1=pos1;
	while(pos1 != pos2){
		cout << pos1 << " " << pos2 << endl;
		c1=log2(pos1);
		c2=log2(pos2);
		if( c1 > c2){
			caminho1.push_back(pos1);
			pos1 = (pos1)/2;
		}
		else if(c2 > c1){
			caminho2.push_back(pos2);
			pos2 = (pos2)/2;
		}
		else{
			caminho1.push_back(pos1);
			pos1 = (pos1/2);
			caminho2.push_back(pos2);
			pos2 = (pos2/2);
		}
	}
	if( inicio1 != pos1)
		caminho1.push_back(pos1);
	for(int i=0 ; i < caminho1.size() ; i++){
		s+="U";
	}
	
	caminho2.push_back(pos2);
	for(int i=caminho2.size()-2; i >= 0 ; i--){
		if(caminho2[i] == (caminho2[i + 1] * 2) +1 ){
			s+="L";
		}
		else{
			s+="R";
		}
	}



	cout << s<<endl;



	return 0;
}