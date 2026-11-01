
/* ==== FUN_0054eaa1 @ 0054eaa1 ==== 
 * signature: int __cdecl FUN_0054eaa1(LPSTR param_1, WCHAR param_2, undefined4 param_3, int * param_4)
 * body: 0054eaa1-0054eb12
 */

int __cdecl FUN_0054eaa1(LPSTR param_1,WCHAR param_2,undefined4 param_3,int *param_4)

{
  UINT CodePage;
  int iVar1;
  
  CodePage = DAT_0074dcf4;
  iVar1 = DAT_0074dce4;
  if (param_4 != (int *)0x0) {
    CodePage = param_4[1];
    iVar1 = *param_4;
  }
  if (iVar1 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_4 = (int *)0x0;
    iVar1 = WideCharToMultiByte(CodePage,0x220,&param_2,1,param_1,DAT_005c8378,(LPCSTR)0x0,
                                (LPBOOL)&param_4);
    if ((iVar1 != 0) && (param_4 == (int *)0x0)) {
      return iVar1;
    }
  }
  DAT_0074dc60 = 0x2a;
  return -1;
}


