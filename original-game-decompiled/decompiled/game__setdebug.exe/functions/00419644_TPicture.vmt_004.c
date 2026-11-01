
/* ==== TPicture.vmt_004 @ 00419644 ==== 
 * signature: undefined __register TPicture.vmt_004(undefined4 param_1, int * param_2)
 * body: 00419644-0041967d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPicture_vmt_004(undefined4 param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_00419454;
  pcVar2 = FUN_0041956c;
  uVar4 = param_1;
  bVar1 = FUN_004195c8();
  (**(code **)(*param_2 + 8))(param_2,&DAT_00419688,bVar1,pcVar2,param_1,pcVar3,uVar4);
  return;
}


