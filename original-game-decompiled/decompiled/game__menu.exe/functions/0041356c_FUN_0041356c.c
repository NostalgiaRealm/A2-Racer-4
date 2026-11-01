
/* ==== FUN_0041356c @ 0041356c ==== 
 * signature: undefined __register FUN_0041356c(int * param_1)
 * body: 0041356c-00413662;0041366a-0041367f
 */

void FUN_0041356c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  int local_10;
  char *local_c;
  int *local_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_c = (char *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar5 = param_1[0xc];
  local_8 = param_1;
  if (iVar5 == 0) {
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_00413687;
    pcStack_24 = (code *)0x41367f;
    FUN_00403c5c((int *)&local_c);
    return;
  }
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = *(int *)(iVar5 + 8);
  if (-1 < local_10 + -1) {
    iVar5 = 0;
    pcStack_20 = (code *)&stack0xfffffffc;
    do {
      iVar2 = FUN_004102b0((undefined4 *)local_8[0xc],iVar5);
      FUN_00403cf4((int *)&local_c,*(int *)(iVar2 + 0x14));
      (**(code **)(*local_8 + 0x20))(local_8,&local_c);
      iVar3 = FUN_00412e68(*(int *)(iVar2 + 8),local_c);
      iVar4 = FUN_004102b0((undefined4 *)local_8[0xc],iVar5);
      FUN_004134f0(iVar4);
      if (iVar3 == 0) {
        bVar1 = FUN_00412e20(iVar2);
        if (!bVar1) goto LAB_00413636;
        iVar2 = FUN_004102b0((undefined4 *)local_8[0xc],iVar5);
        FUN_004106c8(DAT_004ac630,iVar2);
        FUN_004103fc((int *)local_8[0xc],iVar5,0);
      }
      else {
LAB_00413636:
        FUN_0040dff4(*(int **)(iVar2 + 4),*(undefined4 **)(iVar2 + 0xc),iVar3);
      }
      iVar5 = iVar5 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x41366a;
  pcStack_30 = (code *)0x413662;
  FUN_004136b0((int)local_8);
  return;
}


