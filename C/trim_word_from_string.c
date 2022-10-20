include<stdio.h>
#include<string.h>

int main()
{
   char string[200], word[20];
   int i, j, stringLength, wordLength, temp, chk=0;
  
   // Enter string here
   printf("Enter the String: ");
   gets(string);
  
  //Enter the word that you want to trim
   printf("Enter a Word: ");
   gets(word);
   stringLength = strlen(string);
   wordLength = strlen(word);
  
   for(i=0; i<stringLength; i++)
   {
      temp = i;
      for(j=0; j<wordLength; j++)
      {
         if(string[i]==word[j])
            i++;
      }
      chk = i-temp;
      if(chk==wordLength)
      {
         i = temp;
         for(j=i; j<(stringLength-wordLength); j++)
            string[j] = string[j+wordLength];
         stringLength =stringLength-wordLength;
         string[j]='\0';
      }
   }
   printf("\nAfter Changing, new string is : %s\n", string);
   return 0;
}

