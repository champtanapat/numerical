#include<iostream>
using namespace std;
int main()
{
	char getInput;
	int r,c;
	r=0; c=0;
	int choice=1;
	cout<<"============INPUT==================="<<endl;
	cout<<"input size row: ";
	cin>>r;
	cout<<"input size colum: ";
	cin>>c;
	int A[r][c];
	
	int m=0 ;
do{
	
	cout<<"row: "<<r<<endl<<"colum: "<<c<<endl;
	
	if(choice == 1)
  {
	for(int i = 0;i<r;i++)
	{
		for(int j = 0; j <c ; j++)
		{
			cout<<": ";
			cin>>A[i][j];
		}
		cout<<endl;
	}
  }
	cout<<"======MARTIX========================"<<endl;
	cout<<"===================================="<<endl;
	
	for(int i = 0; i<r;i++)
	{
		for(int j=0; j<c;j++)
		{
				cout<<"\t"<<A[i][j];
		}
		cout<<endl;
	}
	cout<<"===================================="<<endl;
	
	cout<<"===================================="<<endl;
	cout<<"Again? y/n "<<endl;
	cin>>getInput; 
	cout<<"Choice 1: new input:"<<endl;
	cout<<"Choice 2: old input:"<<endl;
	cin>>choice;
	cout<<"===================================="<<endl;
	}while(getInput =='y');
	
	
	
	
	cout<<"===============PROCESS==============="<<endl;
	cout<<"===================================="<<endl;
	for(int i = 0; i<r;i++)
	{
		m = m + A[i][i];
		cout<<"m:"<<m<<endl;
		for( int j=i+1;j<c;j++)
		{
			m = A[j][i]/ m ;
			cout<<"M: "<<m<<endl;
		
			/*cout<<"A[i][j]: "<<A[i][j]<<endl;
			cout<<"A[j][j]: "<<A[j][i]<<endl;
			*/
		}
	}
	return 0;
}
