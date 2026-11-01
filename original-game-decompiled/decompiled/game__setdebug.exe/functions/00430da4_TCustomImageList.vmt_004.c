
/* ==== TCustomImageList.vmt_004 @ 00430da4 ==== 
 * signature: undefined TCustomImageList.vmt_004(void)
 * body: 00430da4-00430de8
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
  pcVar3 = FUN_00431110;
  pcVar2 = FUN_00431198;
  iVar4 = param_1;
  bVar1 = FUN_00430d48();
  (**(code **)(*param_2 + 8))(param_2,"Bitmap",bVar1,pcVar2,param_1,pcVar3,iVar4);
  return;
}


