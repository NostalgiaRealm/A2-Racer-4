
/* ==== FUN_004b96c0 @ 004b96c0 ==== 
 * signature: uint * __cdecl FUN_004b96c0(char * param_1, uint * param_2, uint * param_3, int * param_4, undefined4 * param_5)
 * body: 004b96c0-004b9723;004b9735-004b97fe
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b9724-004b9734
 */

uint * __cdecl
FUN_004b96c0(char *param_1,uint *param_2,uint *param_3,int *param_4,undefined4 *param_5)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  uint local_80 [3];
  undefined1 local_71;
  
  _strncpy((char *)local_80,param_1,0xe);
  local_71 = 0;
  puVar2 = FUN_00558f30(local_80,&DAT_005b159c);
  if (puVar2 != (uint *)0x0) {
    *(undefined1 *)puVar2 = 0;
  }
  if (DAT_0073b20c == 0) {
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_005b158c;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    puVar2 = local_80;
    do {
      puVar7 = puVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar7 = (uint *)((int)puVar2 + 1);
      uVar5 = *puVar2;
      puVar2 = puVar7;
    } while ((char)uVar5 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = (char *)((int)puVar7 + -1);
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    puVar2 = (uint *)FUN_004cb630((LPCSTR)local_80,(int *)param_2,(int *)param_3,param_4,param_5);
    return puVar2;
  }
  if (DAT_0073b20c != 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Unknown_texture_source_t_005b14c0);
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_005b1594;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  puVar2 = local_80;
  do {
    puVar7 = puVar2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar7 = (uint *)((int)puVar2 + 1);
    uVar5 = *puVar2;
    puVar2 = puVar7;
  } while ((char)uVar5 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = (char *)((int)puVar7 + -1);
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  puVar2 = (uint *)FUN_004c00b0((LPCSTR)local_80,param_2,param_3,param_4,param_5);
  return puVar2;
}


