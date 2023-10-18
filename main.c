#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void easy1(char s[],int n){
int i;
 int k;
  for(i=0; i<(n/2);i++)
      {
      if (s[i]==s[n-1]){k=1;}
        else {k=0;}
        n--;
      }
if (k){printf("\nIt's a palindrome");} else
    {printf("\nIt isn't a palindrome");}
}
void easy2(char s[],int n){
int i; char up_s[100];
 int k;
 strcpy(up_s,s);
for (i=0; i<n; i++){
        if (up_s[i]!=' '){
    k= (int) up_s[i];
    k=k-32;
    up_s[i]= (char)k;}

}printf("The word with uppercases: ");
puts(up_s);}
void easy3(char s[],int n){
    int k; int i; k=0;
for (i=0;i<n;i++){
    if ((s[i]=='a') || (s[i]=='e') ||
        (s[i]=='i') || (s[i]=='o') ||
         (s[i]=='u')||(s[i]=='A') || (s[i]=='E') ||
        (s[i]=='I') || (s[i]=='O') ||
         (s[i]=='U')){
          k++;}

}
printf("The number of vowels: %d",k);}
void medium1(char s[]){
   int i; int k; k=0;
   int n=strlen(s)-1;
   for(i=0; i<n; i++){
       if ((s[i]==',')||(s[i]=='.')||(s[i]=='?')||(s[i]=='!')||
            (s[i]=='-')||(s[i]==':')||(s[i]==';')||(s[i]=='[')||
             (s[i]==']')||(s[i]=='{')||(s[i]=='}')||(s[i]=='(')||
              (s[i]==')')||(s[i]=='\'')||(s[i]=='\"')){
                  if ((s[i]=='.')&&(s[i+1]=='.')&&(s[i+2]=='.')){k++; i=i+3;}else{ k++;}
       }
   }
   printf("The number of the punctuation marks: %d\n",k);
     }

void basetask(char s[]){
    int i;
    char smallest[1000]; int wordlenght= 1000;
    char currentWord[1000];
    int currentLength = 0;
int n=strlen(s);
    for (i = 0; i<n; i++) {
        char currentChar = s[i];

        if (((currentChar>='a')&&(currentChar<='z'))||((currentChar>='A')&&(currentChar<='Z'))) {
            currentWord[currentLength] = currentChar;
            currentLength++;
        } else { if (currentLength > 0 && currentLength < wordlenght) {
                currentWord[currentLength] = '\0';
                strcpy(smallest, currentWord);
                wordlenght = currentLength;
            }
            currentLength = 0;
        } }

    if (wordlenght < 1000) {
        printf("smallest word: %s\n", smallest);
    } else {
        printf("The string doesn't have words\n");
    }

    return 0;

  }

int main()
{
    char s[100];
    char med1[100];
    char basestring[100];
    printf("write a word for easy tasks, or sentence: ");
    fgets(s,sizeof(s),stdin);
    int n=strlen(s)-1;
    easy1(s,n);
    printf("\n");
    easy2(s,n);
    printf("\n");
    printf("Write a sentence to count the number of punctuation marks in it: ");
    fgets(med1,sizeof(med1),stdin);
    medium1(med1);
    printf("Write a sentence for basetask: ");
    fgets(basestring,sizeof(basestring),stdin);
    basetask(basestring);

    return 0;
}
