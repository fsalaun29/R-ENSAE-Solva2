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
