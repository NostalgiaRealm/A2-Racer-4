
/* ==== FUN_0043d7b0 @ 0043d7b0 ==== 
 * signature: undefined __cdecl FUN_0043d7b0(int param_1)
 * body: 0043d7b0-0043d81a
 */

void __cdecl FUN_0043d7b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(&DAT_006c4324)[param_1 * 0x4b] % 5;
  if (2 < iVar3) {
    iVar3 = 4 - iVar3;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (2 < iVar3) {
    iVar3 = 2;
  }
  puVar2 = (undefined4 *)(&DAT_006c4264 + param_1 * 300);
  iVar4 = 6;
  puVar1 = &DAT_0059bdb4 + iVar3 * 0xc;
  do {
    puVar2[-1] = puVar1[-1];
    *puVar2 = *puVar1;
    puVar2 = puVar2 + 8;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar4 != 0);
  return;
}


