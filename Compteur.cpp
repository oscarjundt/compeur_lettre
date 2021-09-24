#include<iostream>

using namespace std;

void affiche(char* t, char t2){
	int res=0;
	for(int i=0;i<13;i++){
		if(t[i]==t2){
			res++;
		}
	}
	cout<< "il y'a "<< res<< "   "<< t2<<" dans hello world";
}


int main()
{
	char a[13] = "hello world";
	char b;
	cin >>b;
	affiche(a,b);
}
