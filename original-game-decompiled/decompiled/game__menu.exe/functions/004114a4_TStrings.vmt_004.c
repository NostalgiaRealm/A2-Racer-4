
/* ==== TStrings.vmt_004 @ 004114a4 ==== 
 * signature: undefined TStrings.vmt_004(void)
 * body: 004114a4-004114dd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_004(undefined4 param_1,int *param_2)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_00411cd4;
  pcVar2 = FUN_00412028;
  uVar4 = param_1;
  bVar1 = FUN_0041144c();
  (**(code **)(*param_2 + 4))(param_2,"Strings",bVar1,pcVar2,param_1,pcVar3,uVar4);
  return;
}


