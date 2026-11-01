
/* ==== FUN_0053e5e0 @ 0053e5e0 ==== 
 * signature: undefined __fastcall FUN_0053e5e0(int param_1)
 * body: 0053e5e0-0053e61d
 */

void __fastcall FUN_0053e5e0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x36);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar1 = *(undefined1 **)(*(int *)(param_1 + 0x38) + uVar3 * 4);
    iVar2 = *(int *)(puVar1 + 0x18);
    *(int *)(puVar1 + 0x18) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      FUN_0053e460(puVar1,*(void **)(*(int *)(param_1 + 4) + 0xb0));
      *(undefined4 *)(puVar1 + 0x18) = 5;
    }
  }
  return;
}


