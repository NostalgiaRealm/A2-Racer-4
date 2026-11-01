
/* ==== FUN_0040dba8 @ 0040dba8 ==== 
 * signature: int __stdcall FUN_0040dba8(int param_1)
 * body: 0040dba8-0040dbaf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040dba8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  if ((DAT_005ce1e2 & 1) == 0) {
    DAT_005ce1e2 = DAT_005ce1e2 | 1;
    DAT_005d1ae8 = (undefined1)param_1;
    uVar4 = 0xffffffff;
    pcVar8 = (char *)&DAT_00591b14;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    DAT_005d1aec = (undefined4 *)0x0;
    _DAT_005d1af0 = 0;
    _DAT_005d1af4 = 0;
    uVar2 = FUN_00402a00(&DAT_005d1ae8,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      puVar7 = &DAT_00591b14;
      puVar9 = DAT_005d1aec;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      _DAT_005d1af0 = uVar4;
      *(undefined1 *)((int)DAT_005d1aec + uVar4) = 0;
    }
    FUN_005584e0(0x40dca0);
  }
  iVar6 = 0;
  piVar3 = &DAT_005cd9d8;
  do {
    if (*piVar3 == param_1) {
      return iVar6 * 0x18 + 0x5cd9dc;
    }
    piVar3 = piVar3 + 6;
    iVar6 = iVar6 + 1;
  } while (piVar3 < &DAT_005cdde0);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____State_missing_in_state_t_00591b3c);
}


