#include <stdio.h>
#include <stdlib.h>

int my_strlen( char * str);
char * my_strncpy( char * dest, char * source, int n);
char * my_strcat( char * dest, char * source);
int my_strcmp( char * s1, char * s2 );
char * my_strchr( char * s, char c );

int my_strlen (char *str) {
  int i = 0;
  while (*str ++) i ++;
  return i;
}

char * my_strncpy( char * dest, char * source, int n) {
  int i = 0;
  while (*source ++) {
    dest[i] = source[i];
  }
  return dest;
}

int my_strcmp(char *s1, char *s2) {
  for (;*s1 == *s2 && *s1; s1++,s2++) {
    //while the characters are equal and not null, keep going
  }
  return *s1 - *s2;
}

char * my_strchr( char * s, char c ) {
  while (*s) {
    if (*s == c) {
      return s;
    }
    s ++;
  }
  return NULL;
}

char * my_strcat( char * dest, char * source){
  int counter1 = 0;
  while (dest[ counter1]){
    counter1 ++;
  }
  int counter2 = 0;
  while (source[counter2]) {
    dest[counter1] = source[counter2];
    counter2 ++;
    counter1 ++;
  }
  return dest;
}

int main () {
  char *str1 = "angelicazver";
  char *cpystr1 = "angelicazver";
  char *str2 = "systems";
  char *str3 = "angelica";
  char *str5 = "systemsblah";
  char *str4 = "";

  //strlen tests
    //printf ("%s is this length: %d\n", str1, my_strlen(str1));

  //strcmp tests
    //printf ("%s compared to %s is %d\n", str4, str4, my_strcmp(str4, str4) );
    //printf ("%s compared to %s is %d\n", str4, str4, strcmp(str4, str4) );


  //strchr tests
    printf ("My addres is:        %p\n", my_strchr(str1, 'x'));
    printf ("The real address is: %p\n", strchr(str1, 'x'));
  //strcat tests
    //my_strcat(str1, str2);
    //printf ("str1 IS %s, str2 is %s, str1 WAS %s\n", str1, str2, cpystr1);

}
