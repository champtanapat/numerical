#include<iostream>
#include<cmath>
using namespace std;
void print(float A[3][3] );
void upper(float A[3][3]);
void det(float A[3][3]);

int main()
{

	float A[3][3] = { 1,2,3,
					2,-3,1,
					3,1,2};
/*	
	float A[3][3] = {5,10,9,
					10,26,26,
					15,54,66}; // det 210 */
/*					 	
	float A[3][3] = {25,5,1,
					64,8,1,
					144,12,1};	//det -84 */
/*					
	float A[3][3] = {1,4,3,
					2,1,3,
					4,3,2};	//det 31 */												
    int B[3][3];
	print(A);
    upper(A);
    det(A);
    print(A);
	return 0;
}
void upper(float A[3][3])
{
	float m = 0.0 ;
	float temp=0;
	bool flag = false; 
	for(int i = 0; i < 3 ; i++)
	{
		for(int j = i+1 ; j < 3 ; j++)
		{
			if(abs(A[i][i]) < abs(A[j][i]))
			{
				m = A[j][i] / A[i][i];
				flag = true;
			}
			else
			{
				m = A[i][i] / A[j][i] ;
				flag = false;
			}
			
			for(int k = 0 ; k < 3 ; k++)
			{
				
				if(flag)
				{
					temp = A[i][k] * m ;
					A[j][k] = A[j][k]- temp;
				}
				else
				{
					temp =   A[j][k] * m ;
					A[j][k] = A[i][k]- temp;
				}
			}
			print(A);
		}
	}
}

void det(float A[3][3])
{
	float ans = 1 ; 
	for(int i = 0 ; i < 3 ; i++)
	{
		ans = ans * A[i][i];
	}
	cout<<"Det = "<<ans<<endl;	
}

void print(float A[3][3])
{
