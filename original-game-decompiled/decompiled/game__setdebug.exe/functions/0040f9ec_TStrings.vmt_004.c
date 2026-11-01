
/* ==== TStrings.vmt_004 @ 0040f9ec ==== 
 * signature: undefined TStrings.vmt_004(void)
 * body: 0040f9ec-0040fa25
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_004(undefined4 param_1,int *param_2)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_00410144;
  pcVar2 = FUN_00410498;
  uVar4 = param_1;
  bVar1 = FUN_0040f994();
  (**(code **)(*param_2 + 4))(param_2,"Strings",bVar1,pcVar2,param_1,pcVar3,uVar4);
  return;
}


