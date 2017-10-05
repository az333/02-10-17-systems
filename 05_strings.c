#include <stdio.h>
#include <stdlib.h>

int my_strlen( char *str);
char * my_strcpy( char *dest, char *source );
char * my_strncat( char *dest, char *source, int n);
int my_strcmp( char *s1, char *s2 );
char * my_strchr( char *s, char c );

int my_strlen (char *str) {
  int i = 0;
  while (*str ++) i ++;
  return i;
}

char * my_strcpy( char *dest, char *source ) {
  int i = 0;
  while (*source ++) {
    dest[i] = source[i];
  }
  return dest;
}

int my_strcmp(char *s1, char *s2) {
  while (*s1++ && *s2++) {
    printf ("s1: %c\n", *s1);
    printf ("s2: %c\n", *s2);
    if (*s1 != *s2) {
      return *s1 - *s2;
    }
    }
    return 0;
  }

int main () {
  char *str1 = "angelicazver";
  //printf ("%s is this length: %d\n", str1, my_strlen(str1));
  char *str2 = "systems";
  char *str3 = "angelica";
  char *str4 = "Systems";
  //my_strcpy(str1, str2);
  printf ("%s compared to %s is %d\n", str2, str4, my_strcmp(str2, str4) );
  printf ("%s compared to %s is %d\n", str2, str4, strcmp(str2, str4) );
  //printf ("str1 is %s\n", str1);

}
