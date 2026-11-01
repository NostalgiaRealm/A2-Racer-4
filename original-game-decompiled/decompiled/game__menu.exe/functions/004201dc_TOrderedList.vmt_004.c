
/* ==== TOrderedList.vmt_004 @ 004201dc ==== 
 * signature: undefined TOrderedList.vmt_004(void)
 * body: 004201dc-004201f9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TOrderedList_vmt_004(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_00410150((int *)param_1[1],((int *)param_1[1])[2] + -1);
  return uVar1;
}


