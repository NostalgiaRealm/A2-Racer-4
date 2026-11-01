
/* ==== FUN_004d71d0 @ 004d71d0 ==== 
 * signature: undefined __cdecl FUN_004d71d0(void * param_1, undefined1 * param_2)
 * body: 004d71d0-004d7386
 */

/* WARNING: Removing unreachable block (ram,0x004d728a) */

void __cdecl FUN_004d71d0(void *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  short local_41e;
  undefined1 auStack_41c [4];
  char *pcStack_418;
  uint uStack_414;
  undefined4 uStack_410;
  char acStack_40c [1024];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0057024b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004d7800(param_1,&local_41e,2);
  iVar6 = (int)local_41e;
  FUN_004d7800(param_1,acStack_40c,iVar6);
  uVar4 = 0xffffffff;
  acStack_40c[iVar6] = '\0';
  pcVar3 = acStack_40c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  auStack_41c[0] = (undefined1)local_41e;
  pcStack_418 = (char *)0x0;
  uStack_414 = 0;
  uStack_410 = 0;
  uVar2 = FUN_00402a00(auStack_41c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar3 = acStack_40c;
    pcVar7 = pcStack_418;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    pcStack_418[uVar4] = '\0';
    uStack_414 = uVar4;
  }
  uVar4 = uStack_414;
  uStack_4 = 0;
  if (param_2 == auStack_41c) {
    FUN_0040f800(param_2,uStack_414,0xffffffff);
    FUN_0040f800(param_2,0,0);
  }
  else {
    if (uStack_414 != 0) {
      pcVar3 = pcStack_418;
      if (pcStack_418 == (char *)0x0) {
        pcVar3 = "";
      }
      if ((byte)pcVar3[-1] < 0xfe) {
        FUN_004028f0(param_2,'\x01');
        pcVar3 = pcStack_418;
        if (pcStack_418 == (char *)0x0) {
          pcVar3 = "";
        }
        *(char **)(param_2 + 4) = pcVar3;
        *(uint *)(param_2 + 8) = uStack_414;
        *(undefined4 *)(param_2 + 0xc) = uStack_410;
        pcVar3[-1] = pcVar3[-1] + '\x01';
        goto LAB_004d7336;
      }
    }
    uVar2 = FUN_00402a00(param_2,uStack_414,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar3 = pcStack_418;
      if (pcStack_418 == (char *)0x0) {
        pcVar3 = "";
      }
      pcVar7 = *(char **)(param_2 + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_004029e0(param_2,uVar4);
    }
  }
LAB_004d7336:
  if (pcStack_418 != (char *)0x0) {
    cVar1 = pcStack_418[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      pcStack_418[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(pcStack_418 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


