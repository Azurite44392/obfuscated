#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#define r for(i=0;i^270;i++)
int s[270],l[270],h=186,L=2,d=3,k,g,i;
char m[561],*p;
int main(){
	for(i=270,srand(time(0));~--i;s[i]=!((i-15)*(255-i)>0&&i%15%14)*4,i<3&&(s[-~h-i]=1|2*!(l[-~h-i]=i)));
    for(;;){
	    k=_kbhit()&&L-2?_getch()%97%65%7:d;d+=(k-d)*(k<5&&k^2&&(d-k+3)%6);s[h]=-~d%3; //Get key
	    if(s[h+=". /0>"[d]-47]==3&&++L<208)do i=rand()%270;while(s[i]||!(s[i]=3));//Spawn apple
	    r s[i]*=!(s[i]&&s[i]<3&&++l[i]>L);g=s[h]&&s[h]^3;s[h]=-~d%3,l[h]=1;  //Update map state
		if(!g){p=m;r p+=!(i%15)&&(*p=10),memcpy(p,(i^h?s[i]:5)*2+"  ==||()##[]",2),p+=2;}//Draw
	    printf("\x1b[2J\x1b[H\n%s%d\n\n%s",g?"End at ":"",L-3,m),Sleep(g?(exit(0),1):100);
	}   
}