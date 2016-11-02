

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
 *****************************************************************************/
#include<stdio.h>
#include <stdlib.h>	
#include<string.h>
#include "math2.h"
void printmenu(){
	printf("\t\t\t1:acos\t\t returns arc of cosine in degrees\n"
		"\t\t\t2:asin\t\t returns arc of sine in degrees \n"
		"\t\t\t3:atan\t\t returns arc of tan in degrees\n"
		"\t\t\t4:atan2\t\t returns arc of tan taking two input in degrees\n"
		"\t\t\t5:cos\t\t returns value of cosine input in degrees\n"
		"\t\t\t6:cosh\t\t returns value of hyperbolic cosine\n"
		"\t\t\t7:sin\t\t returns value of sine\n"
		"\t\t\t8:sinh\t\t returns value of hyperbolic sine\n"
		"\t\t\t9:tan\t\t returns value of tan\n"
		"\t\t\t10:tanh\t\t returns value of hyperbolic tan\n"
		"\t\t\t11:exp\t\t returns value of e^x\n");
	printf("\t\t\t12:frexp\t returns value of mantissa=x/2^exponent\n"
		"\t\t\t13:Idexp\t returns x*2^exponent\n"
		"\t\t\t14:log\t\t returns value oflog(x) \n"
		"\t\t\t15:log10\t returns value of log10(x)\n"
		"\t\t\t16:modf\t\t return fraction component \n"
		"\t\t\t17:pow\t\t returns value of x^y\n"
		"\t\t\t18:sqrt\t\t returns value of squareroot of x\n"
		"\t\t\t19:celi\t\t returns value of integer greater than or equal to x\n"
		"\t\t\t20:fabs\t\t returns absolute valur of x\n"
		"\t\t\t21:floor\t returns value of integer less than or equal to x\n"
		"\t\t\t22:fmod\t\t returns remainder of x/y\n");
	printf("\n.............................................................................................................\n");

}
int main(){
	int choice;
	while(1) {
		double x,y,*w;
		int z;
		printmenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:
				scanf("%lf",&x);
				printf("\t\t\t%lf",acos(x));
				printf("\n.............................................................................................................\n");
				break;
			case 2:
				scanf("%lf",&x);
				printf("\t\t\t%lf",asin(x));
				printf("\n.............................................................................................................\n");
				break;
			case 3:
				scanf("%lf",&x);
				printf("\t\t\t%lf",atan(x));
				printf("\n.............................................................................................................\n");
				break;
			case 4:
				scanf("%lf%lf",&x,&y);
				printf("\t\t\t%lf",atan2(x,y));
				printf("\n.............................................................................................................\n");
				break;
			case 5:
				scanf("%lf",&x);
				printf("\t\t\t%lf",cos(x));
				printf("\n.............................................................................................................\n");
				break;

			case 6:
				scanf("%lf",&x);
				printf("\t\t\t%lf",cosh(x));
				printf("\n.............................................................................................................\n");
				break;
			case 7:
				scanf("%lf",&x);
				printf("\t\t\t%lf",sin(x));
				printf("\n.............................................................................................................\n");
				break;
			case 8:
				scanf("%lf",&x);
				printf("\t\t\t%lf",sinh(x));
				printf("\n.............................................................................................................\n");
				break;
			case 9:
				scanf("%lf",&x);
				printf("\t\t\t%lf",tan(x));
				printf("\n.............................................................................................................\n");
				break;
			case 10:
				scanf("%lf",&x);
				printf("\t\t\t%lf",tanh(x));
				printf("\n.............................................................................................................\n");
				break;
			case 11:
				scanf("%lf",&x);
				printf("\t\t\t%lf",exp(x));
				printf("\n.............................................................................................................\n");
				break;
			case 12:
				scanf("%lf%d",&x,&z);
				printf("\t\t\t%lf",frexp(x,&z));
				printf("\n.............................................................................................................\n");
				break;
			case 13:
				scanf("%lf%d",&x,&z);
				printf("\t\t\t%lf",Idexp(x,z));
				printf("\n.............................................................................................................\n");
				break;
			case 14:
				scanf("%lf",&x);
				printf("\t\t\t%lf",log(x));
				printf("\n.............................................................................................................\n");
				break;
			case 15:
				scanf("%lf",&x);
				printf("\t\t\t%lf",log10(x));
				printf("\n.............................................................................................................\n");
				break;
			case 16:
				scanf("%lf%lf",&x,&y);
				printf("\t\t\t%lf",modf(x,w));
				printf("\n.............................................................................................................\n");
				break;
			case 17:
				scanf("%lf%lf",&x,&y);
				printf("\t\t\t%lf",pow(x,y));
				printf("\n.............................................................................................................\n");
				break;
			case 18:
				scanf("%lf",&x);
				printf("\t\t\t%lf",sqrt(x));
				printf("\n.............................................................................................................\n");
				break;
			case 19:
				scanf("%lf",&x);
				printf("\t\t\t%lf",celi(x));
				printf("\n.............................................................................................................\n");
				break;
			case 20:
				scanf("%lf",&x);
				printf("\t\t\t%lf",fabs(x));
				printf("\n.............................................................................................................\n");
				break;
			case 21:
				scanf("%lf",&x);
				printf("\t\t\t%lf",floor(x));
				printf("\n.............................................................................................................\n");
				break;
			case 22:
				scanf("%lf%lf",&x,&y);
				printf("\t\t\t%lf",fmod(x,y));
				printf("\n.............................................................................................................\n");
				break;
			case 23:
				printf("\n.............................................................................................................\n");
				return 0;
		}
	}	
}
