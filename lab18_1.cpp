#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);
Rect a,b;
 main(){
	
	cout << "Please input Rect 1 (x y w h): ";
	cin>>a.x;
	cin>>a.y;
	cin>>a.w;
	cin>>a.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>b.x;
	cin>>b.y;
	cin>>b.w;
	cin>>b.h;
	
	cout << "Overlap area = "<<overlap(a,b);	
 
}
double overlap(Rect c,Rect d){
	double n,t;
	Rect f;
	f=c;

	if(c.x<d.x){
	c.x=d.x;
	d.x=f.x;
	c.w=d.w;
	d.w=f.w;
	}
	if(c.y>d.y){
	c.y=d.y;
	d.y=f.y;
	c.h=d.h;
	d.h=f.h;
	}
		if((d.x)+d.w>c.x){
			if((d.x)+d.w<(c.x)+c.w){
				n=((d.x)+(d.w))-c.x;	
			}
			else{
				n=c.w;
			}
		}
		else{
			n=0;
		}
		if((d.y)-d.h<c.y){
			if((d.y)-d.h>(c.y)-c.h){
				t=abs(((d.y)-(d.h))-c.y);	
			}
			else{
				t=c.h;
			}
		}
		else{
			t=0;
		}
	
	
	
	
	return abs(t*n) ;
}
