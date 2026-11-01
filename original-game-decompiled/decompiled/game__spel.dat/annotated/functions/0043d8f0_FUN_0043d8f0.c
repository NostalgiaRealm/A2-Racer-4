
/* ==== FUN_0043d8f0 @ 0043d8f0 ==== 
 * signature: undefined __cdecl FUN_0043d8f0(int param_1)
 * body: 0043d8f0-0043d94e
 */

void __cdecl FUN_0043d8f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (DAT_006c4120 >> 0x18) / (uint)(&DAT_006c4320)[param_1 * 0x4b];
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar1 = *(uint *)(&DAT_006c4258 + param_1 * 300);
  iVar3 = (uVar1 >> 0x18) - uVar2;
  if (iVar3 == 0) {
    iVar3 = 1;
    (&DAT_006c4330)[param_1 * 0x4b] = 0;
  }
  *(uint *)(&DAT_006c4258 + param_1 * 300) = uVar1 & 0xffffff | iVar3 << 0x18;
  return;
}


