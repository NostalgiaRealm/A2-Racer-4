
/* ==== TMetafile.vmt_050 @ 004199fc ==== 
 * signature: undefined TMetafile.vmt_050(void)
 * body: 004199fc-00419a4f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_050(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00419f40(param_1,param_2);
  if ((char)uVar1 == '\0') {
    iVar3 = FUN_00410af0(param_2);
    iVar2 = FUN_00410ad4(param_2);
    FUN_00419bb4((int)param_1,param_2,iVar3 - iVar2);
  }
  else {
    FUN_00419ae4((int)param_1,param_2);
  }
  iVar3 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar3 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


