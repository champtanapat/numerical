#include<iostream>
using namespace std;
int  const rows = 4;
int  const cols = 4 ;
void PrintMatrix(int A[rows][cols]);

int main()
{
	char getInput;
	int choice=1;
	double m=0;
	double m2=0;
	bool flag = true; 
	int c=5;
	
	
	/*
	int A[3][3] = {5, 10, 9,
            10, 26, 26,
            15, 54, 66};*/
     /*       
	int A[3][3] = {1,2,3,
					2,-3,1,
					3,1,2};	*/
					
					
	int A[rows][cols] = {1,0,0,-2,
						2,-3,5,2,
						0,1,2,1,
						5,0,-1,3};
						
						/*
	double A[rows][cols] = {1,4,3,
						2,1,3,
						4,3,2};
						*/
								
	//int B[1][3] = {4,10,27};
	
	int AB[rows][cols+2];
	PrintMatrix(A);
	
	
	for(int i = 0; i<rows-1; i++)
	{
		for(int j=i+1; j<cols; j++)
		{	//m = A[j][i] / A[i][i];
		
			if(A[j][i] % A[i][i] == 0)
			{
				m = A[j][i] / A[i][i];
				flag = true;
			}
			else
			{
				m = A[j][i] ; 
				m2= A[i][i];
				flag = false;
			}
			
					
			for(int k = i; k<=cols ;k++)
			{
				if(flag)
				{
					A[j][k] = A[j][k] - (m *A[i][k]);
				}
				else 
				{
					A[j][k] = (m2 * A[j][k]) - (m *A[i][k]);
				}
				
			}
			cout<<endl;
		
		}
		
	PrintMatrix(A);
	cout<<"\n"<<endl;
	}

	
	// -- insert martix 
	for(int i = 0 ; i < rows-1 ; i++)
	{
		for(int j = 0 ; j < rows ; j++)
		{
			AB[j][cols+i] = A[j][i]; 
		}
	}
	
	for(int i = 0 ; i < rows ; i++)
	{
		for(int j = 0 ; j < rows ;j++)
		{
			AB[i][j] = A[i][j]; 
		}
	}
	// -- end insert 
	
	
	
	int det1=0,det2 = 0 ;
	int i = 0 ;
	
	// det 	 
		for(int j = 0 ; j < rows ;j++)
		{
			det1 = det1 + (AB[i][j] * AB[i+1][j+1] * AB[i+2][j+2]); 
		}

	// det 
		for(int j = rows+1 ; j > 1 ; j--)
		{
			det2 = det2 + (AB[i][j] * AB[i+1][j-1] * AB[i+2][j-2]);
		}
		det1 = det1 + ( -1*det2 );  
	
	
	cout<<"============MATRIX=================="<<endl;
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<rows+2; j++)
		{
				cout<<"\t"<<AB[i][j];
		}
		cout<<endl;
	}
	cout<<"===================================="<<endl;
	//PrintMatirx(AB);	
	cout<<"det = "<<det1<<endl;
	return 0;
}


void PrintMatrix(int A[rows][cols])
{
	cout<<"============MATRIX=================="<<endl;
	
	
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
				cout<<"\t"<<A[i][j];
		}
		cout<<endl;
	}
	cout<<"===================================="<<endl;
}

