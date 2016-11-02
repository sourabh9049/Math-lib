/*****************************************************************************
 * Copyright (C) SOURABH B BOHARE sourabhbohare420@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#ifndef MATH2_H
#define MATH2_H
#include "math.h"
/*needed functions*/
 double fact(int x)
{
    int i;
    double k = 1;
	if(x>=0){
		for (i=1;i<=x;i++){
			k = k * i;
		}
	    return k;
	}
	else
		printf("error in value");
}
#define PI 3.14159265
#define ANG 180
#define E 2.718281828459045
#define ALMOSTZERO 0.0000000000000000001
#define EPS 0.000000000001
#define LN10 2.3025850929940456840179914546844
/*It returns inverse cosine value in degrees 
*for ex if we input 0.5 it will give 60 degrees 
*which is the value of acos(0.5)
*It uses inverse cosine series to find the value
*series is 
*acos(x)=PI/2 - (x + 1/2/3*x^3 + 1/2*3/4/5*x^5 +........)
*it is applicable only for values between -1 to 1
*if the value is other than this it gives error*/
double acos(double x){
	double value;
	value =180/PI;
	if(x<=1&&x>=-1){
		double acos;
		acos = (90 - asin(x));
		return acos;
	}
	else
		printf("Input ERROR");
}
/*It returns inverse sine value in degrees 
*for ex if we input 0.5 it will give 30 degrees 
*which is the value of asin(0.5)
*It uses inverse sine series to find the value
*series is 
*asin(x)=x + 1/2/3*x^3 + 1/2*3/4/5*x^5 +........
*it is applicable only for values between -1 to 1
*if the value is other than this it gives error*/
double asin(double x){
	double asin = x, t = x;
	int n = 1;
	if(x<=1&&x>=-1){
		while (!(t >= -0.0000001 && t <= 0.0000001)) {
			t = ((t) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
			asin = asin + t;	
			n++;
		}
		return asin*ANG/PI;	
	}
	else
		printf("Input ERROR");
}
/*It takes one input and gives the output 
*of inverse of tan.
*For ex if we enter 1 it will give 45 degrees
* it is made using series of asin as it is easier to find it 
*it is applicable for every real value*/
double atan(double x){
	double a,b;
	a=sqrt(x*x+1);
	b=asin(x/a);
	return b;
}
/*It takes two input(x,y) and returns the value of 
* inverse tan of y/x
*i=for ex if we enter x=1 and y=1 it will do 
*c=y/x and then find its atan
*ad return 45 degrees as output
* all the values of x and y are applicable if real*/
double atan2(double x, double y){
	double c;
	c=y/x;
	return atan(c);
}
/*It takes the value of x and gives the value of its cos using the cosine series
*input is taken in degres and the output is given 
* all the real values of x are in the domain of the function
*the series is
* cos(x)=1 - (x^2)/2! + (x^4)/4!.........
*For ex we take x=60 it will give output as 0.5*/
double cos(double x){
	int r,j;
	double z;
	if(x>360){
		x=fmod(x,360);
	}
	z=(x*PI)/ANG;
	x=z;
	double cos=0;
	for(r=0;r<200;r++){		
		cos+=pow(-1,r)*pow(x,2*r)/fact(2*r);
	}
	return cos;
}
/*It takes the value of x and gives the value of its cosh using the cosine hyperbolic series
*input is taken in degres and the output is given 
* all the real values of x are in the domain of the function
*the series is
* cosh(x)=1 + (x^2)/2! + (x^4)/4!.........
*For ex we take x=60 it will give output as 1.60087*/
double cosh(double x){
	int r,j;
	double cos=0,z;
	z=(x*PI)/ANG;
	x=z;
	for(r=0;r<100;r=r+2){
		cos= cos +pow(x,r)/fact(r);
	}
	return cos;
}
/*It takes the value of x and gives the value of its sin using the sine series
*input is taken in degres and the output is given 
* all the real values of x are in the domain of the function
*the series is
* sin(x)=x - (x^3)/3! + (x^5)/5!.........
*For ex we take x=30 it will give output as 0.5*/
double sin(double x){
	int r,j;
	double z;
	z=x*PI/ANG;
	x=z;
	double sin=0;
	for(r=1,j=0;r<100;r=r+2,j++){
		sin += pow(-1,j)*pow(x,r)/fact(r);
	}
	return sin;
}
/*It takes the value of x and gives the value of its sinh using the sine hyperbolic series
*input is taken in degres and the output is given 
* all the real values of x are in the domain of the function
*the series is
* sinh(x)=x + (x^3)/3! + (x^5)/5!.........
*For ex we take x=30 it will give output as 0.547853*/
double sinh(double x){
	int r,j;
	double sin=0,z;
	z=(x*PI)/ANG;
	x=z;
	for(r=1;r<100;r=r+2){
		sin = sin + pow(x,r)/fact(r);
	}
	return sin;
}
/*It takes the value of x and gives the value of its tan
*input is taken in degres and the output is given 
* all the real values of x are in the domain of the function
*the series is based on cos and sine series.
*as tan(x)=sin(x)/cos(x)
*For ex we take x=45 it will give output as 1*/
double tan(double x){
	double z;
	if(cos(x)==0){
		printf("tan is Not defined");
	}
	else{
		z=sin(x)/cos(x);
	}
	return z;
}

/*It takes the value of x and gives the value of its tanh
*input is taken in degres and the output is given 
* all the real values of x are in the domain of the function
*the series is based on cos and sine series.
*as tanh(x)=sinh(x)/cosh(x)
*For ex we take x=60 it will give output as 0.780714*/
double tanh(double x){
	double z;
	if(cosh(x)==0){
		printf("tanh is Not defined");
	}
	else{
		z=sinh(x)/cosh(x);
	}
	return z;

}
/*It takes x as input and gives the value if E^x
*it uses power function of math.h and gives output
*For ex if we put x=2 it will givw output as 7.389056*/
double exp(double x){
	return pow(E,x);
}
/*It takes two input 
*one as x and the other exponent as the pointer to the location
*and returns x/2^exponent
*all the real numbers are in its domain
*For ex if we imput 3 and 5 it will give ourput as 0.09375*/
double frexp(double x, int *exponent){
	double z,d;
	z=pow(2,*exponent);
	d=x/z;
	return d;
}
/*It takes two input 
*one as x and the other exponent as the pointer to the location
*and returns x*2^exponent
*all the real numbers are in its domain
*For ex if we take numbers 8 and 9 the output is 4096*/
double Idexp(double x, int exponent){
	double z,d;
	z=pow(2,exponent);
	d=x*z;
	return d;
}
/*It takes the value of x as input 
*and returns the value of log(x) to the base e
*it is based on logarithmic series 
*it has domain of all the +ve numbers 
*For ex if we take input as 52 the output is 3.951244*/
double log(double x){
	double sum = 0.0;
	double xmlxpl = (x - 1) / (x + 1);
	double denom = 1.0;
	double frac = xmlxpl;
	double term = frac / denom;
	if(x>0){
		while (term > ALMOSTZERO)
		{
			sum += term;
			denom += 2.0;
			frac = frac * xmlxpl * xmlxpl;
			term = frac / denom;
		}
		return 2.0 * sum;
	}
	else
		printf("Input not in domain");
}
/*It takes the value of x as input 
*and returns the value of log(x) to the base 10
*it is based on logarithmic series 
*it has domain of all the +ve numbers
*For ex if we take input as 45 output is 1.653213 */
double log10(double x){
	return log(x)/LN10;
}
/*It takes two inputs and returns the value of fraction component
*all the real numbers are in its domain
*for xe if we take input as 9.596 the output is 0.596*/
double modf(double x, double *integer){
	double a,b;
	a=floor(x);
	b=(x-a);
	*integer=a;
	return 	b;
}
/*It takes input of two double numbers
*and returns the value of one number reised to another
*i.e x^y (it the numbers are x and y)
*for ex if we take numbers as 4 and 5 the output is 1048 
all the real numbers are in its domain */
double pow(double x, double y){
    int i = 1;
	double p = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(i <= y) {
			p = p * x;
			i++;
		}
		return p;
	}
	if(y < 0) {
		int j = 1;
		y = - y;
		while(j <= y) {
			p = p * x;
			j++;
		}
	}
	return (i / p);
}
/*it takes a number as input and gives its squareroot 
*it works on trial and error mechanism 
* For ex if we enter x as 56 the output is 7.483320
*all the +ve numbers are in its domain */
double sqrt(double x){
	double i,j;
	j=0.00001;
	for(i=0;i<x;i=i+j){
		if((i*i)>x){
			i=i-j;
			break;
		}
	}
	return i+j;
}
/*It returns the value which is greater than the input number
*For ex if we take 5.8 as input it will give output as 6*/
double celi(double x){
	int j=1,k;
	if(x==0.0)
		return 0;
	else if(x>0){
		k=(int)x+j;
		return k;
	}
	else{
		int y = (int)x;
		return ((float)y == x)?y+1:(y);
	}
}
/*It returns the absolute value of x after taking it as imput 
*for ex if we take -48 as input output will be 48*/
double fabs(double x){
	double result;
	double absolX =0;
	if(x<0){
		absolX = -x;
	}
	else{ 
		absolX = x;
	}
	return absolX;
}
/*It returns the value which is greater than or equal to the input number
*For ex if we take 5.8 as input it will give output as 5*/
double floor(double x){
	if(x==0.0)
		return 0;
	else if(x>0){
		return (int)x;
	}
	else{
		int y = (int)x;
		return ((float)y == x)?y:(y-1);
	}
}
/*It takes two input as x and y
*and returns the value of remainder of x/y */
double fmod(double x, double y){
	return (x-y*floor(x/y));
}
#endif
