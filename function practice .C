// #include <stdio.h>
// #include <math.h>

// //  function Decleration

// void printmsg();

// // main function

// int main(){
//     printmsg();  // function call

//     return 0;
// }
// // Function definition

// void printmsg(){
//     for(int i=1; i<=5; i++){
//         printf("Hello Aman \n");
//     }
// }

// void add(int a, int b);

// int main(){
//     int x, y;
//     printf("Enter two number:\n");
//     scanf("%d %d", &x, &y);

//     add(x, y);   // Function call with argument

//     return 0;
// }

// void add(int a, int b){
//     int sum = a+b;
//     printf("sum =%d", sum);
// }

// find cube with argument;

// int cube(int a);

// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d", &n);

//     cube(n);

//     return 0;
// }

// int cube(int a){
//     int square = a*a*a;
//     printf("squqre =%d", square);
// }

// --find cube without argument--

// int cube();

// int cube(){                            //Function difinition
//     int x;
//     printf("Enter number:");
//     scanf("%d", &x);
//     return x*x*x;
// }

// int main(){                      // function call
//     int result = cube();
//     printf("result=%d",result);
//     return 0;
// }

//  void printHello();

//  int main(){

//     printHello();
//     return 0;
//  }

//  void printHello(){
//     printf("Hello ! \n");
//     printf("Good bye ! \n");
//  }

// void namste();
// void bonjur();

// int main(){
//     printf("Enter i for indian & f for franch : ");
//     int ch;
//     scanf("%c",&ch);

//     if(ch == 'i'){
//         namste();
//     } else{
//         bonjur();
//     }
// return 0;
// }

// void namste(){
//     printf("Namste\n");
// }

// void bonjur(){
//     printf("Bonjur");
// }

// -- find sum --

// int sum(int a, int b);

// int main(){
//     int a,b;
//     printf("Enter number :");
//     scanf("%d %d", &a, &b);

//     int s = sum(a,b);
//     printf("sum is : %d",s);

//     return 0;
// }

// int sum(int x, int y){
//     return x+y;
// }

// --find power--

// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);

//     printf("%f",pow(n,2));
// }

// --Find Area of square--

// int square(int a,int b);

// int main(){
//     int a,b;
//     printf("Enter number:");
//     scanf("%d %d",&a , &b);

//     int s = Area (a,b);
//     printf("Area of rectgular =%d", s);
//     return 0;
// }

// int square(int x, int y){
//     return x*y;
// }

// find max number in given number

//   int num(int a, int b);

//   int main(){
//     int a,b;
//     printf("Enter number:");
//     scanf("%d %d", &a, &b);

//     num(a,b);

//     return 0;
//   }

//   int num(int x, int y){
//     if(x > y){
//         printf("x is greater=%d",x);

//     }else{
//         printf("y is greater=%d",y);
//     }

//   }

// -- find factorial--

// int fact(int n);

// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);

//     fact(n);
//     return 0;
// }

// int fact(int a){
//     int f=1;
//     for(int i=1; i<=a; i++){
//        f = f*i;
//     }
//      printf("factorial is %d",f,a);
// }

// --Find factorial using recursive function--

//  int fact(int n);

//  int main(){
//   int n;

//   printf("Enter number:");
//   scanf("%d",&n);

//   printf("factorial of %d =%d",n,fact(n));

//  }
//  int fact(int n){
//   if(n==0 || n==1){
//     return 1;
//   }

//   return  n*fact(n-1);
//  }

// --recursion--

//  int power(int a, int b);

//  int main(){
//   int a,b;
//   printf("Enter number:");
//   scanf("%d %d", &a, &b);

//   printf("%d^%d =%d",a,b, power(a,b));

//   return 0;
//  }

//  int power(int a, int b){
//   if(b==0){
//     return 1;
// }
// return a * power(a, b-1);
//  }

// --find factorial with using recursion --

// int fact(int n);

// int main()
// {
//   int n;
//   printf("Enter number:");
//   scanf("%d", &n);

//   printf("factoril is =%d",fact(n));
//   return 0;
// }

// int fact(int n){
//   if(n==0 || n==1){
//     return 1;
//   }

//   return n*fact(n-1);
// }

// --Find fibonachi number--

//  int fibonacchi(int n);

//  int main(){
//   int n;
//   printf("Enter number:");
//   scanf("%d",&n);

//   printf("Fibonacchi series: \n");
//   for(int i=0; i<=n; i++){
//     printf("%d\n",fibonacchi(i));
//   }

//   return 0;
//  }

//  int fibonacchi(int n){
//   if(n==0){
//     return 0;
//   }else if(n==1){
//     return 1;
//   }
//   return fibonacchi(n-1) + fibonacchi(n-2);
//  }

// --Sum of digits of number--

// int sumOfdigits(int n);

// int main()
// {
//   int n, sum = 0, digits;
//   printf("Enter number:");
//   scanf("%d", &n);

//   while (n > 0)
//   {
//     digits = n % 10;
//     sum = sum + digits;
//     n = n / 10;
//   }
//   printf("%d", sum);

//   return 0;
// }

// --factorial using recursion--

// int fact(int n);

// int main()
// {
//     int n;
//     printf("Enter number:");
//     scanf("%d", &n);

//     printf("Factorial of %d = %d",n, fact(n));

//     return 0;
// }

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// --sum of natural number using recursion--

// int naturalN(int n);

// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);

// printf("sum of %d natural N=%d",n,naturalN(n));
//     return 0;

// }
// int naturalN(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+naturalN(n-1);
// }

// --fibonacci using recursion--

// int fibonacci(int n);

// int main()
// {
//     int n;
//     printf("Enter number:");
//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d\n", fibonacci(i));
//     }

//     return 0;
// }
// int fibonacci(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
