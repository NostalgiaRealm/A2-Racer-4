
/* ==== TContainedAction.dyn_fff0 @ 00439708 ==== 
 * signature: undefined TContainedAction.dyn_fff0(void)
 * body: 00439708-0043975c
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
       (cVar1 = FUN_00403178(*(int **)(param_1 + 0x4c),param_1,param_3), param_3 = extraout_ECX,
       cVar1 == '\0')) &&
      (uVar2 = FUN_0044e44c(*(int *)PTR_DAT_004ab8ac,param_1,param_3), (char)uVar2 == '\0')) &&
     ((uVar3 = TBasicAction_dyn_fff0(param_1), (char)uVar3 == '\0' &&
      (LVar4 = FUN_0042b968(0xb040,0,param_1), LVar4 != 1)))) {
    return 0;
  }
  return 1;
}


