
/* ==== TDataModule.vmt_004 @ 0044ac58 ==== 
 * signature: undefined TDataModule.vmt_004(void)
 * body: 0044ac58-0044ad16
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataModule_vmt_004(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  
  TComponent_vmt_004(param_1,param_2);
  pcVar6 = FUN_0044ae28;
  pcVar5 = FUN_0044ae60;
  iVar3 = param_1;
  iVar4 = param_1;
  bVar1 = FUN_0044ac30();
  (**(code **)(*param_2 + 4))(param_2,"Height",bVar1,pcVar5,iVar3,pcVar6,iVar4);
  pcVar6 = FUN_0044ae00;
  pcVar5 = FUN_0044ae48;
  iVar3 = param_1;
  iVar4 = param_1;
  uVar2 = FUN_0044abc8();
  (**(code **)(*param_2 + 4))(param_2,"HorizontalOffset",uVar2,pcVar5,iVar3,pcVar6,iVar4);
  pcVar6 = FUN_0044ae14;
  pcVar5 = FUN_0044ae54;
  iVar3 = param_1;
  iVar4 = param_1;
  uVar2 = FUN_0044abfc();
  (**(code **)(*param_2 + 4))(param_2,"VerticalOffset",uVar2,pcVar5,iVar3,pcVar6,iVar4);
  pcVar6 = FUN_0044adec;
  pcVar5 = FUN_0044ae3c;
  iVar3 = param_1;
  bVar1 = FUN_0044aba0();
  (**(code **)(*param_2 + 4))(param_2,"Width",bVar1,pcVar5,param_1,pcVar6,iVar3);
  return;
}


