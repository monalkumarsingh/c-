//#include<iostream>
//using namespace std;
//int main()
//{
//int n;
//	cout<<"Enter the number";
//	cin>>n;
//	int a=4;
//	int i;
//	for(i=1;i<=n;i++)
//	{
//		cout<<"The ap series is="<<a<<endl;
//		a=a+3;
//	}
//}

// print table particular table
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	for(i=19;i<=190;i++)
//	{
//		if(i%19==0)
//		cout<<i<<endl;
//	}
//}

// error check this program
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x=3,y;
//
//	
//	if(x==3)
//	{
//		cout<<x;
//	}
//	else;
//	cout<<y;
//}
//	

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n1,n2;
//	cout<<"Enter the any two number";
//	cin>>n1>>n2;
//	int option;
//	cout<<"ADDITION FOR PRESS 1:"<<endl;
//	cout<<"SUBTRACTION FOR PRESS 2:"<<endl;
//	cout<<"MULTIPLICATION FOR PRESS 3:"<<endl;
//	cout<<"DIVISION FOR PRESS 4:"<<endl;
//	cin>>option;
//		 if(option==1)
//		 {
//		 	cout<<"the sum of two number is ="<<n1+n2<<endl;
//		 }
//		  if(option==2)
//		 {
//		 	cout<<"the sub of two number is ="<<n1-n2<<endl;
//		 }
//		  if(option==3)
//		 {
//		 	cout<<"the mul of two number is =:"<<n1*n2<<endl;
//		 }
//          if(option==4)
//		 {
//		 	cout<<"the div of two number is =:"<<n1/n2<<endl;
//		 }
//		 
//}

// check user enter three digit or not
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	if(n>>99 && n<=999)
//	{
//		cout<<"Ente the user three digit number:"<<n;
//		
//	}
//	else
//	{
//		cout<<"Ente the user not three digit number:"<<n;	
//	}
//}

// check user enter two digit or not
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	if(n>=10 && n<=99)
//	{
//		cout<<"Ente the user two  digit number:"<<n;
//		
//	}
//	else
//	{
//		cout<<"Ente the user not two digit number:"<<n;	
//	}
//}

// ternary operator
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	(n%2==0?cout<<"even number:":cout<<"odd number:");
//}

// using terary operator if the number enter the user diviblse by 5 or not
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	(n%5==0?cout<<"Divisle by 5:":cout<<"not Divisle by 5:");

// using terary operator if the number enter the user diviblse by 5 and  7
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	(n%5==0 && n%7==0?cout<<"Divisle by 5 and 7:":cout<<"not Divisle by 5 and 7:");
//}

// fibnachi series
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n1=0,n2=1,n3;
//	int i;
//	
//	for(i=2;i<=10;i++)
//	{
//		n3=n1+n2;
//		cout<<"The fibanchi serie is="<<n3<<endl;
//		n1=n2;
//		n2=n3;
//		
//	}
//}

// sum of even number
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i;
//	int sum=0;
//	cout<<"Enter the number:";
//	cin>>n;
//	for(i=2;i<=n;i=i+2)
//	{
//	
//		
//			sum=sum+i;
//		
//	}
//	cout<<"the sum of even number is="<<sum<<endl;
//	}
// 

// check profit or loss if the user purchase the book 
//#include<iostream>
//using namespace std;
//int main()
//{
//	// sp selling price and cp cost price
//	int sp,cp;
//	cout<<"Enter the cost price:"<<endl;
//	cin>>cp;
//	cout<<"Enter the seling price:"<<endl;
//	cin>>sp;
//	if(sp>cp)
//	{
//	
//		int profit=sp-cp;
//			cout<<"profit is="<<profit;
//	}
//	if(sp<cp)
//	{
//		int loss=sp-cp;
//		cout<<"loss is="<<loss;
//	}
//	if(sp==cp)
//	{
//		cout<<"no profit and loss:";
//	}
//}

// square serie genrated;
#include<iostream>
using namespace std;
int main()
{
	

int n,i;
cout<<"Enter the number:";
cin>>n;
for(i=1;i<=n;i++)
{
	cout<<i*i;
}
}