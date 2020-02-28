#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()

void randData(double *m,int n,int o){
	for(int i=0;i<(n*o);i++){
		*(m+i) = (rand()%101)*0.01 ;
	}
}

void findRowSum(const double *m,double *n,int o,int p){
	double sum;
	int z=0;
	for(int i=0;i<o;i++){
		for(int j=0; j<p ; j++){
			sum += *(m+z);
			z++;
		}
		*(n+i) = sum ;
		sum = 0 ;
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