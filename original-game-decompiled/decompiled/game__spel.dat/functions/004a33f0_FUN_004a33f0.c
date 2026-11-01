
/* ==== FUN_004a33f0 @ 004a33f0 ==== 
 * signature: undefined __cdecl FUN_004a33f0(byte * param_1)
 * body: 004a33f0-004a3451
 */

void __cdecl FUN_004a33f0(byte *param_1)

{
  FILE *pFVar1;
  byte local_800 [2047];
  undefined1 local_1;
  
  pFVar1 = (FILE *)FUN_005589a5(s_PhysicsReport_txt_005af18c,&DAT_005af1a0);
  if (pFVar1 != (FILE *)0x0) {
    local_1 = 0;
    FUN_00559854(local_800,0x7ff,param_1,(undefined4 *)&stack0x00000008);
    FUN_00558953((int *)pFVar1,local_800);
    FUN_005588fd(pFVar1);
  }
  return;
}


