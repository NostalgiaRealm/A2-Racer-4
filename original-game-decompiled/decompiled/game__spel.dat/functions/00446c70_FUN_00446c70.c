
/* ==== FUN_00446c70 @ 00446c70 ==== 
 * signature: undefined __cdecl FUN_00446c70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 00446c70-00446ceb
 */

void __cdecl
FUN_00446c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if ((DAT_006fb904 != 0) && (fVar3 = FUN_004a6800(0x7128b0), (float10)12.0 <= (float10)1.0 / fVar3)
     ) {
    iVar2 = 0;
    do {
      iVar1 = FUN_004469b0();
      if (iVar1 == -1) {
        return;
      }
      FUN_004469e0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1);
  }
  return;
}


