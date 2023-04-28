#include <iostream>
#include <stdio.h>
using namespace std;


void stop (void);

int stopper=1000;

int main(int argc, char** argv){
	int num=5;
	int lim;
	cout<<1<<endl<<2<<endl<<3;
	while(1){
		lim=(num/2)+1;
		for(int denom=2; denom<=lim; denom++){
			denom++;
			if((num%denom)==0) break;
			else if(denom>=lim) cout<<endl<<num;
		}
		//cout<<endl<<"hola"<<endl;
		//system("PAUSE");
		
		//if(num>=stopper) stop();
		num+=2;
	}
	return 0;
}


void stop(void){
	cout<<endl;
	system("PAUSE");
	stopper+=1000;
}
