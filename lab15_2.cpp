#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *m,int n,int o){
	for(int i=0;i<(n*o);i++){
		*(m+i) = (rand()%101)*0.01 ;
	}
}

void findColSum(const double *m,double *n,int o,int p){
	for(int i=0; i<(o*p); ){
		*n += *(m+i) ;
		i++ ;
		*(n+1) += *(m+i) ;
		i++ ;
		*(n+2) += *(m+i) ;
		i++ ;
		*(n+3) += *(m+i) ;
		i++ ;
		*(n+4) += *(m+i) ;
		i++ ;
		*(n+5) += *(m+i) ;
		i++ ;
		*(n+6) += *(m+i) ;
		i++ ;
	}
}

void showData(double *m,int n,int o){
	int z=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<o;j++){
		cout << *(m+z) << "\t"  ;
		z++;
		}
		cout << "\n" ;
	}
}