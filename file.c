// #include <stdio.h>
// int main()
// {
//     FILE *pt=NULL;
//     pt = fopen("file.txt","w");
//     //fclose(pt);
// }
#include <stdio.h>

int main() 
{
  // Declare a file pointer
  FILE *file;

  // Open the file in read mode
  file = fopen("file1.txt", "r");

  // Check if the file was opened successfully
  if (file == NULL) 
  {
        printf("Error opening file!\n");
        return 1;
  }

  // Read the contents of the file
  // ...

  // Close the file
  fclose(file);

  return 0;
}