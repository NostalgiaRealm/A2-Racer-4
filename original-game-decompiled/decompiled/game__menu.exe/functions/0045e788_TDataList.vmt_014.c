
/* ==== TDataList.vmt_014 @ 0045e788 ==== 
 * signature: undefined __register TDataList.vmt_014(int param_1, int * param_2)
 * body: 0045e788-0045e7e0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataList_vmt_014(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  int *local_8;
  
  local_8 = param_2;
  FUN_0045e860(param_1);
  uVar1 = FUN_0045e350(local_8,&local_c);
  if (SBORROW4(local_c,1)) {
    thunk_FUN_00402808(uVar1);
  }
  iVar3 = local_c;
  if (-1 < local_c + -1) {
    do {
      piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 4))(*(int *)(param_1 + 8),1);
      (**(code **)(*piVar2 + 0x14))(piVar2,local_8);
      FUN_0045e7e4(param_1,piVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


