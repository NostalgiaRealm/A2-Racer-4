
/* ==== TContainedAction.dyn_fff0 @ 0042f518 ==== 
 * signature: undefined TContainedAction.dyn_fff0(void)
 * body: 0042f518-0042f56c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TContainedAction_dyn_fff0(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  uint extraout_ECX;
  
  if ((((*(int **)(param_1 + 0x4c) == (int *)0x0) ||
       (cVar1 = FUN_00402ef0(*(int **)(param_1 + 0x4c),param_1,param_3), param_3 = extraout_ECX,
       cVar1 == '\0')) &&
      (uVar2 = FUN_004432c0(*(int *)PTR_DAT_00446c80,param_1,param_3), (char)uVar2 == '\0')) &&
     ((uVar3 = TBasicAction_dyn_fff0(param_1), (char)uVar3 == '\0' &&
      (LVar4 = FUN_00421a28(0xb040,0,param_1), LVar4 != 1)))) {
    return 0;
  }
  return 1;
}


