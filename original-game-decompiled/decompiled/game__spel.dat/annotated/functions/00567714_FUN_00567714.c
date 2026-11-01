
/* ==== FUN_00567714 @ 00567714 ==== 
 * signature: int __cdecl FUN_00567714(uchar * param_1, size_t param_2)
 * body: 00567714-0056776b
 */

int __cdecl FUN_00567714(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_0074dc88;
  piVar2 = DAT_0074dc88;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_0074dc88 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_0074dc88 >> 2;
}


