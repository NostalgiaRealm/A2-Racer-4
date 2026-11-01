
/* ==== TMetafile.vmt_030 @ 0041c1f0 ==== 
 * signature: undefined __register TMetafile.vmt_030(int * param_1, int * param_2, int param_3)
 * body: 0041c1f0-0041c25a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_030(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_10;
  
  iStack_10 = param_3;
  (**(code **)(*param_2 + 4))(param_2,&iStack_10,4);
  if (iStack_10 < 5) {
    (**(code **)(*param_1 + 8))(param_1,0);
  }
  else {
    uVar1 = FUN_0041c748(param_1,param_2);
    if ((char)uVar1 == '\0') {
      FUN_0041c32c((int)param_1,param_2,iStack_10 + -4);
    }
    else {
      FUN_0041c25c((int)param_1,param_2);
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


