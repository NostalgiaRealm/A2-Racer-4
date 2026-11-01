
/* ==== FUN_0042c5e0 @ 0042c5e0 ==== 
 * signature: uint __register FUN_0042c5e0(int param_1, undefined4 param_2)
 * body: 0042c5e0-0042c650;0042c658-0042c660
 */

uint FUN_0042c5e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  undefined1 local_5;
  
  local_c = (int *)0x0;
  uVar1 = *(uint *)(param_1 + 0x1c);
  puStack_1c = (undefined1 *)0x42c607;
  uVar2 = FUN_00402ef0(*(int **)(uVar1 + 0x14),param_2,&local_c);
  local_5 = local_c != (int *)0x0;
  if ((bool)local_5) {
    *(int *)(uVar1 + 0x38) = param_1;
    pcStack_20 = thunk_FUN_00403434;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    uVar3 = 0;
    puStack_1c = &stack0xfffffffc;
    FUN_00425318(local_c,*(int **)(uVar1 + 0x14),0,0);
    *in_FS_OFFSET = uVar3;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    return uVar1;
  }
  return uVar2 & 0xffffff00;
}


