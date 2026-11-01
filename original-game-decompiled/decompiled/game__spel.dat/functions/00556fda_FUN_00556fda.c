
/* ==== FUN_00556fda @ 00556fda ==== 
 * signature: undefined __fastcall FUN_00556fda(void * param_1)
 * body: 00556fda-005570b3
 */

void __fastcall FUN_00556fda(void *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  puVar2 = FUN_0055a6b0();
  *(undefined1 *)((int)param_1 + 0xc) = **(undefined1 **)(puVar2 + 0x14);
  *(undefined1 *)((int)param_1 + 0xd) = **(undefined1 **)(puVar2 + 0x18);
  uVar3 = FUN_0054e986(*(char **)(puVar2 + 0x1c));
  *(undefined4 *)((int)param_1 + 8) = uVar3;
  if (*(char *)((int)param_1 + 0x28) == '\0') {
    pcVar4 = *(char **)(puVar2 + 0x10);
  }
  else {
    pcVar4 = *(char **)(puVar2 + 0xc);
  }
  uVar3 = FUN_0054e986(pcVar4);
  *(undefined4 *)((int)param_1 + 0x10) = uVar3;
  if (((char)puVar2[0x2e] < '\0') || ('\x04' < (char)puVar2[0x2e])) {
    pcVar4 = &DAT_00712694;
  }
  else {
    pcVar4 = *(char **)(puVar2 + 0x20);
  }
  uVar3 = FUN_0054e986(pcVar4);
  *(undefined4 *)((int)param_1 + 0x14) = uVar3;
  if (((char)puVar2[0x2f] < '\0') || ('\x04' < (char)puVar2[0x2f])) {
    pcVar4 = &DAT_005b755c;
  }
  else {
    pcVar4 = *(char **)(puVar2 + 0x24);
  }
  uVar3 = FUN_0054e986(pcVar4);
  *(undefined4 *)((int)param_1 + 0x18) = uVar3;
  if (*(char *)((int)param_1 + 0x28) == '\0') {
    cVar1 = puVar2[0x29];
  }
  else {
    cVar1 = puVar2[0x28];
  }
  iVar5 = (int)cVar1;
  *(int *)((int)param_1 + 0x1c) = iVar5;
  if ((iVar5 < 0) || (0x7e < iVar5)) {
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
  }
  FUN_005570b4(param_1,(undefined4 *)((int)param_1 + 0x20),puVar2[0x2b],puVar2[0x2a],puVar2[0x2e]);
  FUN_005570b4(param_1,(undefined4 *)((int)param_1 + 0x24),puVar2[0x2d],puVar2[0x2c],puVar2[0x2f]);
  return;
}


