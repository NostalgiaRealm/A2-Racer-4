
/* ==== FUN_0043dd90 @ 0043dd90 ==== 
 * signature: undefined __cdecl FUN_0043dd90(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 0043dd90-0043ddfb
 */

void __cdecl
FUN_0043dd90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  float10 fVar2;
  
  if (DAT_006fb904 != 0) {
    fVar2 = FUN_004a6800(0x7128b0);
    if ((float10)12.0 < (float10)1.0 / fVar2) {
      iVar1 = FUN_0043da80();
      if (iVar1 != -1) {
        FUN_0043daa0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}


