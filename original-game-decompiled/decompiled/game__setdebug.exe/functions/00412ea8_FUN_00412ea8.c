
/* ==== FUN_00412ea8 @ 00412ea8 ==== 
 * signature: undefined __register FUN_00412ea8(int * param_1, int * param_2)
 * body: 00412ea8-004130c2
 */

void FUN_00412ea8(int *param_1,int *param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EDI;
  int *in_FS_OFFSET;
  int iStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  int iStack_40;
  code *pcStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  code *local_30;
  undefined1 *local_2c;
  int local_28;
  code *local_24;
  undefined1 *local_20;
  int iVar4;
  int *local_10;
  
  local_20 = &stack0xfffffffc;
  iVar3 = 5;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_24 = thunk_FUN_00403434;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x412ed7;
  FUN_00413208((int)param_1,param_2,0);
  local_2c = (undefined1 *)0x412ee6;
  FUN_0040bc08(DAT_00447610);
  local_30 = thunk_FUN_00403434;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  pcStack_3c = thunk_FUN_00403180;
  iStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_40;
  pcStack_44 = (code *)0x412f10;
  puStack_38 = &stack0xfffffffc;
  local_2c = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x24))(param_1,&stack0xffffffeb,&stack0xffffffec);
  if (param_2 == (int *)0x0) {
    pcStack_44 = (code *)0x412f21;
    FUN_0041322c((int)param_1,(int *)&stack0xffffffe4,extraout_ECX);
    pcStack_44 = (code *)0x412f29;
    iVar3 = FUN_0040e70c(unaff_EDI);
    pcStack_44 = (code *)0x412f30;
    local_10 = (int *)(**(code **)(iVar3 + 0x2c))(iVar3,1,0);
    pcStack_44 = (code *)0x412f3e;
    FUN_0041322c((int)param_1,(int *)&local_20,extraout_ECX_00);
    pcStack_44 = (code *)0x412f49;
    (**(code **)(*local_10 + 0x18))(local_10,local_20);
  }
  else {
    pcStack_44 = (code *)0x412f5c;
    FUN_0041322c((int)param_1,(int *)&local_24,extraout_ECX);
    local_10 = param_2;
    if ((*(byte *)(param_2 + 8) & 0x10) == 0) {
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 1;
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 2;
      pcStack_44 = (code *)0x412f8d;
      FUN_0041322c((int)param_1,(int *)&local_30,extraout_ECX_01);
      pcStack_44 = (code *)0x412f98;
      FUN_00412e38((undefined4 *)local_30,(int *)&local_2c);
      pcStack_44 = (code *)0x412fa3;
      (**(code **)(*param_2 + 0x18))(param_2,local_2c);
    }
    else {
      pcStack_44 = (code *)0x412f70;
      FUN_0041322c((int)param_1,&local_28,extraout_ECX_01);
    }
  }
  param_1[6] = (int)local_10;
  param_1[7] = (int)local_10;
  pcStack_44 = (code *)0x412fba;
  pvVar1 = FUN_00405fa4();
  if (*(int *)((int)pvVar1 + 8) == 0) {
    pcStack_44 = (code *)0x412fe2;
    iVar3 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_02);
    param_1[0xd] = iVar3;
  }
  else {
    pcStack_44 = (code *)0x412fc8;
    pvVar1 = FUN_00405fa4();
    param_1[0xd] = *(int *)((int)pvVar1 + 8);
  }
  pcStack_48 = thunk_FUN_00403434;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  pcStack_44 = (code *)&stack0xfffffffc;
  iVar3 = FUN_0040f080(param_1[0xd],param_1[6]);
  if (iVar3 < 0) {
    FUN_0040eec8((int *)param_1[0xd],param_1[6]);
  }
  param_1[10] = param_1[6];
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) | 1;
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) | 2;
  (**(code **)(*(int *)param_1[6] + 0x14))((int *)param_1[6],param_1);
  *(ushort *)(param_1[6] + 0x20) = *(ushort *)(param_1[6] + 0x20) & 0xfffd;
  pvVar1 = FUN_00405fa4();
  if ((*(int *)((int)pvVar1 + 8) == 0) && (iVar3 = *(int *)(param_1[0xd] + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_0040f024((undefined4 *)param_1[0xd],iVar4);
      (**(code **)(*piVar2 + 0xc))();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = iStack_4c;
  pcStack_44 = FUN_004130ca;
  pcStack_48 = (code *)0x4130a6;
  pvVar1 = FUN_00405fa4();
  if (*(int *)((int)pvVar1 + 8) == 0) {
    pcStack_48 = (code *)0x4130ba;
    FUN_00402d14((int *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  return;
}


