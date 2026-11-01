
/* ==== TStrings.vmt_034 @ 0040f80c ==== 
 * signature: undefined TStrings.vmt_034(void)
 * body: 0040f80c-0040f82c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStrings_vmt_034(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_1 + 0x54))(param_1,uVar1,param_2);
  return uVar1;
}


