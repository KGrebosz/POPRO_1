 //Kacper Grębosz, Marcin Cieślak 

#include <stdio.h>
 #define TABLE_SIZE 10
 int main(int argc, char** argv) {
 char* names[TABLE_SIZE] = {
 "Jan", "Piotr", "Michal", "Pawel", "Jakub", "Stefan", "Robert",
 "Mariusz", "Tadeusz", "Konrad"
 };

 int times[TABLE_SIZE] = {
 56, 60, 51, 44, 66, 50, 49, 62, 43, 70
 };


 while (1) {
 printf("Choose an option: 1- calculate; 2- exit program\n");
 int option;
 scanf("%d", &option);
 char* imie;
 int max=0;

 switch (option) {
 case 1:
 for (int i = 0; i < TABLE_SIZE; i++) {
    if(max<times[i])
    {
        max=times[i];
        imie=names[i];
    }
 }
 printf("%d, %s",max,imie);
 break;
 case 2:
 printf("Exiting program\n");
 return 0;
 default:
 printf("Wrong option choose once again\n");
 }
 }
 return 0;
}