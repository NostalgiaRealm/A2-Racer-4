
/* ==== FUN_00549d70 @ 00549d70 ==== 
 * signature: float10 __fastcall FUN_00549d70(int param_1)
 * body: 00549d70-00549da4
 */

float10 __fastcall FUN_00549d70(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)0.0;
  uVar2 = (uint)*(ushort *)(param_1 + 0x26);
  if (-1 < (int)(uVar2 - 1)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + (uVar2 - 1) * 4);
    do {
      if ((*(byte *)*puVar1 & 0xc) == 0) {
        fVar3 = (float10)*(float *)((byte *)*puVar1 + 0x20) * (float10)9.81 *
                (float10)0.10000000149011612 + fVar3;
      }
      puVar1 = puVar1 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return fVar3;
}


