
/* ==== FUN_00415359 @ 00415359 ==== 
 * signature: undefined4 __stdcall FUN_00415359(void)
 * body: 00415359-00415386
 */

undefined4 FUN_00415359(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  float10 in_ST0;
  float in_stack_00000010;
  float in_stack_00000028;
  
  while( true ) {
    if ((float10)in_stack_00000028 * (float10)in_stack_00000028 + in_ST0 * in_ST0 <
        (float10)in_stack_00000010) {
      return 1;
    }
    unaff_EBX = unaff_EBX + 1;
    if (unaff_EBP <= unaff_EBX) break;
    iVar3 = FUN_004a6d70(unaff_EDI,unaff_EBX,1);
    fVar1 = *(float *)(iVar3 * 0x50 + 8 + DAT_00715eb8);
    fVar2 = *(float *)(iVar3 * 0x50 + DAT_00715eb8 + 0x10);
    iVar3 = FUN_004641a0(unaff_ESI);
    in_stack_00000028 = fVar1 - *(float *)(&DAT_00709f24 + iVar3 * 0x340);
    iVar3 = FUN_004641a0(unaff_ESI);
    in_ST0 = (float10)fVar2 - (float10)*(float *)(&DAT_00709f2c + iVar3 * 0x340);
  }
  return 0;
}


