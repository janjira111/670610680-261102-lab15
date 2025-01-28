#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
	int random = rand()%4+1;
	int A = a, B = b, C = c, D = d ;
	if(random == 2){
		a = D;
		b = C;
		c = B;
		d = A; 
	}
	if(random == 3){
		a = C;
		b = D;
		c = A;
		d = B; 
	}
	else{
		a = B;
		b = A;
		c = D;
		d = C; 
	}

}
