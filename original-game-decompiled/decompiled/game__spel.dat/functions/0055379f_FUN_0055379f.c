
/* ==== FUN_0055379f @ 0055379f ==== 
 * signature: undefined __fastcall FUN_0055379f(void * param_1)
 * body: 0055379f-00553889
 */

void __fastcall FUN_0055379f(void *param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  int iVar7;
  
  puVar2 = FUN_0055a6b0();
  uVar3 = FUN_0054ef7c((int)**(char **)(puVar2 + 0x14));
  *(short *)((int)param_1 + 0xc) = (short)uVar3;
  uVar3 = FUN_0054ef7c((int)**(char **)(puVar2 + 0x18));
  *(short *)((int)param_1 + 0xe) = (short)uVar3;
  uVar4 = FUN_0054e986(*(char **)(puVar2 + 0x1c));
  *(undefined4 *)((int)param_1 + 8) = uVar4;
  if (*(char *)((int)param_1 + 0x28) == '\0') {
    pcVar6 = *(char **)(puVar2 + 0x10);
  }
  else {
    pcVar6 = *(char **)(puVar2 + 0xc);
  }
  puVar5 = FUN_0055466a(pcVar6);
  *(undefined2 **)((int)param_1 + 0x10) = puVar5;
  if (((char)puVar2[0x2e] < '\0') || ('\x04' < (char)puVar2[0x2e])) {
    pcVar6 = &DAT_00712694;
  }
  else {
    pcVar6 = *(char **)(puVar2 + 0x20);
  }
  puVar5 = FUN_0055466a(pcVar6);
  *(undefined2 **)((int)param_1 + 0x14) = puVar5;
  if (((char)puVar2[0x2f] < '\0') || ('\x04' < (char)puVar2[0x2f])) {
    pcVar6 = &DAT_005b755c;
  }
  else {
    pcVar6 = *(char **)(puVar2 + 0x24);
  }
  puVar5 = FUN_0055466a(pcVar6);
  *(undefined2 **)((int)param_1 + 0x18) = puVar5;
  if (*(char *)((int)param_1 + 0x28) == '\0') {
    cVar1 = puVar2[0x29];
  }
  else {
    cVar1 = puVar2[0x28];
  }
  iVar7 = (int)cVar1;
  *(int *)((int)param_1 + 0x1c) = iVar7;
  if ((iVar7 < 0) || (0x7e < iVar7)) {
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
  }
  FUN_00553a1e(param_1,(undefined4 *)((int)param_1 + 0x20),puVar2[0x2b],puVar2[0x2a],puVar2[0x2e]);
  FUN_00553a1e(param_1,(undefined4 *)((int)param_1 + 0x24),puVar2[0x2d],puVar2[0x2c],puVar2[0x2f]);
  return;
}


