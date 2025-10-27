  //Kacper Grębosz, Marcin Cieślak 

 #include <stdio.h>
 int main(int argc, char** argv) {
 short N = 4;
 int result = 1;
 int i =1;
 while (i<=N)
 {
    result*=i;
    i++;
 }
 printf("%d", result);
 }
