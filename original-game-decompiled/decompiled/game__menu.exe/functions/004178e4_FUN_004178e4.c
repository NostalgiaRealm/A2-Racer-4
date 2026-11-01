
/* ==== FUN_004178e4 @ 004178e4 ==== 
 * signature: undefined __register FUN_004178e4(int param_1)
 * body: 004178e4-00417942
 */

void FUN_004178e4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x4178f5;
  FUN_00417654(param_1);
  pcStack_18 = thunk_FUN_004036bc;
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
  pcStack_14 = FUN_0041794a;
  pcStack_18 = (code *)0x417942;
  FUN_00417660(param_1);
  return;
}


