
/* ==== FUN_00533c70 @ 00533c70 ==== 
 * signature: undefined __cdecl FUN_00533c70(undefined4 * param_1, undefined4 * param_2)
 * body: 00533c70-00533ce8
 */

void __cdecl FUN_00533c70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  puVar1 = param_2;
  if (0 < DAT_0074c03c) {
    do {
      if (DAT_0074c03c == 4) {
        if (iVar4 != DAT_0074be48) {
LAB_00533c9f:
          *puVar1 = *param_1;
          puVar1[1] = param_1[1];
          goto LAB_00533ca9;
        }
      }
      else {
        if (iVar4 != DAT_0074be48) goto LAB_00533c9f;
        *puVar1 = 0;
        puVar1[1] = 0;
LAB_00533ca9:
        iVar3 = iVar3 + 1;
        puVar1 = puVar1 + 2;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 2;
    } while (iVar4 < DAT_0074c03c);
    if (2 < iVar3) {
      return;
    }
  }
  puVar1 = param_2 + iVar3 * 2;
  for (uVar2 = (3 - iVar3) * 2 & 0x3ffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}


