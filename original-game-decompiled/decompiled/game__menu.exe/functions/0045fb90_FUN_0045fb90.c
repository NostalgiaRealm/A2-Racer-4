
/* ==== FUN_0045fb90 @ 0045fb90 ==== 
 * signature: undefined __register FUN_0045fb90(uint param_1, undefined4 * param_2, byte param_3)
 * body: 0045fb90-0045fc1b
 */

void FUN_0045fb90(uint param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *local_8;
  
  pcStack_14 = (code *)0x45fba7;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  if (param_1 == 0) {
    pcStack_14 = (code *)&stack0xfffffffc;
    FUN_00403c40(" Self = nil: TDebug.InProc");
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    if ((param_3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_0045f668(param_1,0x49,(int)local_8);
    if ((param_3 & 2) == 0) {
      uVar3 = FUN_00403cb0((int *)(param_1 + 8),local_8);
      piVar1 = (int *)(param_1 + 0x10);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_00402808(uVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0045fc23;
  pcStack_18 = (code *)0x45fc1b;
  FUN_00403c5c((int *)&local_8);
  return;
}


