
/* ==== FUN_00411504 @ 00411504 ==== 
 * signature: undefined __register FUN_00411504(int * param_1, int * param_2)
 * body: 00411504-00411598
 */

void FUN_00411504(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  uint *local_18;
  uint *local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  pcStack_28 = (code *)&stack0xfffffffc;
  local_14 = (uint *)0x0;
  local_18 = (uint *)0x0;
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x14))();
  iVar3 = (**(code **)(*local_c + 0x14))();
  if (iVar2 == iVar3) {
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      uVar4 = true;
      do {
        (**(code **)(*local_8 + 0xc))(local_8,iVar3,&local_14);
        puVar1 = local_14;
        (**(code **)(*local_c + 0xc))(local_c,iVar3,&local_18);
        FUN_00403fec(puVar1,local_18);
        if (!(bool)uVar4) goto LAB_0041157e;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
        uVar4 = iVar2 == 0;
      } while (!(bool)uVar4);
    }
    local_d = 1;
  }
LAB_0041157e:
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_004115a0;
  pcStack_2c = (code *)0x411598;
  FUN_00403c80((int *)&local_18,2);
  return;
}


