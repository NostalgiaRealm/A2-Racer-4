
/* ==== TPicture.vmt_000 @ 0041b3c4 ==== 
 * signature: undefined TPicture.vmt_000(void)
 * body: 0041b3c4-0041b3f7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPicture_vmt_000(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00402ee0(param_2);
  uVar2 = FUN_00403114((int *)param_1[1],iVar1);
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_2 + 8))(param_2,param_1[1]);
    return;
  }
  TPersistent_vmt_000(param_1,param_2);
  return;
}


