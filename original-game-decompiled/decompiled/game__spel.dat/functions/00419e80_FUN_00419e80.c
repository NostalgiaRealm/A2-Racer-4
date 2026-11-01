
/* ==== FUN_00419e80 @ 00419e80 ==== 
 * signature: undefined __cdecl FUN_00419e80(int param_1)
 * body: 00419e80-00419f6c
 */

void __cdecl FUN_00419e80(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = param_1 * 0x294;
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if (2.0 <= *(float *)(&DAT_005cea54 + iVar3)) {
    FUN_00402ea0(&DAT_005cea7c + iVar3,0.0);
    uVar2 = FUN_00558625();
    FUN_00402de0(&DAT_005cea7c + iVar3,(float)(0x14 - (int)uVar2 % 0x28));
    *(undefined4 *)(&DAT_005cea58 + iVar3) = 0;
    *(undefined4 *)(&DAT_005cea54 + iVar3) = 0xc0400000;
    FUN_00403cd0(param_1);
    return;
  }
  fVar4 = FUN_004a6800(0x7128b0);
  FUN_00402e80(&DAT_005cea7c + iVar3,(float)(fVar4 * (float10)100.0));
  if (*(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50) < 2.0) {
    fVar4 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cea58 + iVar3) = (float)(fVar4 + (float10)*(float *)(&DAT_005cea58 + iVar3));
  }
  FUN_00403cd0(param_1);
  return;
}


