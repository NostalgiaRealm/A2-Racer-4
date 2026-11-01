
/* ==== TCustomForm.dyn_ffd6 @ 00448960 ==== 
 * signature: undefined TCustomForm.dyn_ffd6(void)
 * body: 00448960-00448a09
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TCustomForm_dyn_ffd6(int *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  undefined3 uVar4;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
  int *piVar6;
  undefined1 uStack_1b;
  undefined4 uStack_18;
  
  uStack_1b = 0;
  piVar1 = FUN_004473f4((int)param_1);
  if (piVar1 != (int *)0x0) {
    uStack_1b = FUN_00403178(piVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),extraout_ECX);
  }
  piVar2 = (int *)FUN_00447428((int)param_1);
  uVar3 = extraout_ECX_00;
  uVar5 = extraout_EDX_00;
  if (-1 < (int)piVar2 + -1) {
    uStack_18 = 0;
    piVar6 = piVar2;
    do {
      uVar4 = (undefined3)((uint)piVar2 >> 8);
      if ((param_2 & uStack_1b) != 0) goto LAB_004489fe;
      piVar2 = (int *)FUN_00447474((int)param_1,uStack_18);
      uVar3 = extraout_ECX_01;
      uVar5 = extraout_EDX_01;
      if (piVar2 != piVar1) {
        uVar3 = FUN_00403178(piVar2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),param_2),
                             extraout_ECX_01);
        uStack_1b = (byte)uVar3 | uStack_1b;
        piVar2 = (int *)CONCAT31((int3)((uint)uVar3 >> 8),uStack_1b);
        uVar3 = extraout_ECX_02;
        uVar5 = extraout_EDX_02;
      }
      uStack_18 = uStack_18 + 1;
      piVar6 = (int *)((int)piVar6 + -1);
    } while (piVar6 != (int *)0x0);
  }
  uVar4 = (undefined3)((uint)piVar2 >> 8);
  if ((param_2 & uStack_1b) == 0) {
    uStack_1b = TWinControl_dyn_ffd6(param_1,CONCAT31((int3)((uint)uVar5 >> 8),param_2),uVar3);
    uVar4 = extraout_var;
  }
LAB_004489fe:
  return CONCAT31(uVar4,uStack_1b);
}


