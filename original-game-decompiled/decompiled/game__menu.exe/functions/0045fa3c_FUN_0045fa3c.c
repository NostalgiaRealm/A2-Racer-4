
/* ==== FUN_0045fa3c @ 0045fa3c ==== 
 * signature: undefined __register FUN_0045fa3c(uint param_1, int param_2, byte param_3, int param_4)
 * body: 0045fa3c-0045fb15
 */

void FUN_0045fa3c(uint param_1,int param_2,byte param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_3c;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  int local_14 [2];
  byte local_9;
  int local_8;
  
  local_14[0] = 0;
  local_14[1] = 0;
  for (iVar3 = param_4 * 2 + 1; -1 < iVar3; iVar3 = iVar3 + -1) {
  }
  puStack_24 = (undefined1 *)0x45fa74;
  local_9 = param_3;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  if (param_1 == 0) {
    puStack_24 = &stack0xfffffffc;
    FUN_00403c40(" Self = nil: TDebug.InProc");
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_0045f834((int)&stack0xffffffe0,param_4);
    if ((local_9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puStack_3c = &DAT_0045fb8c;
    FUN_00403f9c(local_14,4);
    uVar2 = FUN_0045f668(param_1,0x49,local_14[0]);
    if ((local_9 & 2) == 0) {
      piVar1 = (int *)(param_1 + 0x10);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar3,1)) {
        thunk_FUN_00402808(uVar2);
      }
    }
  }
  *in_FS_OFFSET = puStack_3c;
  FUN_00403c80(local_14,2);
  FUN_00403c5c(&local_8);
  return;
}


