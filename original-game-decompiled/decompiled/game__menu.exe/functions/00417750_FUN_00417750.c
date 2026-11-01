
/* ==== FUN_00417750 @ 00417750 ==== 
 * signature: undefined __register FUN_00417750(int param_1, undefined4 * param_2)
 * body: 00417750-004177d6;004177fc-004177ff
 */

void FUN_00417750(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 *local_14;
  undefined1 local_d;
  undefined4 *local_c;
  int local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puStack_18 = (undefined *)0x417774;
  local_14 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_00417654(param_1);
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_14[1] = local_14[1] + -1;
  local_d = local_14[1] == 0;
  if ((bool)local_d) {
    puVar1 = *(undefined4 **)(local_8 + 4);
    if (*(undefined4 **)(local_8 + 4) == local_c) {
      *(undefined4 *)(local_8 + 4) = *local_c;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = (undefined4 *)*puVar2;
      } while (puVar1 != local_c);
      *puVar2 = *local_c;
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &DAT_004177de;
  uStack_1c = 0x4177d6;
  FUN_00417660(local_8);
  return;
}


