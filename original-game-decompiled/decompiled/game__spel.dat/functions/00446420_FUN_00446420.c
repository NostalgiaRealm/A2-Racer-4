
/* ==== FUN_00446420 @ 00446420 ==== 
 * signature: undefined __cdecl FUN_00446420(int param_1)
 * body: 00446420-004464ca
 */

void __cdecl FUN_00446420(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_004463c0(param_1);
  iVar2 = *(int *)(&DAT_006f51ac + iVar2 * 300) % 5;
  if (2 < iVar2) {
    iVar2 = 4 - iVar2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (2 < iVar2) {
    iVar2 = 2;
  }
  iVar4 = 0;
  puVar5 = &DAT_0059d964 + iVar2 * 0xc;
  do {
    iVar2 = FUN_004463c0(param_1);
    iVar3 = FUN_004463f0(iVar4);
    *(undefined4 *)(&DAT_006f50e8 + iVar2 * 300 + iVar3 * 0x20) = puVar5[-1];
    iVar2 = FUN_004463c0(param_1);
    iVar3 = FUN_004463f0(iVar4);
    uVar1 = *puVar5;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 2;
    *(undefined4 *)(&DAT_006f50ec + iVar2 * 300 + iVar3 * 0x20) = uVar1;
  } while (iVar4 < 6);
  return;
}


