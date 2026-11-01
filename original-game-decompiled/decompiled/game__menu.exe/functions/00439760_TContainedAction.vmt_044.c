
/* ==== TContainedAction.vmt_044 @ 00439760 ==== 
 * signature: undefined TContainedAction.vmt_044(void)
 * body: 00439760-004397b4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TContainedAction_vmt_044(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  uint extraout_ECX;
  
  if ((((*(int **)(param_1 + 0x4c) == (int *)0x0) ||
       (cVar1 = FUN_00403178(*(int **)(param_1 + 0x4c),param_1,param_3), param_3 = extraout_ECX,
       cVar1 == '\0')) &&
      (uVar2 = FUN_0044e474(*(int *)PTR_DAT_004ab8ac,param_1,param_3), (char)uVar2 == '\0')) &&
     ((uVar3 = TBasicAction_vmt_044(param_1), (char)uVar3 == '\0' &&
      (LVar4 = FUN_0042b968(0xb03f,0,param_1), LVar4 != 1)))) {
    return 0;
  }
  return 1;
}


