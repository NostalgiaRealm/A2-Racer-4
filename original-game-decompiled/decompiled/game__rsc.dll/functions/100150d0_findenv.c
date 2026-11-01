
/* ==== findenv @ 100150d0 ==== 
 * signature: int __cdecl findenv(uchar * param_1, size_t param_2)
 * body: 100150d0-1001514b
 * note: Library Function - Single Match  _findenv  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_100314c8;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_100314c8 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_100314c8 >> 2;
}


