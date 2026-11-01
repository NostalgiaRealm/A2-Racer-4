
/* ==== FUN_0040d490 @ 0040d490 ==== 
 * signature: undefined __cdecl FUN_0040d490(int param_1)
 * body: 0040d490-0040d555;0040d559-0040d5c0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040d556-0040d558
 */

void __cdecl FUN_0040d490(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  
  iVar3 = 0;
  iVar4 = param_1 * 0x294;
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if ((param_1 < 0) || (5 < param_1)) {
    if (((&DAT_005ce9ec)[param_1 * 0xa5] == 9) || ((&DAT_005ce9ec)[param_1 * 0xa5] == 0x19)) {
      iVar2 = FUN_0049eb50(&DAT_006fbb5c,*(int *)(iVar2 * 0xf0 + 0x30 + DAT_00715e50));
      FUN_0049e570(iVar2);
    }
    else {
      FUN_00450b30(iVar2,1);
    }
  }
  else {
    FUN_00450b30(iVar2,1);
  }
  if ((param_1 < 0) || (5 < param_1)) {
    if (DAT_006fb8c8 != 0) {
      FUN_004239e0();
    }
  }
  else {
    fVar6 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cea60 + iVar4) = (float)(fVar6 + (float10)*(float *)(&DAT_005cea60 + iVar4));
  }
  piVar1 = (int *)(&DAT_005ceab4)[param_1 * 0xa5];
  piVar5 = piVar1;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Pointer_to_state_transi_00591944);
  }
  while ((*piVar5 != (&DAT_005ce9ec)[param_1 * 0xa5] ||
         (iVar2 = (*(code *)piVar5[3])(param_1), piVar5[2] != iVar2))) {
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 4;
    if (0x3f < iVar3) {
LAB_0040d5a6:
      fVar6 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005ce9f4 + iVar4) =
           (float)(fVar6 + (float10)*(float *)(&DAT_005ce9f4 + iVar4));
      return;
    }
  }
  iVar2 = piVar1[iVar3 * 4 + 1];
  if (iVar2 == 999) {
    iVar2 = *(int *)(&DAT_005ce9f0 + iVar4);
  }
  FUN_0040d470(&DAT_005ce9e8 + param_1 * 0xa5,iVar2);
  goto LAB_0040d5a6;
}


