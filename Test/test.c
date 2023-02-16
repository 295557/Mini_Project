#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PROJECT_NAME    "calculator"
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_modulus(void);
void test_square(void);
void test_cube(void);
void test_squareroot(void);
void test_simple_interesr(void);
void test_compound_interest(void);
void test_quadratic_equation(void);
void test_gcd(void);
int main()
{
   if (CU_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  
  CU_add_test(suite, "addition", test_addition);
  CU_add_test(suite, "subtraction", test_subtraction);
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "division", test_division);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "cube", test_cube);
  CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "simple_interest", test_simple_interest);
  CU_add_test(suite, "compound_interest", test_compound_interest);
  CU_add_test(suite, "quadratic_equation", test_quadratic_equation);
  CU_add_test(suite, "gcd", test_gcd);
  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
 }
 
 void test_addition(void)
 {
          CU_ASSERT(70 == addition(50, 20));
		  CU_ASSERT(30000 == addition(15000, 15000));
		  
		  CU_ASSERT(1550 == addition(110, 1220));
 }
 
 void test_subtraction(void)
 {
          CU_ASSERT(700 == subtraction(1500, 800));
          CU_ASSERT(-6 == subtraction(0, 6));
		  
          CU_ASSERT(35 == subtraction(78, 10));
 }
 
 void test_multiplication(void)
 {
          CU_ASSERT(70000 == multiplication(700, 100));
	  CU_ASSERT(0 == multiplication(7, 0));
		  
          CU_ASSERT(4 == multiplication(3, 2));
 }
 
 void test_division(void)
 {
          CU_ASSERT(0 == division(3, 0)); 
          CU_ASSERT(90 == division(900, 10));
		  
	  CU_ASSERT(9 == division(80, 10));
 }
 
 void test_modulus(void)
 {
          CU_ASSERT(0 == modulus(60, 10));
	  CU_ASSERT(5 == modulus(35, 6));
		  
	  CU_ASSERT(2 == modulus(43, 7));
 }
 
 void test_square(void)
 {
           CU_ASSERT(16 == square(4));
	   CU_ASSERT(9 == square(3));
		   
	   
 }
 void test_cube(void)
 {
           CU_ASSERT(64 == cube(4));
	   CU_ASSERT(27 == cube(3));
		   
	   CU_ASSERT(8 == cube(2));
 }
void test_squareroot(void)
 {
           CU_ASSERT(2 == squareroot(4));
	   CU_ASSERT(5 == squareroot(25));
		   
	   CU_ASSERT(6 == squareroot(36));
 }
void test_simple_interest(void){

  c1.p = 1000;
  c1.r = 2;
  c1.t = 5;
  CU_ASSERT_EQUAL(100,simple_interest(&c1));

  c1.p = 1100;
  c1.r = 2;
  c1.t = 5.5;
  CU_ASSERT_EQUAL(121,simple_interest(&c1));

}
void test_compound_interest(void){
  c1.p = 1000;
  c1.r = 2;
  c1.t = 2;
  CU_ASSERT_EQUAL(1040.4,compound_interest(&c1));
  
  c1.p = 10000;
  c1.r = 10.25;
  c1.t = 5;
  CU_ASSERT_EQUAL(16288.9,compound_interest(&c1));
}
void test_quadratic_equation(void)
 {
         
		  CU_ASSERT(-0.83 + 1.28i == quadratic_equation(3,5,7));
		  
		  CU_ASSERT(0.81== quadratic_equation(8,-4,-2));
 }
 void test_gcd(void)
 {
          CU_ASSERT(9 == addition(81, 153));
		  CU_ASSERT(1 == addition(181, 29));
		  
 }

