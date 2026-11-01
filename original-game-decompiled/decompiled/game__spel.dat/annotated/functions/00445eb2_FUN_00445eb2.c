
/* ==== FUN_00445eb2 @ 00445eb2 ==== 
 * signature: undefined __cdecl FUN_00445eb2(float param_1, float param_2, float param_3, float param_4, undefined4 param_5, float param_6)
 * body: 00445eb2-00445f3b
 */

void __cdecl
FUN_00445eb2(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_006fba64 / 10 + 5;
  if (0x19 < iVar3) {
    iVar3 = 0x19;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = FUN_00445b10();
      if (iVar1 == -1) {
        return;
      }
      FUN_00445b40(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}


