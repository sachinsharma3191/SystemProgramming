#include<unistd.h>

int main(){
  int count;
  for(count = 5; count; count--){
     write(STDOUT_FILENO, "Hello\n",6);
     write(STDERR_FILENO,".",6);
  }
  return 0; 
}
