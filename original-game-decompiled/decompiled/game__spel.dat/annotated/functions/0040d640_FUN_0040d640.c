
/* ==== FUN_0040d640 @ 0040d640 ==== 
 * signature: undefined __stdcall FUN_0040d640(int param_1, undefined4 param_2)
 * body: 0040d640-0040d640
 */

void FUN_0040d640(int param_1,undefined4 param_2)

{
  void *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  this = (void *)FUN_00406eb0();
  iVar3 = 6;
  piVar1 = &DAT_005cf960;
  do {
    if (*piVar1 == -1) {
      (&DAT_005ce9e8)[iVar3 * 0xa5] = param_1;
      *(undefined4 *)(&DAT_005cea34 + iVar3 * 0x294) = param_2;
      (&DAT_005ce9ec)[iVar3 * 0xa5] = 0x1a;
      iVar2 = FUN_00407030(this,param_1);
      iVar2 = FUN_00406e70(this,iVar2);
      FUN_00403140(&DAT_005cea7c + iVar3 * 0x294,iVar2);
      *(code **)(param_1 * 0xf0 + 0x6c + DAT_00715e50) = FUN_00407300;
      *(undefined4 *)(param_1 * 0xf0 + 0x60 + DAT_00715e50) = 0;
      return;
    }
    piVar1 = piVar1 + 0xa5;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x5d15bd);
  FUN_004c3fa0((byte *)s_Could_not_place_roadblock_cop__d_00591a48);
  return;
}


