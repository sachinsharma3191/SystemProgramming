#include<unistd.h>

int main(){
   write(1,"Hello\n",6);
   write(2,"World\n",10);
   return 0;
}
