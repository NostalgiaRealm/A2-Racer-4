
/* ==== TCustomForm.dyn_ffd6 @ 0043dfb0 ==== 
 * signature: undefined TCustomForm.dyn_ffd6(void)
 * body: 0043dfb0-0043e059
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TCustomForm_dyn_ffd6(int param_1,byte param_2)

{
  byte extraout_AL;
  int *piVar1;
  int *piVar2;
  undefined3 uVar4;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar5;
  undefined1 uStack_1b;
  undefined4 uStack_18;
  
  uStack_1b = 0;
  piVar1 = FUN_0043ca44(param_1);
  if (piVar1 != (int *)0x0) {
    uStack_1b = FUN_00402ef0(piVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),extraout_ECX);
  }
  piVar2 = (int *)FUN_0043ca78(param_1);
  if (-1 < (int)piVar2 + -1) {
    uStack_18 = 0;
    piVar5 = piVar2;
    do {
      uVar4 = (undefined3)((uint)piVar2 >> 8);
      if ((param_2 & uStack_1b) != 0) goto LAB_0043e04e;
      piVar2 = (int *)FUN_0043cac4(param_1,uStack_18);
      if (piVar2 != piVar1) {
        uVar3 = FUN_00402ef0(piVar2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),param_2),
                             extraout_ECX_00);
        uStack_1b = (byte)uVar3 | uStack_1b;
        piVar2 = (int *)CONCAT31((int3)((uint)uVar3 >> 8),uStack_1b);
      }
      uStack_18 = uStack_18 + 1;
      piVar5 = (int *)((int)piVar5 + -1);
    } while (piVar5 != (int *)0x0);
  }
  uVar4 = (undefined3)((uint)piVar2 >> 8);
  if ((param_2 & uStack_1b) == 0) {
    TWinControl_dyn_ffd6(param_1,param_2);
    uVar4 = extraout_var;
    uStack_1b = extraout_AL;
  }
LAB_0043e04e:
  return CONCAT31(uVar4,uStack_1b);
}


