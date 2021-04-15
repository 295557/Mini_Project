/** 
* @file calculator.h
* Calculator application with 8 mathematical operations
*
*/
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
void addition();

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
void subtraction();

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
void multiplication();


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
*/
void division();


/**
* modulus the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 % operand2
*/
void modulus();

/**
*  squares the operand1 and returns the result
* @param[in] operand1 
* @return Result of operand1 ^2
*/

void square();

/**
*  cubes the operand1 and returns the result
* @param[in] operand1 
* @return Result of operand1 ^3
*/
void cube();

/**
*  finds the square root of the operand1 and returns the result
* @param[in] operand1 
* @return Result of square root of operand1
*/

void squareroot();
#endif  /* #define __CALCULATOR_H__ */
