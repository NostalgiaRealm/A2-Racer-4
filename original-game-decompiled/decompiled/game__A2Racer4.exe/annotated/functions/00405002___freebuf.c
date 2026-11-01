
/* ==== __freebuf @ 00405002 ==== 
 * signature: void __cdecl __freebuf(FILE * _File)
 * body: 00405002-0040502c
 * note: Library Function - Single Match  __freebuf  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_00403657(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


