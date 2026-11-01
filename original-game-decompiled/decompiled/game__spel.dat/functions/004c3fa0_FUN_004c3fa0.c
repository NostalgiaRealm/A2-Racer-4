
/* ==== FUN_004c3fa0 @ 004c3fa0 ==== 
 * signature: undefined __cdecl FUN_004c3fa0(byte * param_1)
 * body: 004c3fa0-004c402b
 */

void __cdecl FUN_004c3fa0(byte *param_1)

{
  FILE *pFVar1;
  byte local_400 [1023];
  undefined1 local_1;
  
  if (DAT_007408e8 == 1) {
    if (DAT_007408ec == 0) {
      pFVar1 = (FILE *)FUN_005589a5(s_debug_txt_005ae5f8,&DAT_005af1a0);
      if (pFVar1 != (FILE *)0x0) {
        local_1 = 0;
        FUN_00559854(local_400,0x3ff,param_1,(undefined4 *)&stack0x00000008);
        FUN_00558953((int *)pFVar1,local_400);
        FUN_005588fd(pFVar1);
      }
    }
    else if (DAT_007408ec == 1) {
      OutputDebugStringA((LPCSTR)local_400);
      return;
    }
  }
  return;
}


