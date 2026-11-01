
/* ==== FUN_004f6fe0 @ 004f6fe0 ==== 
 * signature: undefined __fastcall FUN_004f6fe0(int param_1)
 * body: 004f6fe0-004f704e
 */

void __fastcall FUN_004f6fe0(int param_1)

{
  uint *puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x106);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar1 = *(uint **)(*(int *)(param_1 + 0x108) + uVar3 * 4);
    FUN_004f5390((byte *)puVar1);
    *puVar1 = *puVar1 & 0xffffffcf;
  }
  pvVar2 = *(LPVOID *)(param_1 + 0x108);
  if (pvVar2 == (LPVOID)(param_1 + 0x10c)) {
    *(undefined2 *)(param_1 + 0x106) = 0;
    return;
  }
  if (pvVar2 != (LPVOID)0x0) {
    FUN_00559d4e(pvVar2);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined2 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x106) = 0;
  return;
}


