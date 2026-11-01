
/* ==== TPicture.vmt_004 @ 0041b960 ==== 
 * signature: undefined __register TPicture.vmt_004(undefined4 param_1, int * param_2)
 * body: 0041b960-0041b999
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPicture_vmt_004(undefined4 param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_0041b770;
  pcVar2 = FUN_0041b888;
  uVar4 = param_1;
  bVar1 = FUN_0041b8e4();
  (**(code **)(*param_2 + 8))(param_2,&DAT_0041b9a4,bVar1,pcVar2,param_1,pcVar3,uVar4);
  return;
}


