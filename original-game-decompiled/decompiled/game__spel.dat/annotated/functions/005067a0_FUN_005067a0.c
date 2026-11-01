
/* ==== FUN_005067a0 @ 005067a0 ==== 
 * signature: undefined __fastcall FUN_005067a0(int param_1)
 * body: 005067a0-00506871
 */

void __fastcall FUN_005067a0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  puVar1 = (uint *)(param_1 + 0x28);
  iVar3 = 0;
  iVar2 = 0;
  puVar4 = puVar1;
  do {
    if (*puVar4 == 1) {
      *(char *)(iVar3 + 0x183 + param_1) = (char)iVar2;
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 < 3);
  iVar2 = 0;
  puVar4 = puVar1;
  do {
    if (*puVar4 == 2) {
      *(char *)(iVar3 + 0x183 + param_1) = (char)iVar2;
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 < 3);
  iVar2 = 0;
  puVar4 = puVar1;
  do {
    if (*puVar4 == 0) {
      *(char *)(iVar3 + 0x183 + param_1) = (char)iVar2;
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 < 3);
  *(undefined1 *)(param_1 + 0x189) = 0;
  *(undefined1 *)(param_1 + 0x187) = 0;
  if (*puVar1 == 1) {
    *(undefined1 *)(param_1 + 0x187) = 1;
  }
  if ((*puVar1 & 2) != 0) {
    *(undefined1 *)(param_1 + 0x189) = 1;
  }
  if (*(uint *)(param_1 + 0x2c) == 1) {
    *(char *)(param_1 + 0x187) = *(char *)(param_1 + 0x187) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x2c) & 2) != 0) {
    *(char *)(param_1 + 0x189) = *(char *)(param_1 + 0x189) + '\x01';
  }
  if (*(uint *)(param_1 + 0x30) == 1) {
    *(char *)(param_1 + 0x187) = *(char *)(param_1 + 0x187) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x30) & 2) != 0) {
    *(char *)(param_1 + 0x189) = *(char *)(param_1 + 0x189) + '\x01';
  }
  *(char *)(param_1 + 0x18a) =
       *(char *)(param_1 + 0x188) + *(char *)(param_1 + 0x186) + *(char *)(param_1 + 0x189) +
       *(char *)(param_1 + 0x187);
  return;
}


