
/* ==== TObjectList.vmt_028 @ 00451bec ==== 
 * signature: undefined TObjectList.vmt_028(void)
 * body: 00451bec-00451c0a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TObjectList_vmt_028(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  return uVar1;
}


