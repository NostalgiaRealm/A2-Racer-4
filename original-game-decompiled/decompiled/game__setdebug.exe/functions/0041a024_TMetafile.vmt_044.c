
/* ==== TMetafile.vmt_044 @ 0041a024 ==== 
 * signature: undefined __register TMetafile.vmt_044(int param_1, int * param_2)
 * body: 0041a024-0041a0a4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_044(int param_1,int *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  int local_10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    local_10 = 0;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    local_10 = FUN_00410ad4(param_2);
    local_10 = local_10 + -4;
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041a134(param_1,param_2);
    }
    else {
      FUN_0041a0a8(param_1,param_2);
    }
    (**(code **)(*param_2 + 0xc))(param_2,local_10,0);
    iVar1 = FUN_00410af0(param_2);
    local_10 = iVar1 - local_10;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    (**(code **)(*param_2 + 0xc))(param_2,0,CONCAT22(extraout_var,2));
  }
  return;
}


