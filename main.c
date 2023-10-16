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
         (s[i]=='u')){
          k++;}

}
printf("The number of vowels: %d",k);}
void easy4(char s[], int n){
  int i; int k; k=1;
  for (i=0;i<n;i++){
    if (s[i]==' '){k++;}
  }
  printf("The number of words in it: %d",k);
}
void medium1(char s[]){
   int i; int k; k=0;
   int n=strlen(s)-1;
   for(i=0; i<n; i++){
       if (!((s[i] >= 'a' && s[i] <= 'z') ||(s[i]==' ') ||(s[i] >= 'A' && s[i] <= 'Z'))){
        k++;
       }
   }
   printf("The number of the punctuation marks: %d\n",k);
     }
void medium2(char s[]){
    int i; int n=strlen(s)-1; int k; k=0;
     if ((strchr(s,'@')!=NULL)&&(strchr(s,'.')!=NULL)){
             if (strchr(s,'@')<strchr(s,'.')){
                      for(i=0; i<n; i++){if((s[i] >= 'a' && s[i] <= 'z') ||(s[i]=='@')||(s[i]=='.')){k=1;}
                                               else{k=0; break;} }
                                                           }
                                }
    if(k){printf("The email address is written correctly!\n");} else{printf("The email address isn't written correctly!\n");}
      }
int compare(const void *a, const void *b) {
    return strcmp(*(const char**)a, *(const char**)b);
}
void medium3(char s[]){
    int count=0;
    char *words[100];
int n=strlen(s)-1;int i;
char fr[100];
strcpy(fr,s);
fr[n]='\0';
char *token = strtok(fr, " ");
    while (token != NULL && count<100) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }
qsort(words, count, sizeof(char*), compare);
printf("Sorted Sentence: \n");
    for (i = 0; i < count; i++) {
        printf("%s ", words[i]);

    }
}

int main()
{
    char s[100];
    char med1[100];
    char med2[100];
    char med3[100];
    printf("write a word for easy tasks, or sentence: ");
    fgets(s,sizeof(s),stdin);
    int n=strlen(s)-1;
    easy1(s,n);
    printf("\n");
    easy2(s,n);
    printf("\n");
    easy3(s,n);
    printf("\n");
    easy4(s,n);
    printf("\n");
    printf("Write a sentence to count the number of punctuation marks in it: ");
    fgets(med1,sizeof(med1),stdin);
    medium1(med1);
    printf("Write an email address: ");
    fgets(med2,sizeof(med2),stdin);
    medium2(med2);
    printf("Write a sentence: ");
    fgets(med3,sizeof(med3),stdin);
    medium3(med3);
    return 0;
}
