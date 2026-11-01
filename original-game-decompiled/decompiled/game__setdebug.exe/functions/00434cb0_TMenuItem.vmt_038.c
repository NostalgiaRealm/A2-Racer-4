
/* ==== TMenuItem.vmt_038 @ 00434cb0 ==== 
 * signature: undefined TMenuItem.vmt_038(void)
 * body: 00434cb0-00434ce8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_038(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x58) == 0) &&
     (uVar1 = FUN_00402e8c(*(int **)(param_1 + 4),(int)&PTR_TPersistent_vmt_000_00431a24),
     (char)uVar1 != '\0')) {
    iVar2 = 0;
  }
  if (*(short *)(param_1 + 0x7a) != 0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x7c),param_1,iVar2,param_2);
  }
  return;
}


