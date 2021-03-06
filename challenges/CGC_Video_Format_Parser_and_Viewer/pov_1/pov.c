#include "libpov.h"
int main(int cgc_argc, char *cgc_argv[]) {
   cgc_negotiate_type1(0x0, 0x0, 0);
   do {
      unsigned char *read_00000;
      unsigned int read_00000_len;
      unsigned int read_00000_ptr = 0;
      //**** delimited read
      static unsigned char read_00000_delim[] = 
         "\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
         "\x53\x74\x72\x65\x61\x6d\x20\x4d\x65\x20\x59\x6f\x75\x72\x20\x56"
         "\x69\x64\x65\x6f\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
         "\x2d\x2d\x2d\x2d\x0a";
      read_00000 = NULL;
      read_00000_len = 0;
      int read_00000_res = cgc_delimited_read(0, &read_00000, &read_00000_len, read_00000_delim, 53);
      if (read_00000_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00000_00000[] = 
         "\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
         "\x53\x74\x72\x65\x61\x6d\x20\x4d\x65\x20\x59\x6f\x75\x72\x20\x56"
         "\x69\x64\x65\x6f\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
         "\x2d\x2d\x2d\x2d\x0a";
      read_00000_ptr += cgc_data_match(read_00000 + read_00000_ptr, read_00000_len - read_00000_ptr, match_00000_00000, 53);
      cgc_free(read_00000);
      if (read_00000_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00000_00000[] = 
         "\xfa\x0f\x00\x00";
      static unsigned int write_00000_00000_len = 4;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);
      if (write_00000_len > 0) {
         cgc_transmit_all(1, write_00000, write_00000_len);
      }
      cgc_free(write_00000);
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00001_00000[] = 
         "\x00\x43\x56\x46\x11\x11\x02\x04\x00\x01\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff\x55\x55"
         "\x08\xff\x55\x55\x08\xff\x55\x55\x08\xff";
      static unsigned int write_00001_00000_len = 4090;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);
      if (write_00001_len > 0) {
         cgc_transmit_all(1, write_00001, write_00001_len);
      }
      cgc_free(write_00001);
   } while (0);
}
