#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen( char * str);
char * my_strncpy( char * dest, char * source, int n);
char * my_strcat( char * dest, char * source);
int my_strcmp( char * s1, char * s2 );
char * my_strchr( char * s, char c );

int my_strlen (char *str) {
  int i = 0;
  while (*str) {
    i ++;
    str ++;
  }return i;
}

char * my_strncpy( char * dest, char * source, int n) {
  char * tmp = dest;
  for (;(*source && n); tmp ++, source ++, n --) {
    *tmp = * source;
  }
  while( n --) {
    * tmp ++ = 0;
  }return dest;
}

char * my_strcat( char * dest, char * source){
  int i = 0;
  /*int counter1 = 0;
    while (dest[ counter1]){
    counter1 ++;
    }
    int counter2 = 0;
    while (source[counter2]) {
    dest[counter1] = source[counter2];
    counter2 ++;
    counter1 ++;
    }
    return dest;*/

  //using lengths instead:
  int destlen = my_strlen (dest);
  int sourlen = my_strlen (source);

  while (i < sourlen){
    dest[destlen + i] = source[i];      i++;
  } dest[destlen + sourlen] = 0; return dest;
  
  
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

int main () {
  char *str1 = "angelicazver";
  char *cpystr1 = "angelicazver";
  char *str2 = "systems";
  char *str3 = "angelica";
  char *str5 = "systemsblah";
  char *str4 = "";

  char a1[] = "asimkapp     ";
  char a2[] = "zverovich";

  char a1cpy[] = "asimkapp    ";
  char a2cpy[] = "zverovich";

  //strlen tests
  printf ("%s is this length: %d\n", str1, my_strlen(str1));

  //strcmp tests
  printf ("%s compared to %s is %d\n", str4, str4, my_strcmp(str4, str4) );
  printf ("%s compared to %s is %d\n", str4, str4, strcmp(str4, str4) );

  //strchr tests
  printf ("My address is:        %p\n", my_strchr(str1, 'x'));
  printf ("The real address is: %p\n", strchr(str1, 'x'));

  //strcat tests
  my_strcat(a1, a2);
  printf("a1 IS %s, a2 is %s, a1 WAS %s\n", a1, a2, a1cpy);

  //strncpy tests
  my_strncpy(a1, a2,3);
  printf ("Original string: [%s]\n Copy string: [%s]\n  New string: [%s]\n", a1cpy, a2, a1);

}
