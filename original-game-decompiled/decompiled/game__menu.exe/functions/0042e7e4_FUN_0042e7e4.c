
/* ==== FUN_0042e7e4 @ 0042e7e4 ==== 
 * signature: undefined __register FUN_0042e7e4(int param_1)
 * body: 0042e7e4-0042e81f
 */

void FUN_0042e7e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  iVar1 = TFont_get_Height(*(int *)(param_1 + 0x58));
  if (iVar1 != *(int *)(param_1 + 0x74)) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x10;
    uVar2 = TFont_get_Height(*(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
  }
  FUN_0042f720(param_1,0xb00e,0,0);
  return;
}


