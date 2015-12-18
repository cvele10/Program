//Niz, suma svih elemenata
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,i,S=0;//suma elemenata na pocetku je nula
	int a[100];
	cout<<"Unesi duzinu niza:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<"Unesi broj:";
	cin>>a[i];
	}
	for(i=1;i<=n;i++)
	
	S=S+a[i];
	cout<<"Zbir svih elemenata niza je:"<<endl;
	cout<<S;
	return 0;
}

