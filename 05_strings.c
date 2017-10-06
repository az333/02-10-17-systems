#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen( char * str);
char * my_strncpy( char * dest, const char * source, int n);
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

char * my_strncpy( char * dest, const char * source, int n) {
  /*char * temp = dest;
  for (;*source && n; temp++, source++, n--) {
    //printf ("temp: %c, source: %c\n", *temp, *source);
    *temp = *source;
  }
  while(n--) {
    *temp++ = 0;
  }
  return dest;*/

  int i = 0;
  while (n > i){
    dest[i]= source[i];
    i++;
  }
  return dest;
}

char * my_strcat( char * dest, char * source){

  int len_src = my_strlen(source);
  int len_dest = my_strlen(dest);
  int i = 0;
  for (; i < len_src; i ++) {
    dest[len_dest + i] = source[i];
  }
  dest[len_dest + len_src] = 0;
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

int main () {
  char *str1 = "angelicazver";
  char *cpystr1 = "angelicazver";
  char *str2 = "systems";
  char *str3 = "angelica";
  char *str5 = "systemsblah";
  char *str4 = "";
  
  char a1[] = "asimkapp";
  char a2[] = "zverovich";

  char a1cpy[] = "asimkapp    ";
  char a2cpy[] = "zverovich";
  /*
  //strlen tests
  printf("%s is this length: %d\n", str1, my_strlen(str1));

  //strcmp tests
  printf("%s compared to %s is %d\n", str4, str4, my_strcmp(str4, str4) );
  printf("%s compared to %s is %d\n", str4, str4, strcmp(str4, str4) );

  //strncpy tests
  printf ("The original source is [%s] and now dest is [%s]\n", a2, my_strncpy(a1, a2,2));
  printf ("The original source is [%s] and now dest is [%s]\n", a2cpy, strncpy(a1cpy, a2cpy, 2));

  //strchr tests
  printf("My address is:        %p\n", my_strchr(str1, 'x'));
  printf("The real address is: %p\n", strchr(str1, 'x'));

  //strcat tests
  my_strcat(a1, a2);
  printf("a1 IS %s, a2 is %s, a1 WAS %s\n", a1, a2, a1cpy); */

  printf("testing mystrncpy:\n\n");
    char mystrcpy1[200]="Rihui";
    char mystrcpy2[200]= "Sucks ";
    char strcpy1[200]="Rihui";
    char strcpy2[200]="Sucks ";
    printf("source: %s\n", mystrcpy1);
    printf("dest: %s\n", mystrcpy2);

}
