// #include <stdio.h>

// --using pointer find swapping--

// void swap(int *x, int *y);

// int main()
// {

//     int x, y;

//     printf("Enter number:");
//     scanf("%d %d", &x, &y);

//     swap(&x, &y);

//     printf("After swaping \n x =%d\n y=%d", x, y);
//     return 0;
// }

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int age = 22;
//     int *ptr = &age;
//     int **pptr = &ptr;

//     printf("%d\n", &age);
//     printf("%d\n", age);
//     printf("%d\n", &ptr);
//     printf("%d", *ptr);
// }
// int main(){
//     int arr;
// printf("Enter number:");
// scanf("%d",&arr);

// int *ptr =&arr;

// printf("Accessing array elements using pointer:");

// for(int i=0; i<arr; i++){
//     printf("arr[%d] =%d, *(p + %d)= %d\n",i, arr[i], i, *(ptr+i));
// }

// }

// -- sum of array using pointer--

// int main(){

//  int arr[] ={12,34,45,56,16};
//     int *ptr =&arr;
//     int sum =0;

//     for(int i=0; i<5; i++){
//         sum +=*(ptr +i);
    
   
//     printf("sum of array =%d",sum);
// } 
// }

// --count vowels using pointers--

// int main(){
//     char str[] = "Aman yadav";
//     int count =0;
//     char *ptr = str;

//     while(*ptr != '\0'){
//         char ch = *ptr;
//         if(ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U' ||
//         ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'){
//               count++;


//         }
//          ptr++;
// }
// printf("number of vowels = %d\n",count);
      
//     }
