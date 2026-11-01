
/* ==== FUN_00470644 @ 00470644 ==== 
 * signature: undefined __register FUN_00470644(int * param_1, int param_2, undefined4 param_3)
 * body: 00470644-00470708;00470710-00470725
 */

void FUN_00470644(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  local_14 = 0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[0x8c] == '\0') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    pcStack_34 = thunk_FUN_004036bc;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    iVar3 = *(int *)(param_1[0x8b] + 8);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        if (*(int *)(*(int *)(local_8[0x7c] + 0x40) + iVar2 * 4) == local_c) {
          piVar1 = (int *)FUN_004102b0((undefined4 *)local_8[0x8b],iVar2);
          (**(code **)(*piVar1 + 8))(piVar1,local_10);
          FUN_0046d5ac(piVar1,&local_14);
          FUN_0047044c(local_8,local_c,local_14);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *in_FS_OFFSET = uStack_38;
    *(undefined1 *)(local_8 + 0x8c) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0047072d;
  pcStack_28 = (code *)0x470725;
  FUN_00405860(&local_14);
  return;
}


