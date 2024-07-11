#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  // Use a struct to force local variable memory ordering





  
  struct {
    char buff[4];
    char pass;
  } localinfo;
  localinfo.pass = '\0';
  printf("\n Enter the password: ");
  scanf("%s", localinfo.buff); // Get the password from the user
  // Check the password with string matching
  if (strcmp(localinfo.buff, "byte")) {
    printf("\n Wrong Password, pass variable value must be null \n");
    printf("\n pass variable value in this case is %c \n", localinfo.pass);
  } else {
    printf("\n Correct Password, pass variable must be x\n");
    localinfo.pass = 'x'; // Set a flag denoting correct password
    printf("\n pass variable value in this case is %c \n", localinfo.pass);
  }
  // IF password matches
  //  GIVE root or admin rights to user
  if (localinfo
          .pass) { // if localinfo.pass is non null value, then if loop will be
                   // entered like in the case of buffer over overflow
    printf("\n Congratulations! Root privileges given to the user!\n");
  }
  return 0;
}
