#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
  FILE *fp1, *fp2;
  char filename1[100], filename2[100];
  char contents[MAX_SIZE];
  int i, j, size;

  printf("Enter the name of the file to read: ");
  scanf("%s", filename1);

  // Open the input file
  fp1 = fopen(filename1, "r");
  if (fp1 == NULL) {
    printf("Error opening the file.\n");
    exit(1);
  }

  // Open the output file
  printf("Enter the name of the file to write: ");
  scanf("%s", filename2);
  fp2 = fopen(filename2, "w");
  if (fp2 == NULL) {
    printf("Error opening the file.\n");
    exit(1);
  }

  // Find the size of the file
  fseek(fp1, 0, SEEK_END);
  size = ftell(fp1);

  // Read the contents of the file into the buffer
  fseek(fp1, 0, SEEK_SET);
  fread(contents, size, 1, fp1);

  // Display the contents of the file in reverse order
  printf("Contents of the file in reverse order:\n");
  for (i = size - 1; i >= 0; i--) {
    printf("%c", contents[i]);
  }

  // Copy the contents of the file to the output file
  fwrite(contents, size, 1, fp2);

  // Close the files
  fclose(fp1);
  fclose(fp2);

  printf("File copied successfully.\n");

  return 0;
}