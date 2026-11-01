
/* ==== FUN_1000e970 @ 1000e970 ==== 
 * signature: int __cdecl FUN_1000e970(LPSTR param_1, uint param_2)
 * body: 1000e970-1000ea0f
 */

int __cdecl FUN_1000e970(LPSTR param_1,uint param_2)

{
  undefined4 *puVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_1003163c == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&param_2,1,param_1,DAT_10030214,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}


