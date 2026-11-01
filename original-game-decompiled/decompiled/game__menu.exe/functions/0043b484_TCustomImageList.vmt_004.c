
/* ==== TCustomImageList.vmt_004 @ 0043b484 ==== 
 * signature: undefined TCustomImageList.vmt_004(void)
 * body: 0043b484-0043b4c8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomImageList_vmt_004(int param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  
  TComponent_vmt_004(param_1,param_2);
  pcVar3 = FUN_0043b7f0;
  pcVar2 = FUN_0043b878;
  iVar4 = param_1;
  bVar1 = FUN_0043b428();
  (**(code **)(*param_2 + 8))(param_2,"Bitmap",bVar1,pcVar2,param_1,pcVar3,iVar4);
  return;
}


