#include<deque>
#include<iostream>
#include<cstring>
using namespace std;

const int N=1e6+1;

int main() {

	char s[N];

	getline(cin, s);
	s=s+']';
	
	deque<char>qu;
	deque<char>tmp;
	bool flag=0;

	for(int i=0; s[i]; i++) {
		
		if(s[i]=='[')
			flag=1;
		else
			if(s[i]==']')
				flag=0;
		
		if(flag){
			if(s[i]!='[')
				tp.push_back(s[i]);
			else
				while(!tp.empty()){
					qu.push_front(tp.back());
					tp.pop_front();
				}
		}
		else{
			if(s[i]!=']')
				qu.push_back(s[i]);
			else
				while(!tp.empty()){
					qu.push_front(tp.back());
					tp.pop_front();
				}
		}

	}

	while(!qu.empty()){
		printf("%c",qu.front());
		qu.pop_front();
	}

}