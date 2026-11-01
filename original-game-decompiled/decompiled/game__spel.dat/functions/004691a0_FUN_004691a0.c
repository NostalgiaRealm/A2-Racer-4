
/* ==== FUN_004691a0 @ 004691a0 ==== 
 * signature: undefined __cdecl FUN_004691a0(char * param_1)
 * body: 004691a0-00469258;0046925c-004693cc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00469259-0046925b
 */

void __cdecl FUN_004691a0(char *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  void *this;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  byte abStack_21c [8];
  int local_214;
  CHAR local_210 [8];
  byte abStack_208 [8];
  byte abStack_200 [32];
  byte abStack_1e0 [64];
  char local_1a0 [32];
  char cStack_180;
  char acStack_17f [63];
  byte abStack_140 [64];
  byte abStack_100 [256];
  
  uVar5 = 0xffffffff;
  do {
    pcVar10 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar10 = pcVar10 + -uVar5;
  pcVar11 = local_1a0;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar7 = -1;
  pcVar10 = local_1a0;
  do {
    pcVar11 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar11 + -1) = DAT_005a78a8;
  pcVar11[3] = DAT_005a78ac;
  FUN_004c3b60(local_1a0);
  local_214 = FUN_004c3cd0(PTR_s_Objects_005a7618,PTR_s_Count_005a761c);
  iVar7 = 0;
  if (0 < local_214) {
    do {
      puVar3 = operator_new(0x30);
      if ((puVar3 == (undefined1 *)0x0) ||
         (this = (void *)FUN_00468e80(puVar3), this == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_allocate_memor_005a78d4);
      }
      FUN_005587a3(local_210,&DAT_005a7914);
      FUN_004c3d10(PTR_s_Objects_005a7618,local_210,(LPSTR)abStack_100,0xff);
      FUN_004c3d60(abStack_100,(uint *)0x0);
      FUN_004c3f10(4,&cStack_180,0x3f);
      FUN_00468f90(this,acStack_17f);
      FUN_004c3f10(1,(char *)abStack_1e0,0x3f);
      FUN_0055942f(abStack_1e0,abStack_208,abStack_140,abStack_200,abStack_21c);
      FUN_005587a3(abStack_1e0,&DAT_005a7918);
      FUN_00469040(this,(char *)abStack_1e0);
      FUN_004c3f10(0,(char *)abStack_1e0,0x3f);
      FUN_0055942f(abStack_1e0,abStack_208,abStack_140,abStack_200,abStack_21c);
      FUN_005587a3(abStack_1e0,&DAT_005a7920);
      FUN_004690f0(this,(char *)abStack_1e0);
      piVar2 = (int *)*DAT_00712228;
      piVar9 = (int *)piVar2[1];
      piVar4 = operator_new(0xc);
      piVar8 = piVar2;
      if (piVar2 == (int *)0x0) {
        piVar8 = piVar4;
      }
      *piVar4 = (int)piVar8;
      if (piVar9 == (int *)0x0) {
        piVar9 = piVar4;
      }
      piVar4[1] = (int)piVar9;
      piVar2[1] = (int)piVar4;
      *(int **)piVar4[1] = piVar4;
      if (piVar4 + 2 != (int *)0x0) {
        piVar4[2] = (int)this;
      }
      DAT_0071222c = DAT_0071222c + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_214);
  }
  return;
}


