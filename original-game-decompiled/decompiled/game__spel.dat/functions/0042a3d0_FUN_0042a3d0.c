
/* ==== FUN_0042a3d0 @ 0042a3d0 ==== 
 * signature: int __cdecl FUN_0042a3d0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, float param_5, int param_6, int param_7, float param_8, undefined4 param_9, int param_10, int param_11, undefined4 param_12)
 * body: 0042a3d0-0042a466;0042a46a-0042a737
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042a467-0042a469
 */

int __cdecl
FUN_0042a3d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5,
            int param_6,int param_7,float param_8,undefined4 param_9,int param_10,int param_11,
            undefined4 param_12)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  char cVar14;
  undefined4 auStack_18 [3];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056a1fc;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00424660(&DAT_005d3458,(int)&param_1);
  iVar5 = FUN_004245f0(&DAT_005d3458,(int)&param_1);
  if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Could_not_find_vehicle___00596980);
  }
  uVar6 = FUN_004a71e0((uint)param_5);
  puVar7 = (undefined4 *)FUN_004a6d00(auStack_18,uVar6,param_6,param_7);
  uVar1 = *puVar7;
  fVar2 = (float)puVar7[1];
  uVar3 = puVar7[2];
  fVar13 = FUN_004a6e80(uVar6,(int)param_8);
  pcVar8 = *(char **)(iVar4 + 0x34);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  uVar9 = FUN_0049ecb0(&DAT_006fbb5c,pcVar8);
  pcVar8 = *(char **)(iVar4 + 0x14);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  iVar5 = FUN_004b75a0(&DAT_00712130,pcVar8);
  iVar10 = FUN_004a7790(uVar1,fVar2 + 5.0,uVar3,0,(float)fVar13,0,iVar5,0,param_9,0,uVar9);
  iVar5 = param_11;
  if (param_11 == 1) {
    DAT_006fba58 = iVar10;
  }
  FUN_00429320(iVar10);
  param_8 = (float)extraout_ST0;
  FUN_004292e0(iVar10);
  param_5 = (float)extraout_ST0_00;
  if (iVar5 == 1) {
    cVar14 = '\0';
  }
  else {
    if (iVar5 != 3) {
      FUN_004a79d0(iVar10,0,0,0,0,0xc1200000,0,(float)*(int *)(iVar4 + 0x40),0.9,0.2,'\0',param_10,
                   '\0',1);
      goto LAB_0042a63d;
    }
    cVar14 = '\x01';
  }
  FUN_00429710(iVar4,iVar10,0,0,0.0,0.0,(float)*(int *)(iVar4 + 0x40),0.05,param_8,param_5,'\0',
               cVar14,'\0',param_10,param_12);
LAB_0042a63d:
  iVar12 = iVar10 * 0xf0;
  *(uint *)(iVar12 + 0x38 + DAT_00715e50) = uVar6;
  *(uint *)(iVar12 + 0x34 + DAT_00715e50) = uVar6;
  *(int *)(iVar12 + 0x50 + DAT_00715e50) = param_7;
  if (((iVar5 == 1) || (iVar5 == 3)) || (iVar5 == 4)) {
    *(undefined4 *)(iVar12 + 0x20 + DAT_00715e50) = 1;
  }
  param_10 = iVar12 + DAT_00715e50;
  iVar11 = FUN_004a6d70(uVar6,param_6,param_7);
  *(int *)(param_10 + 0x3c) = iVar11;
  if ((iVar5 == 3) || (iVar5 == 1)) {
    *(code **)(iVar12 + 0x70 + DAT_00715e50) = FUN_0042c710;
  }
  else {
    *(code **)(iVar12 + 0x70 + DAT_00715e50) = FUN_0042d820;
  }
  FUN_004a6fa0(iVar10);
  FUN_0042a7f0(iVar10);
  FUN_004a7190(iVar10);
  FUN_00426bb0(&DAT_005d3460,iVar10,iVar5,iVar4 + 0x50);
  if (param_2 != 0) {
    cVar14 = *(char *)(param_2 + -1);
    if ((cVar14 == '\0') || (cVar14 == -1)) {
      FUN_0054b339((LPVOID)(param_2 + -1));
    }
    else {
      *(char *)(param_2 + -1) = cVar14 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return iVar10;
}


