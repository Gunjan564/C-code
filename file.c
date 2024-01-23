#include <stdio.h>
int main()

{
  char scanstring[42];
  // Declare a file pointer
  FILE *file = NULL;

  // Open the file in read mode
  file = fopen("file1.txt", "r");

  // Read the contents of the file
  // ...

  // Open the file in write mode
  // Erase all the content and write from the start
  //  file = fopen("file1.txt", "w");

  // Check if the file was opened successfully
  if (file == NULL)
  {
    printf("Error opening file!\n");
    return 1;
  }
  else
  {
    // Use of fgetc()
    char c = fgetc(file);

    // Use of fscanf :- Take the content of the file
    fscanf(file, "%s", scanstring);

    // Use of fgets()
    char getstring[7]; 
    fgets(getstring, 4, file);

    // Use if fprintf :- Print the content of the file on Terminal or in the file itself
    printf("The content of the file has: %s", scanstring);
    printf("\ncharacter of the file: %c", c);

    // Open the file in write mode
    file = fopen("file1.txt", "w");

    // Printing the desired text in file
    fprintf(file, "New_content");

    // Close the file
    fclose(file);
  }
  return 0;
}