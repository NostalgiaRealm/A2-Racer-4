
/* ==== TStrings.vmt_038 @ 0040f830 ==== 
 * signature: undefined TStrings.vmt_038(void)
 * body: 0040f830-0040f850
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStrings_vmt_038(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x24))(param_1,uVar1,param_3);
  return uVar1;
}


