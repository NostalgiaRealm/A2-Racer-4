
/* ==== FUN_00415c5c @ 00415c5c ==== 
 * signature: undefined __register FUN_00415c5c(int param_1)
 * body: 00415c5c-00415cba
 */

void FUN_00415c5c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x415c6d;
  FUN_004159cc(param_1);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (((HGDIOBJ)puVar1[2] != (HGDIOBJ)0x0) && ((int)puVar1[5] < 0)) {
      DeleteObject((HGDIOBJ)puVar1[2]);
      puVar1[2] = 0;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00415cc2;
  pcStack_18 = (code *)0x415cba;
  FUN_004159d8(param_1);
  return;
}


