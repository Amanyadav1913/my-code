// #include <stdio.h>

// int main(){
// int n;

// printf("Enter number of element:");
// scanf("%d", &n);

// int arr[n];

// printf("Enter %d element \n", n);
// for (int i = 0; i < n; i++)
// {
//     scanf("%d", &arr[i]);
// }

// printf("you entered:\n");
// for (int i = 0; i < n; i++)
// {
//     printf("%d \n", arr[i]);
// }

//                ---> sum of array <---

//   int n,sum=0,arr[5];

//   printf("Enter number:");
//   for(int i=0; i<5; i++){
//     scanf("%d",&arr[i]);
//     sum = sum+arr[i];
//   }
//   printf("sum =%d",sum);

//    int n,sum=0;

//    printf("Enter element:");
//    scanf("%d",&n);

//    int arr[n];

//    printf("you entered number:");
//    for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
//     sum = sum+arr[i];
//    }
//    printf("sum =%d",sum);

//  largest number in arr

// int n;
// printf("Enter number of element:");
// scanf("%d",&n);

// int arr[n];

// printf("you entered number:");
// for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
// }

// int max=arr[0];
// for(int i=0; i<n; i++){
//     if(arr[i]>max){
//         max =arr[i];
//     }
// }
// printf("max number=%d",max);

//                ---> find smallest number in array <---

// int n;
// printf("Enter number:");
// scanf("%d", &n);

// int arr[n];

// printf("Enter your number: \n");
// for (int i = 0; i < n; i++)
// {
//     scanf("%d", &arr[i]);
// }
// int min = arr[0];
// for (int i = 0; i < n; i++)
// {
//     if (arr[i] > min)
//     {
//         min = arr[i];
//     }
// }
// printf("min number =%d", min);

//                ---> find even number <---

// int n;
// printf("Enter number:");
// scanf("%d", &n);

// int arr[n];

// printf("Entered your number:");
// for (int i = 0; i < n; i++)
// {
//     scanf("%d", &arr[i]);
//     if (arr[i] % 2 == 0)
// {
//     printf("Given number is Even\n");
// }
// else
// {
//     printf("Given number is odd\n");
// }

// }

//               -----> find even & odd number <----

// int n;
// printf("Enter number:");
// scanf("%d",&n);

// int arr[n];

// printf("Entered your number:\n");
// for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);

// }
//       printf("\nEven number \n");
// for(int i=0; i<n; i++){
//     if(arr[i] % 2 ==0)
//     {
//         printf("%d \n",arr[i]);
//     }
// }

//  printf("\nodd number \n");
// for(int i=0; i<n; i++){
//     if(arr[i] % 2 !=0){
//         printf("%d \n",arr[i]);
//     }
// }

//         ----->find Secmax number <----

//    int n;
//    printf("Enter number:");
//    scanf("%d",&n);

//    int arr[n];

//    printf("Entered your number:");
//    for(int i=0; i<n; i++){
//     scanf("%d", &arr[i]);
//    }

//    int max = arr[0];
//    int secmax = -1;

//    for(int i=1; i<n; i++){
//     if(arr[i]> max){
//           secmax = max;
//         max = arr[i];

//     }
//     else if(arr[i]> secmax && arr[i] < max){
//           secmax = arr[i];

//     }
//    }
//    printf("maximun =%d\n",max);
//    printf("secmax = %d\n",secmax);

//     ---> find smallest and second smallest number <---

// int n;
// printf("Enter number:");
// scanf("%d",&n);

// int arr[n];

// printf("Entered your number:");
// for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
// }

// int sml = arr[0];
// int secsml = -1;

// for(int i =1; i<n; i++){
//     if(arr[i] < sml){
//         secsml = sml;
//         sml = arr[i];
//     }
//     else if(arr[i] < secsml && arr[i] > sml);
// }

// printf("small = %d\n",sml);
// printf("sec small =%d\n",secsml);

//      ---> without using another Array reverse find <---

// int n;
// printf("Enter number:");
// scanf("%d",&n);

// int arr[n];
// printf("Entered your number:");
// for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
// }

// for(int i=0; i< n/2; i++){
//      int temp = arr[i];
//      arr[i] =arr[n -i -1];
//      arr[n-i -1] = temp;
// }
// printf("Reverse array : \n");
// for(int i =0; i<n; i++){
//     printf("%d\n",arr[i]);
// }

//          ---> find average of number <---

// int n;
// printf("Enter number:");
// scanf("%d",&n);

// int arr[n];
// printf("Enterd your number:\n");
// for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
// }
// int sum = 0;
// int avg;
// int multi;
// for(int i=0; i<n; i++){
//      sum =sum+arr[i];
//      avg = (sum)/n;
//      multi = sum*n;

// }
//  printf("sum is=%d\n",sum);
//  printf("Avg is=%d\n",avg);
//  printf("multi=%d",multi);

//          --->Frequency of each element of array <---

// int n;
// printf("Enter number:");
// scanf("%d",&n);

// int arr[n];
// printf("Entered your number:\n");
// for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
// }

// int freq[n];
// for(int i=0; i<n; i++){
//     freq[i] =-1;
// }
// for(int i=0; i<n; i++){
//     int count = 1;
//     for(int j=i+1; j<n; j++){
//         if(arr[i] == arr[j]){
//             count++;
//             freq[j] = 0;
//         }
//     }
//     if (freq[i] !=0){
//         freq[i] = count;
//     }
// }
// printf("Element | Frequency\n");
// for(int i=0; i<n; i++){
//     if(freq[i] != 0){
//         printf("%d\t|\t%d\n",arr[i],freq[i]);
//     }
// }

//              -----> Arresing element <-----
//                   **Accending order**

// int n;
// printf("Enter number of elements: ");
// scanf("%d", &n);

// int arr[n];
// printf("Enter elements: ");
// for (int i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
// }

// // Bubble Sort
// for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//         if (arr[j] > arr[j + 1]) {
//             int temp = arr[j];
//             arr[j] = arr[j + 1];
//             arr[j + 1] = temp;
//         }
//     }
// }

// printf("Sorted array: ");
// for (int i = 0; i < n; i++) {
//     printf("%d ", arr[i]);
// }

//                         ---> deccending order <---

// int n;
// printf("Enter number:");
// scanf("%d", &n);

// int arr[n];
// printf("Enterd your number:\n");
// for (int i = 0; i < n; i++)
// {
//     scanf("%d", &arr[i]);
// }

// for (int i = 0; i < n - 1; i++)
// {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//         if (arr[j] > arr[j + 1])
//         {
//             int temp = arr[j];
//             arr[j] = arr[j + 1];
//             arr[j + 1] = temp;
//         }
//     }
// }

// printf("\n---stored array---\n");
// for (int i = 0; i < n; i++)
// {
//     printf("%d\n", &arr[i]);
// }

// int n;
// printf("Enter number of elements: ");
// scanf("%d", &n);

// int arr[n];
// printf("Enter elements: ");
// for(int i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
// }

// // ---> Selection Sort <---

// for(int i = 0; i < n-1; i++) {
//     int minIndex = i;
//     for(int j = i+1; j < n; j++) {
//         if(arr[j] < arr[minIndex]) {
//             minIndex = j;
//         }
//     }

//     //          ---> Swap <---

//     int temp = arr[i];
//     arr[i] = arr[minIndex];
//     arr[minIndex] = temp;
// }

// printf("Sorted array (Ascending): ");
// for(int i = 0; i < n; i++) {
//     printf("%d ", arr[i]);
// }

//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);

//     int arr[n];
//     printf("Entered your number\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp =arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     printf("stored array:\n");
//     for(int i=0; i<n; i++){
//         printf("%d\n",arr[i]);
//     }

//     return 0;
// }
