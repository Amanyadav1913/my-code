// #include <stdio.h>

// int main()
// {

// char name[8];
// printf("Enter your name:");
// // scanf("%s",name);    (--scanf space ke baad wala char nahi lega--)

// // gets(name);              (--gets space ke baad wala char bhi leta hai--)

// printf("%s",name);

//
// char name[100];
// int length=0;

// printf("Enter your string:");
// gets(name);

// while(name[length] != '\0'){
//     length++;
// }
// printf("Lenght of string is =%d",length);

// char cpy1[50],cpy2[50];
// int i=0;

// printf("Enter your string:");
// gets(cpy1);

// while(cpy1[i] != '\0'){
//     cpy2[i] = cpy1[i];
//     i++;

// }
// cpy2[i] != '\0';

// printf("copied string :%s",cpy2);

// char nm[100], mn1[100];
// int i=0, j=0;

// printf("Enter first string:");
// gets(nm);

// printf("Enter second string:");
// gets(mn1);

// while(nm[i] != '\0'){

//     i++;

// }
// while (mn1[j] != '\0'){
//     nm[i] =mn1[j];
//     i++;
//     j++;
// }
// nm[i] ='\0';
// printf("Concatenated string: %s",nm);

// char name[] = "Aman";
// printf("%s",name);

// char str[50];
// int length=0;
// printf("Enter string:");
// gets(str);

// while(str[length] !='\0'){
//     length++;
// }
// printf("Length of string is =%d",length);

//          ---> write a program to reverse string <---

// char str[100];
// int len=0;
// printf("Enter string:");
// gets(str);

// while(str[len] !='\0'){
//     len++;
// }
// printf("Reverse string:");
// for(int i = len-1; i>=0; i--){
//     printf("%c",str[i]);
// }

//        ---> write a program to find length of string <---

//  char name[100];
//  int length =0;

//  printf("Enter your string:");
//  gets(name);

//  while(name[length] != '\0'){
//     length++;
//  }

//  printf("length of string =%d",length);

//            ---> write a program to reverse string <---

// char rev[100];
// int length =0;
// printf("Enter string:");
// gets(rev);

// while(rev[length] !='\0'){
//     length++;}

//     for(int i=length-1; i>=0; i--){
//         printf("%c",rev[i]);
// }

//          ---> write a program to check if string is palimdran or not <---

// char str[100];
// int length =0;
// int flag;
// printf("Enter number:");
// gets(str);

// while(str[length] !='\0'){
//     length++;
// }
// for(int i=0; i< length/2;i++){
//     if(str[length] !=str[length-i-1]){
//         flag = 1;
//         break;
//     }

// }
// if(flag==0){
//     printf("This string is palidram");
// } else{
//     printf("This number is not palidram");
// }

// -           ---> Write a program to count vowel,consonent <---

// int main() {
//     char vol[100];
//     int count = 0;
//     int i =0;

//     printf("Enter string:");
//     fgets(vol, 100, stdin);

//     int ch;

//     while (vol[i] != '\0')
//     {

//         if (!vol[i] == 'A' || vol[i] == 'E' || vol[i] == 'I' || vol[i] == 'O' || vol[i] == 'U' ||
//             vol[i] == 'a' || vol[i] == 'e' || vol[i] == 'i' || vol[i] == 'o' || vol[i] == 'u')
//         {
//             count++;
//         }
//         i++;
//     }
// printf("Total vowel =%d",count);
// return 0;
// }

//             ---> find number of consonent <---

// int main()
// {
//     char conso[100];
//     int i = 0;
//     int count = 0;

//     printf("Enter number:");
//     fgets(conso, 100, stdin);

//     while (conso[i] != '\0'){
//           char ch =conso[i];

//           if((ch >='A' && ch <= 'Z' || ch>= 'a' && ch<='z')){
//              if (!ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch== 'U' ||
//             ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         {
//             count++;
//         }

//     }
//     i++;
// }
//     printf("Total consonent =%d", count);

//                               ---> find number of string <---

// char str[100];
// int i=0;
// int count =0;

// printf("Enter string:");
// fgets(str,100,stdin);

// while(str[i] !='\0'){
//     if(str[i] == ' '){
//         count++;
//     }
//     i++;

// }
// printf("Total space = %d",count);

//     return 0;
// }
