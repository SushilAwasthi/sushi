#include<iostream>
#include<conio.h>
int main(){
	int a,b,c,d;
	std::cout<<"enter four numbers";
	std::cin>>a>>b>>c>>d;
	if(a>b&a>c&a>d){
		std::cout<<"the max num is"<<a;
		}if(b>a&b>c&b>d){
			std::cout<<"the max num is"<<b;
			}if(c>a&c>b&c>d){
				std::cout<<"the max num is"<<c;
				}else{
					std::cout<<"the max num is"<<d;
				}
	getch();
}
