
/* ==== FUN_004119b8 @ 004119b8 ==== 
 * signature: undefined __register FUN_004119b8(int * param_1)
 * body: 004119b8-00411aae;00411ab6-00411acb
 */

void FUN_004119b8(int *param_1)

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
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar5 = param_1[0xc];
  local_8 = param_1;
  if (iVar5 == 0) {
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_00411ad3;
    pcStack_24 = (code *)0x411acb;
    FUN_004039b8((int *)&local_c);
    return;
  }
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = *(int *)(iVar5 + 8);
  if (-1 < local_10 + -1) {
    iVar5 = 0;
    pcStack_20 = (code *)&stack0xfffffffc;
    do {
      iVar2 = FUN_0040f024((undefined4 *)local_8[0xc],iVar5);
      FUN_00403a50((int *)&local_c,*(int *)(iVar2 + 0x14));
      (**(code **)(*local_8 + 0x20))(local_8,&local_c);
      iVar3 = FUN_004112b4(*(int *)(iVar2 + 8),local_c);
      iVar4 = FUN_0040f024((undefined4 *)local_8[0xc],iVar5);
      FUN_0041193c(iVar4);
      if (iVar3 == 0) {
        bVar1 = FUN_0041126c(iVar2);
        if (!bVar1) goto LAB_00411a82;
        iVar2 = FUN_0040f024((undefined4 *)local_8[0xc],iVar5);
        FUN_0040f304(DAT_00447628,iVar2);
        FUN_0040f118((int *)local_8[0xc],iVar5,0);
      }
      else {
LAB_00411a82:
        FUN_0040cf54(*(int **)(iVar2 + 4),*(undefined4 **)(iVar2 + 0xc),iVar3);
      }
      iVar5 = iVar5 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x411ab6;
  pcStack_30 = (code *)0x411aae;
  FUN_00411afc((int)local_8);
  return;
}


