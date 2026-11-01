
/* ==== TMetafile.vmt_044 @ 0041c82c ==== 
 * signature: undefined __register TMetafile.vmt_044(int param_1, int * param_2)
 * body: 0041c82c-0041c8ac
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
    local_10 = FUN_00412664(param_2);
    local_10 = local_10 + -4;
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041c93c(param_1,param_2);
    }
    else {
      FUN_0041c8b0(param_1,param_2);
    }
    (**(code **)(*param_2 + 0xc))(param_2,local_10,0);
    iVar1 = FUN_00412680(param_2);
    local_10 = iVar1 - local_10;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    (**(code **)(*param_2 + 0xc))(param_2,0,CONCAT22(extraout_var,2));
  }
  return;
}


