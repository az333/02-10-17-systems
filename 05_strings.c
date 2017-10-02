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


int main () {
  char *str1 = "angelicazver";
  //printf ("%s is this length: %d\n", str1, my_strlen(str1));
  char *str2 = "systems";
  //my_strcpy(str1, str2);
  //printf ("str1 is %s\n", str1);

}
