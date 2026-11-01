
/* ==== TObjectList.vmt_018 @ 00451b3c ==== 
 * signature: undefined4 __register TObjectList.vmt_018(int * param_1)
 * body: 00451b3c-00451b5a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TObjectList_vmt_018(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x14))(param_1,uVar1);
  return uVar1;
}


