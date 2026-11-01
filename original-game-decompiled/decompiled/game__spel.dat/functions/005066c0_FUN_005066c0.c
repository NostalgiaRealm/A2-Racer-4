
/* ==== FUN_005066c0 @ 005066c0 ==== 
 * signature: undefined __fastcall FUN_005066c0(int param_1)
 * body: 005066c0-0050679a
 */

void __fastcall FUN_005066c0(int param_1)

{
  uint *puVar1;
  short sVar2;
  uint *puVar3;
  short sVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  puVar1 = (uint *)(param_1 + 0x1c);
  sVar4 = 0;
  sVar2 = 0;
  puVar3 = puVar1;
  do {
    if (*puVar3 == 1) {
      iVar7 = (int)sVar4;
      sVar4 = sVar4 + 1;
      *(char *)(iVar7 + 0x180 + param_1) = (char)sVar2;
    }
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar2 < 3);
  puVar6 = (undefined1 *)(param_1 + 0x180);
  sVar2 = 0;
  puVar3 = puVar1;
  puVar5 = puVar6;
  do {
    if (*puVar3 == 2) {
      *puVar5 = (char)sVar2;
    }
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (sVar2 < 3);
  sVar2 = 0;
  puVar3 = puVar1;
  do {
    if (*puVar3 == 0) {
      *puVar6 = (char)sVar2;
    }
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (sVar2 < 3);
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x186) = 0;
  if (*puVar1 == 1) {
    *(undefined1 *)(param_1 + 0x186) = 1;
  }
  if ((*puVar1 & 2) != 0) {
    *(undefined1 *)(param_1 + 0x188) = 1;
  }
  if (*(uint *)(param_1 + 0x20) == 1) {
    *(char *)(param_1 + 0x186) = *(char *)(param_1 + 0x186) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x20) & 2) != 0) {
    *(char *)(param_1 + 0x188) = *(char *)(param_1 + 0x188) + '\x01';
  }
  if (*(uint *)(param_1 + 0x24) == 1) {
    *(char *)(param_1 + 0x186) = *(char *)(param_1 + 0x186) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x24) & 2) != 0) {
    *(char *)(param_1 + 0x188) = *(char *)(param_1 + 0x188) + '\x01';
  }
  *(char *)(param_1 + 0x18a) =
       *(char *)(param_1 + 0x189) + *(char *)(param_1 + 0x187) + *(char *)(param_1 + 0x186) +
       *(char *)(param_1 + 0x188);
  return;
}


