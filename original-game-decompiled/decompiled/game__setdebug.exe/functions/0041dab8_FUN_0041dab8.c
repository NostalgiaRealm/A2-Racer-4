
/* ==== FUN_0041dab8 @ 0041dab8 ==== 
 * signature: undefined FUN_0041dab8(void)
 * body: 0041dab8-0041db6e
 */

undefined4 FUN_0041dab8(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int in_stack_00000004;
  uint *in_stack_00000008;
  uint auStack_14 [4];
  
  bVar7 = 0;
  if (DAT_004476dc == '\0') {
    DAT_004476c8 = (code *)FUN_0041d5d8(4,DAT_004476c8,"GetMonitorInfo");
    uVar1 = (*DAT_004476c8)();
  }
  else {
    uVar1 = 0;
    if (((in_stack_00000004 == 0x12340042) && (in_stack_00000008 != (uint *)0x0)) &&
       (0x27 < *in_stack_00000008)) {
      BVar2 = SystemParametersInfoA(0x30,0,auStack_14,0);
      if (BVar2 != 0) {
        in_stack_00000008[1] = 0;
        in_stack_00000008[2] = 0;
        uVar3 = (*DAT_004476b0)();
        in_stack_00000008[3] = uVar3;
        uVar3 = (*DAT_004476b0)();
        in_stack_00000008[4] = uVar3;
        puVar5 = auStack_14;
        puVar6 = in_stack_00000008 + 5;
        for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        in_stack_00000008[9] = 1;
        if (0x4b < *in_stack_00000008) {
          lstrcpyA((LPSTR)(in_stack_00000008 + 10),"DISPLAY");
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


