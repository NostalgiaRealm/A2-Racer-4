
/* ==== FUN_00563c91 @ 00563c91 ==== 
 * signature: int __cdecl FUN_00563c91(LPSTR param_1, WCHAR param_2)
 * body: 00563c91-00563cf8
 */

int __cdecl FUN_00563c91(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_0074dce4 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_0074dcf4,0x220,&param_2,1,lpMultiByteStr,DAT_005c8378,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  DAT_0074dc60 = 0x2a;
  return -1;
}


