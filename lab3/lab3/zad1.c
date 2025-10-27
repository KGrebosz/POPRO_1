 //Kacper Grębosz, Marcin Cieślak 

 #include <stdio.h>
 int main(int argc, char** argv) {
 short daysInYear = 365;
char x = (char) daysInYear;
/*
    rzutujemy zmienną o większym rozmiarze na tą o mniejszym rozmiarze i przepełniamy ją  
*/
 int someNumber = 555;
 short castSomeNumber = (short) someNumber;
 /*
    nic się nie dzieje zmienne przyjmują identyczne wartości
 */
 char letter = 'a'+1;
 int value = 1 + (int) 'a';
 /*
    nic się nie dzieje zmienne przyjmują identyczne wartości
 */
 printf("%d\n", daysInYear);
 printf("%d\n", x);
 printf("%d\n", someNumber);
 printf("%d\n", castSomeNumber);
 printf("%d\n", letter);
 printf("%d\n", value);
 puts("");

 float firstFloat = 1.443543322f;
 int castFloat = (int) firstFloat;
 /*
    błąd wynikający z różnicy systemów operacyjnych, na windows ucina bity 
 */
 float first = 1.44f;
 float second = 4.33f;
 float additionResult = first + second;
 float division = first / second;
 /*
    dzieli i zaokrągla wynik w górę
 */
 float addBig = 55554889857.1f + 0.00000001f;
 /*
    brakuje miejsca we floatcie by przedstawić taką liczbę
*/
 float divideBig = 555414.0f / 0.0000000001f;
/*
    brakuje miejsca we floatcie by przedstawić taką liczbę
*/
 printf("%.6f\n", firstFloat);
 printf("%.6f\n", castFloat);
 printf("%.6f\n", first);
 printf("%.6f\n", second);
 printf("%.6f\n", additionResult);
 printf("%.6f\n", division);
 printf("%.6f\n", addBig);
 printf("%.6f\n", divideBig);
 return 0;
 }