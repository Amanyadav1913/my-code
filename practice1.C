// #include <stdio.h>

// int main()
// {

    // mini calculator!

    // float num1, num2;
    // int mnchoice, subchoice;

    // printf("----main menu----- \n"); 

    // printf("1 Arithematic oprations \n");
    // printf("2 Logical opration \n");
    // printf("3 Exit \n");
    // printf("Enter your choice:");
    // scanf("%d", &mnchoice);

    // switch (mnchoice)
    // {
    // case 1:
    //     printf("\n ----Arithmetic menu----\n");
    //     printf("1 Addition \n");
    //     printf("2 subtraction \n");
    //     printf("3 multiplication \n");
    //     printf("4 Division \n");
    //     printf("Enter your choice:");
    //     scanf("%d", &subchoice);

    //     printf("Enter two number: \n");
    //     scanf("%f %f", &num1, &num2);

    //     switch (subchoice)
    //     {
    //     case 1:
    //         printf("Addition is = %.2f", num1 + num2);
    //         break;

    //     case 2:
    //         printf("Subtraction is = %.2f", num1 - num2);
    //         break;

    //     case 3:
    //         printf("multiplication is = %.2f", num1 * num2);
    //         break;

    //     case 4:
    //         if (num2 != 0)
    //         {
    //             printf("Division is = %.2f", num1 / num2);
    //         }
    //         else
    //         {
    //             printf("not divisible by '0'");
    //         }
    //         break;
    //     default:
    //         printf("invalid opration");
    //     }
    //     break;

    // case 2:
    //     printf("\n---Logical menu----\n");
    //     printf("1 AND \n");
    //     printf("2 OR \n");
    //     printf("3 NOT \n");
    //     printf("Enter your choice:");
    //     scanf("%d", &subchoice);

    //     int x,y;

    //     if(subchoice == 3){
    //         printf("Enter a value (0 or 1):");
    //         scanf("%d",&x);
    //     } else{
    //         printf("Enter two values(0 or 1): ");
    //         scanf("%d %d", &x,&y);
    //     }
    //     switch(subchoice){
    //         case 1:
    //         printf("AND = %d \n", x && y);
    //         break;

    //          case 2:
    //         printf(" OR = %d \n", x || y);
    //         break;

    //          case 3:
    //         printf("NOT = %d \n", !x);
    //         break;

    //         default:
    //         printf("invalid logical choice! \n");
    //     }
    //     break;

    //     case 3:
    //     printf("Exiting the program...\n");
    //     break;

    //     default:
    //     printf("Invalid main choice!");
    // }

    //  int n;
    // printf("Enter number:");
    // scanf("%d",&n);

    // for(int i =1; i<=10; i++){
    //     printf("%d \n",n*i);

    // }
    //  add n number using loop

    // int sum = 0;
    // int n;

    // printf("Enter number:");
    // scanf("%d", &n);

    // for(int i = 0; i<=n; i++){
    //     sum = sum + i;

    // }
    // printf("Sum of first  %d natural number is = %d", n,sum);

    // Table print karo

    // int n;
    // int Table;

    // printf("Enter number:");
    // scanf("%d", &n);

    // for(int i = 1; i<=10; i++){
    //     int table = n*i;
    //     printf("%d x %d = %d \n",n , i, table);
    // }

    // using loop Add all even number

    // int sum =0;
    // int n;

    // printf("Enter number:");
    // scanf("%d", &n);

    // for(int i =0; i<=n; i++){
    //     if(i % 2 ==0){
    //   sum = sum + i;
    //     }

    // }
    // printf("sum of even number from 1 to %d = %d \n",n,sum);

    // using loop Add odd number

    // int n, sum = 0;

    // printf("Enter number:");
    // scanf("%d", &n);

    // for(int i = 0; i<=n; i++){
    //     if(i % 2 !=0){
    //         sum = sum + i;
    //     }
    // }
    // printf("sum of odd number from 1 to %d = %d \n ", n,sum);

    // square

    // int n, square;

    // printf("Enter number:");
    // scanf("%d",&n);

    // square = n*n;
    // printf("square of %d = %d",n, square);

    // find factorial

    //  int n,fact = 1;
    //  printf("Enter number:");
    //  scanf("%d",&n);

    //  for(int i=1; i<=n; i++){
    //     fact = fact * i;
    //  }
    //  printf("factorial of %d = %d \n",n,fact);

    //   using while loop find factorial

    // int n,fact=1;
    // int i=1;

    //     printf("Enter number:");
    //     scanf("%d", &n);

    //     while(i<=n){
    //         fact = fact * i;
    //         i++;
    //     }
    //     printf("factorial of %d = %d",n,fact);

    //    ----Find number of digits----

    //     int n , digits = 0;
    //     ;

    //     printf("Enter number:");
    //     scanf("%d",&n);

    //      while(n !=0){
    //         n = n/10;
    //         digits++;

    //  }

    // printf("number of digits = %d", digits);

    // sum of digits

    //  int n, digits, sum = 0;

    //  printf("Enter number:");
    //  scanf("%d", &n);

    //  while(n !=0){
    //     digits= n %10;
    //     n = n/10;

    //     sum = sum + digits;
    //  }
    //  printf("sum of digits = %d",sum);

    // int n,digits, revs = 0;

    // printf("Enter number:");
    // scanf("%d", &n);

    // while(n != 0){
    //     digits = n%10;
    //     n = n/10;

    //     revs = revs*10+digits;
    // }
    // printf("reverse number = %d", revs);

    // ---find number of digits---

    // int n,num=0;

    // printf("Enter number:");
    // scanf("%d",&n);

    // while(n != 0){
    //     n = n/10;
    //     num++;

    // }
    // printf("number of digits= %d",num);

    // --- find inverse of digits---

    // int n,rvs=0,digits;

    // printf("Enter number:");
    // scanf("%d", &n);

    // while(n !=0){
    //     digits = n%10;
    //     rvs = rvs*10+digits;
    //     n = n/10;
    // }
    // printf("Reverse number=%d", rvs);

    // --- sum of digits---

    // int n,sum=0,digits;

    // printf("Enter number:");
    // scanf("%d", &n);

    // while(n !=0){
    //     digits = n%10;
    //     sum = sum + digits;
    //     n = n/10;
    // }

    // printf("sum of %d = %d\n",n, sum);

    //  ---find Paulinumber---

    // int n, rvs = 0, digits,original;
    // printf("Enter number:");
    // scanf("%d", &n);

    // original =n;
    // while (n != 0)
    // {
    //     digits = n % 10;
    //     rvs = rvs * 10 + digits;
    //     n = n / 10;

    // }
    //  if (original == rvs)
    //     {

    //         printf("it is palinumber");
    //     }
    //     else
    //     {
    //         printf("it is not palinumber");
    //     }

    // ---Product of number of digits---

    // int n,pdt=1,digits;

    // printf("Enter number:");
    // scanf("%d",&n);

    // while(n !=0){
    //     digits = n%10;
    //     pdt = pdt*digits;
    //     n = n/10;

    // }
    // printf("pdt of digits = %d\n",pdt);

    // ---Print Armstrong number---

    // int n,sum =0,dgts,ognN;

    // printf("Enter number:");
    // scanf("%d",&n);

    // ognN=n;

    // while(n !=0){
    //     dgts = n%10;

    //     sum = sum + (int)pow(dgts,3);
    //     n = n / 10;

    // }
    // if(sum == ognN){
    //     printf("it is Armstrong number");
    // }else{
    //     printf("it is not Armstrong number");
    // }

    //     int n,sum=0,digits;

    //     printf("Enter number:");
    //     scanf("%d",&n);

    //     while(n >9){
    //         sum =0;
    //         while(n !=0){
    //              digits = n%10;
    //         sum = sum + digits;
    //          n =n/10;

    //         }
    //         n=sum;

    //     }

    //       printf("sum of single digits =%d",sum);

    //     return 0;
    // }
