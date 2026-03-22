// #include<string.h>

// int main(){
// printf("Hello world \n");

// int a =5, b =10;
// printf("%d \n", a+b);

// int a= 39, b=13;

// printf("%d", a/b);

// int a =5, b=5;
// int sum = a/b;

// printf("sum is %d \n", sum);

//       ---difference b\w two number---

// int a,b;
// printf("Enter number A:");
// scanf("%d", &a);

// printf("Enter number b:");
// scanf("%d", &b);

// int difference = a-b;

// printf("difference is = %d",difference);

//   division by two float number

//   float a,b;
// printf("Enter number A:");
// scanf("%f",&a);

// printf("Enter number B:");
// scanf("%f",&b);

//  float result = a/b;

// printf("division is = %f", result);

//      --- find Remender ---

// int a =45;
// int b = 12;

// int modulo = a%b;

// printf("modulo is = %d", modulo);

//  ---increment and decriment---

// int a = 23;
// int b = 43;

// a++;
// b--;

// printf(" a =%d, b= %d \n",a ,b);

//    --- find even number ---

// int n;
// printf("Enter a number :");
// scanf("%d",&n);

// if(n % 2 == 0){
//   printf(" %d\n number is even",n);
// }
// else{
//   printf(" %d \n number is odd",n);
// }

// int i;
// for(int i =1; i<=10; i++){
//   printf("%d \t",i);
// }

// int num;
// printf("Enter a number : ");
// scanf("%d", &num);

// printf("you entered %d", num);

// int a,b;
// printf("Enter a number :");
// scanf("%d %d",&a,&b);

// int sum = a+b;
// printf(" sum is = %d",sum);

// --- find square number ---

// int num;
// printf("Enter a number :");
// scanf("%d",&num);
// int sqr = num*num;

// printf("square is= %d", sqr);

//  --- swiping number ---

// int a,b,temp;
// printf("Enter a number :");
// scanf("%d %d", &a,&b);

// temp = a;
// a =b;
// b = temp;

// printf("After swiping: a = %d, b = %d", a ,b);

// int a,b;
// printf("Enter two number:");
// scanf("%d %d", &a, &b);

// int d =a;
// a = b;
// b =d;
// printf("After swiming: a=%d, b = %d", a,b);

//  ---swiping number without using third variable ---

// int a,b;
// printf("Enter a number:");
// scanf("%d %d", &a,&b);

// a = a+b;
// b = a-b;
// a = a-b;
// printf("After swiming: a = %d, b = %d",a,b);

// float radius;
// printf("Enter Radius:");
// scanf("%f", &radius);

// printf("Area of circule =%f", 3.14*radius*radius);

//  --- change into celsius to farenheit ---

// float c,f;
// printf("Enter Temperature in celsius:");
// scanf("%f", &c);

// printf(" Temprature in farenheit=%f", (c*9/5)+32);

//  Find Average

// float a,b,c,d;
// printf("Enter number:");
// scanf("%f %f %f %f",&a, &b, &c,&d);

// printf("average number is = %f", (a+b+c+d)/4);

// check odd or even

// int num;
// printf("Enter number:");
// scanf("%d", &num);

// if(num %2 ==0){
//   printf("Given number is Even");
// }
// else{
//   printf("Given number is odd");
// }

// --- sum of digits ---

// int num;
// printf("Enter number:");
// scanf("%d", &num);
// int sum = 0;
// int digit;

// while(num > 0){
//   digit = num % 10;
//   sum = sum + digit;
//   num = num / 10;
// }
// printf("sum of digits = %d",sum);

//  --- reverse number ---

// int n, rev = 0, digit;
// printf("Enter a number: ");
// scanf("%d", &n);
// while (n > 0) {
//     digit = n % 10;
//     rev = (rev * 10) + digit;
//     n = n / 10;
// }
// printf("Reversed number = %d", rev);

// --- Find largest number ---

// int a,b,c;
// printf("Enter number:");
// scanf("%d %d %d", &a,&b,&c);

// if(a > b && a > c){
//   printf("largest number is = %d",a);
// }
// else if(b > c){
//   printf("b is largest number", b);
// }
// else{
//   printf("c is largest",c);
// }

// --- swiping the number ---

// int a,b;
// printf("Enter number:");
// scanf("%d %d", &a,&b);

// a = a+b;
// b = a-b;
// a = a-b;

// printf("return number: a=%d, b=%d",a,b);

// --- sum of digits ---

// int num,digit;
// printf("Enter number:");
// scanf("%d", &num);
// int sum = 0;

// while(num > 0){

//   digit = num % 10;
//    sum = num + digit;
//   num = num / 10;
// }
// printf("return number: %d",sum);

//   return 0;
// }
