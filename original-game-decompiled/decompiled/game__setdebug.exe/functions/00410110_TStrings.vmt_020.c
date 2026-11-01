
/* ==== TStrings.vmt_020 @ 00410110 ==== 
 * signature: undefined __register TStrings.vmt_020(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00410110-0041013e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_020(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  FUN_0040ff30(param_1,param_2,param_3,uVar1);
  return;
}


