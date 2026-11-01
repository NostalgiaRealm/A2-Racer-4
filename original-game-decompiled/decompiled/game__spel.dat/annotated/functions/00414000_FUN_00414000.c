
/* ==== FUN_00414000 @ 00414000 ==== 
 * signature: uint __cdecl FUN_00414000(int param_1)
 * body: 00414000-00414061
 */

uint __cdecl FUN_00414000(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_005d1ba8 != param_1) {
    puVar2 = &DAT_005d1ba8;
    do {
      if (0x5d2697 < (int)puVar2) break;
      piVar1 = puVar2 + 0xe;
      puVar2 = puVar2 + 0xe;
      iVar3 = iVar3 + 1;
    } while (*piVar1 != param_1);
    if (iVar3 == 0x32) {
      return (uint)puVar2 & 0xffffff00;
    }
  }
  (&DAT_005d1ba8)[iVar3 * 0xe] = 0xffffffff;
  (&DAT_005d1bac)[iVar3 * 0xe] = 0xffffffff;
  (&DAT_005d1bb8)[iVar3 * 0xe] = 0;
  (&DAT_005d1bc0)[iVar3 * 0xe] = 0;
  return CONCAT31((int3)((uint)(iVar3 * 0x38) >> 8),1);
}


