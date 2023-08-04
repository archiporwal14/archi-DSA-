#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define MIN_LENGTH 3           //#define will be used when we have to put any value constant through out the code and it cannot be changed later  
#define MAX_LENGTH 10

#define MIN_DIGIT_ASCII 48
#define MAX_DIGIT_ASCII 57

#define MIN_ALPHA_ASCII 65               //65 because 65 is ASCII value of 'A'
#define MAX_ALPHA_ASCII 70               //70 because 70 is ASCII value of 'F'

char* generate_random_alphanum_str(char*,size_t);    //char* is a return type which is a pointer

char* generate_random_alphanum_str(char *ptr, size_t len)
{
  bool toss;
  
  if(len == 0)
    return ptr;

  toss = rand() % 2;

 if(toss == true)           //scaling factor                 shifting value (for line 29)
   *ptr = rand() % ((MAX_ALPHA_ASCII - MIN_ALPHA_ASCII)+1) + MIN_ALPHA_ASCII:      //implicit type-casting is used
 else   
   *ptr = rand() % ((MAX_DIGIT_ASCII - MIN_DIGIT_ASCII)+1) + MIN_ALPHA_ASCII:

    ptr = generate_random_alphanum_str(ptr+1,(len-1));

}
  int main(void)
  {
    char *str_pte = NULL;
    size_t length;

    length = =rand() % ((MAX_LENGTH + MIN_LENGTH)+1) + MIN-LENGTH;

    str_ptr = (char* calloc: (length+1),sizeof(char));             //explicit type-casting

    str_ptr = generate_random_alphanum_str(str_ptr,length);

    *(str_ptr +length)

    return 0;
  }