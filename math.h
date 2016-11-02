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
#ifndef MATH_H
#define MATH_H
double fact(int x);
double powi(double x, int y);
#define PI 3.14159265
#define E 2.718281828459045
#define ALMOSTZERO 0.0000000000000000001
#define LN10 2.3025850929940456840179914546844
double acos(double x);
double asin(double x);
double atan(double x);
double atan2(double x, double y);
double cos(double x);
double cosh(double x);
double sin(double x);
double sinh(double x);
double tan(double x);
double tanh(double x);
double exp(double x);
double frexp(double x, int *exponent);
double Idexp(double x, int exponent);
double log(double x);
double log10(double x);
double modf(double x, double *integer);
double pow(double x, double y);
double sqrt(double x);
double celi(double x);
double fabs(double x);
double floor(double x);
double fmod(double x, double y);
#endif
