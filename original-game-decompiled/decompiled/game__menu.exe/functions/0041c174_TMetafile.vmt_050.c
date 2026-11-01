
/* ==== TMetafile.vmt_050 @ 0041c174 ==== 
 * signature: undefined TMetafile.vmt_050(void)
 * body: 0041c174-0041c1c7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_050(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0041c748(param_1,param_2);
  if ((char)uVar1 == '\0') {
    iVar3 = FUN_00412680(param_2);
    iVar2 = FUN_00412664(param_2);
    FUN_0041c32c((int)param_1,param_2,iVar3 - iVar2);
  }
  else {
    FUN_0041c25c((int)param_1,param_2);
  }
  iVar3 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar3 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


