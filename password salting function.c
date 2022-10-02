#include<stdio.h>
#include<string.h>
  // password salting function

  void salting(char password[]);

int main () {
   char password[100];
   scanf("%s" , &password);
  salting(password);

return 0;
}

void salting(char password[]) {
   char salt[] = "123";
   char newpassword[200];

   strcpy(newpassword , password);
   strcat(newpassword, salt);
   puts(newpassword);
}