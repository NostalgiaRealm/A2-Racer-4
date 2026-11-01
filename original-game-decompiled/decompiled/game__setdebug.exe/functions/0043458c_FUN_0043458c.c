
/* ==== FUN_0043458c @ 0043458c ==== 
 * signature: undefined __register FUN_0043458c(int * param_1, int * param_2, int * param_3, int * param_4)
 * body: 0043458c-0043476d
 */

void FUN_0043458c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint *in_FS_OFFSET;
  bool bVar8;
  undefined1 uVar9;
  uint uStack_40;
  code *pcStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_28;
  tagRECT local_24;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_28 = (undefined4 *)0x0;
  local_14 = 0;
  pcStack_3c = thunk_FUN_00403434;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_40;
  local_c = param_2;
  local_8 = param_3;
  piVar3 = (int *)FUN_00402ef0(param_1,param_2,param_3);
  uVar4 = FUN_00402e8c(piVar3,(int)&PTR_TPersistent_vmt_000_00431b18);
  bVar8 = (char)uVar4 == '\0';
  if (bVar8) {
    uVar9 = 1;
  }
  else {
    uVar9 = bVar8;
    FUN_00434540();
  }
  bVar8 = !bVar8;
  iVar5 = thunk_FUN_00434ea8((int)param_1);
  local_10 = FUN_00434510((int)param_1);
  FUN_00403d48((uint *)param_1[9],(uint *)FUN_00434788);
  if ((bool)uVar9) {
    *param_4 = 5;
    *local_8 = -2;
    bVar1 = false;
  }
  else if ((local_10 == 0) || ((0x7fffffff < (uint)param_1[0xd] && (bVar8)))) {
    if ((param_1[0x10] == 0) ||
       (cVar2 = (**(code **)(*(int *)param_1[0x10] + 0x1c))(), cVar2 != '\0')) {
      *local_8 = -7;
      bVar1 = false;
    }
    else {
      *local_8 = 0x10;
      if (!bVar8) {
        *param_4 = 0x10;
      }
      bVar1 = true;
    }
  }
  else {
    *local_8 = *(int *)(local_10 + 0x28);
    if (!bVar8) {
      *param_4 = *(int *)(local_10 + 0x24);
    }
    bVar1 = true;
  }
  if ((bVar1) && (!bVar8)) {
    *local_8 = *local_8 + 0xf;
  }
  if (!bVar8) {
    *param_4 = *param_4 + 3;
  }
  FUN_00402a2c(&local_24.left,0x10,0);
  if (iVar5 == 0) {
    uVar4 = FUN_00402e8c((int *)0x0,(int)&PTR_TPersistent_vmt_000_00431df0);
    bVar7 = bRam00000050;
    if ((char)uVar4 == '\0') {
      bVar7 = 0;
    }
  }
  else {
    bVar7 = 0;
  }
  if (*(ushort *)(param_1 + 0x15) == 0) {
    FUN_00403a50(&local_14,param_1[9]);
  }
  else {
    FUN_0043222c(*(ushort *)(param_1 + 0x15),(int *)&local_28);
    FUN_00403c84(&local_14,(undefined4 *)param_1[9],local_28);
  }
  uVar6 = (uint)(*(ushort *)(&DAT_00446844 + (uint)bVar7 * 2) | 0x560);
  FUN_00433078((int)param_1,local_c,local_14,uVar6,'\0',&local_24);
  *local_8 = *local_8 + (local_24.right - local_24.left) + 7;
  if (*(short *)((int)param_1 + 0x9a) != 0) {
    (*(code *)param_1[0x26])(param_1[0x27],param_1,local_c,param_4,local_8);
  }
  *in_FS_OFFSET = uVar6;
  FUN_004039b8((int *)&local_28);
  FUN_004039b8(&local_14);
  return;
}


