#include <stdio.h>

float y1(float x);
float y2(float x);
float Integral(float (*f)(float),float a,float b);

int main(void){
	float a,b;
	scanf("a=%f b=%f",&a,&b);
	printf("y1=%f\ny2=%f\n",Integral(&y1,a,b),Integral(&y2,a,b));
} 

float y1(float x){
	return 1 + x*x;
}

float y2(float x){
	return x/(1+x*x);
}

float Integral(float (*f)(float),float a,float b){
	float x, h, s;
    int n = 100000, i;
    s = 0;
    x = a;
    for(i=1; i<n; i++){
    	h = f(x);
    	s += (float)(b-a)/n*h;
    	x += (float)(b-a)/n;
	}
	return s;
}
