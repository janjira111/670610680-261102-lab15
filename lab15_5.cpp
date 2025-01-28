#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *A,int *B,int *C,int *D){
	int random = rand()%4+1;
	int a = *A, b = *B, c = *C, d = *D;  
	if(random == 2){
		a = *D;
		b = *C;
		c = *B;
		d = *A; 
	}
	if(random == 3){
		a = *C;
		b = *D;
		c = *A;
		d = *B; 
	}
	else{
		a = *B;
		b = *A;
		c = *D;
		d = *C; 
	}
	*A = a ;
	*B = b ;
	*C = c ;
	*D = d ;

}
/*
void shuffle(int *A,int *B,int *C,int *D){
	int arr[4] = {*A,*B,*C,*D} ;   
	for(int i = 0 ; i < 10 ; ++i) swap(arr[rand() % 4 ],arr[rand()%4]) ;

	*A  =  arr[0] ;
	*B  =  arr[1] ;
	*C  =  arr[2] ;
	*D  =  arr[3] ;

}

*/