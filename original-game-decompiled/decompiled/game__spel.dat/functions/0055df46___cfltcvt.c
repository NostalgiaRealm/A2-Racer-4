
/* ==== __cfltcvt @ 0055df46 ==== 
 * signature: errno_t __cdecl __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
 * body: 0055df46-0055df96
 * note: Library Function - Single Match  __cfltcvt  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_0055dc7f(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_0055dd83(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_0055de61(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}


