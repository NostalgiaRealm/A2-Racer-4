
/* ==== FUN_00474634 @ 00474634 ==== 
 * signature: undefined __register FUN_00474634(int param_1)
 * body: 00474634-0047467a
 */

void FUN_00474634(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0xc + (uVar2 & 0x7f) * 4);
    if (uVar1 != 0xffffffff) {
      FUN_0047440c(*(int *)(param_1 + 8),uVar1);
    }
    *(undefined4 *)(param_1 + 0xc + (uVar2 & 0x7f) * 4) = 0xffffffff;
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\x04');
  FUN_00474518(DAT_004ab458,*(int **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


