
/* ==== FUN_004a7844 @ 004a7844 ==== 
 * signature: undefined __register FUN_004a7844(uint param_1, int * param_2)
 * body: 004a7844-004a78ee
 */

void FUN_004a7844(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 **ppuVar3;
  uint extraout_EDX;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 *local_c;
  uint local_8;
  
  local_c = (undefined4 *)0x0;
  pcStack_1c = (code *)0x4a785f;
  local_8 = param_1;
  FUN_00404090(param_1);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_00403c5c(param_2);
  iVar1 = FUN_00403edc(local_8);
  if (0 < iVar1) {
    iVar4 = 1;
    do {
      uVar2 = local_8;
      if (*(uint *)(local_8 - 4) <= iVar4 - 1U) {
        uVar2 = thunk_FUN_00402808(local_8);
      }
      if (*(char *)((uVar2 - 1) + iVar4) == '@') {
        FUN_00403ee4(param_2,(undefined4 *)&DAT_004a7908);
      }
      else {
        ppuVar3 = &local_c;
        uVar2 = local_8;
        if (*(uint *)(local_8 - 4) <= iVar4 - 1U) {
          ppuVar3 = (undefined4 **)thunk_FUN_00402808((uint)ppuVar3);
          uVar2 = extraout_EDX;
        }
        FUN_00403e04((int *)ppuVar3,
                     CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)((uVar2 - 1) + iVar4)));
        FUN_00403ee4(param_2,local_c);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_004a78f6;
  pcStack_20 = (code *)0x4a78ee;
  FUN_00403c80((int *)&local_c,2);
  return;
}


