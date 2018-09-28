#include<bits/stdc++.h>

using namespace std;

int calc(stack<string> &pilha){
	int num;
	string op;


}

int convert(string a){
	int tam = a.size();
	int multi =pow(13,tam-1);
	int result=0;

	for(int i = 0; i < tam ; i++){
		if(a[i] == 'A'){
			result += multi*10;
		}
		else{
			if(a[i] == 'B'){
				result += multi*11;
			}
			else{
				if(a[i] == 'C'){
					result += multi*12;
				}
				else{
					result += multi * (a[i] -'0');
				}
			}
		}
		multi = multi/13;
	}

	return result;
}


int main(){
	stack<string> pilha;
	string str;
	string str1;
	int a;
	int b;
	do{
		cin >> str ;
		if(str[0] == '+' || str[0] == '-'){
			pilha.push(str);
		}	
		else{ 
			if(str[0] == '*'){
				a = atoi( pilha.top().c_str() );
				pilha.pop();
				cin >> str1 ;
				b = convert(str1);
				pilha.push( to_string( a*b ) );
			}
			else if(str[0] == '/'){
				a = atoi( pilha.top().c_str() );
				pilha.pop();
				cin >> str1 ;
				b = convert(str1);
				pilha.push( to_string( a/b ) );
			}
			else if(str[0] == '#')
				break;
				
				else{
					pilha.push(  to_string( convert(str) )  );
				}
		}
	}while(str[0] != '#');

	while(pilha.size() != 1){
		a = atoi( pilha.top().c_str() );
		pilha.pop();
		str = pilha.top();
		pilha.pop();
		b = atoi(pilha.top().c_str());
		pilha.pop();

		if(str[0] == '+')
			pilha.push( to_string(a+b) );
		else
			pilha.push( to_string(a-b) );
	}

	cout << pilha.top() << "\n";
	return 0;
}