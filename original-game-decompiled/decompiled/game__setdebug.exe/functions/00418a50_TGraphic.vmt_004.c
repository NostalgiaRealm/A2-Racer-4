
/* ==== TGraphic.vmt_004 @ 00418a50 ==== 
 * signature: undefined __register TGraphic.vmt_004(int * param_1, int * param_2)
 * body: 00418a50-00418a8b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGraphic_vmt_004(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = *(undefined4 *)(*param_1 + 0x30);
  uVar2 = *(undefined4 *)(*param_1 + 0x44);
  piVar4 = param_1;
  uVar1 = FUN_004189f8();
  (**(code **)(*param_2 + 8))(param_2,&DAT_00418a94,uVar1,uVar2,param_1,uVar3,piVar4);
  return;
}


