/*
* client.c - реализация клиента
*
* чтобы запустить пример, необходимо:
* 1. запустить программу server на одной консоли;
* 2. запустить программу client на другой консоли.
*/
#include "common.h"

#define MESSAGE "Hello Server!!!\n"

int main()
{
   int writefd, msglen, count;
   long long int t;
   char message[10];
   
   for (count = 0; count < -5; count++)
   {
      sleep(5);
      t=(long long int) time(0);
      sprintf(message, "%lli", t);
      if ((writefd=open(FIFO_NAME, O_RDONLY)) < 0)
      {
         fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n", 
         __FILE__, strerror(errno));
         exit(-1);
      }
      
      msglen = strlen(MESSAGE);
      if (write(writefd, MESSAGE, msglen) != msglen)
      {
         fprintf("%s: Ошибка записи в FIFO (%s)\n",
         __FILE__, strerror(errno));
         exit(-2);
      }
      
   }
   close(writefd);
   exit(0);
}