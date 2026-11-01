
/* ==== FUN_004666c0 @ 004666c0 ==== 
 * signature: undefined __cdecl FUN_004666c0(int param_1)
 * body: 004666c0-0046670f;00466713-004668a6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00466710-00466712
 */

void __cdecl FUN_004666c0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056abc8;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,'\0');
  local_4 = 0;
  if (DAT_005d2aa8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__No_traffic_types_availab_005a721c);
  }
  uVar2 = FUN_00558625();
  iVar8 = (int)uVar2 % DAT_005d2aa8;
  uVar2 = 0xffffffff;
  pcVar4 = (char *)(&DAT_005d269c + iVar8 * 10);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar2,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar4 = (char *)(&DAT_005d269c + iVar8 * 10);
    pcVar9 = pcStack_18;
    for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_004029e0(local_1c,uVar2);
  }
  iVar8 = FUN_00424660(&DAT_005d3458,(int)local_1c);
  pcVar4 = *(char **)(iVar8 + 0x14);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = FUN_004b75a0(&DAT_00712130,pcVar4);
  iVar5 = FUN_004a7790(0,0,0,0,0,0,iVar5,0,0,0,0);
  FUN_00450b00(iVar5,s_HOOG4_005a7240);
  iVar6 = iVar5 * 0xf0;
  *(undefined4 *)(iVar6 + 0x5c + DAT_00715e50) = 0;
  *(undefined4 *)(iVar6 + 0x1c + DAT_00715e50) = 2;
  *(undefined4 *)(iVar6 + 0x50 + DAT_00715e50) = 0;
  FUN_00436170(*(int *)(iVar8 + 0x44),iVar5);
  (&DAT_0070a244)[param_1 * 0xd0] = iVar5;
  if (pcStack_18 != (char *)0x0) {
    cVar1 = pcStack_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      pcStack_18[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(pcStack_18 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


