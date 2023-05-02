#include <R.h>
#include <Rmath.h >
void rsum(double * N1, int * n, double * mu , double* sigma , double * S){
	GetRNGstate();
	for(int i = 0; i != *n ; ++i)
	{
		for(int k = 0; k != N1[i] ; k++)
			S[i] += rlnorm(*mu , *sigma);
	}
	PutRNGstate();
}

void rsum2(double * N2, int * n, double * k , double * s, double * xi, double * S){
	GetRNGstate();
	for(int i = 0; i != *n ; ++i)
	{
		for(int j = 0; j != N2[i] ; j++)
		{
			float puiss = powf(runif(0,1), (*xi));
			S[i] += (*k) + (*s)*(1/puiss - 1)/(*xi);
		}
	}
	PutRNGstate();
}
