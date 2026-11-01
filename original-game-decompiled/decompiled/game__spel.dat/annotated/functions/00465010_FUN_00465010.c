
/* ==== FUN_00465010 @ 00465010 ==== 
 * signature: undefined __cdecl FUN_00465010(int param_1)
 * body: 00465010-0046528c;00465290-004652ec;004652f0-00465302
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046528d-0046528f 004652ed-004652ef
 */

void __cdecl FUN_00465010(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  undefined4 local_28 [2];
  undefined4 local_20;
  char local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  iVar6 = param_1;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ab88;
  local_c = ExceptionList;
  if ((param_1 < 0) || (DAT_00712108 <= param_1)) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Invalid_Path_Index___d__005a6d98);
  }
  param_1._0_1_ = (char)param_1 * '@';
  pcVar8 = PTR_DAT_005a6b00;
  if (0xf < (int)(&DAT_00709f10)[iVar6 * 0xd0]) {
    pcVar8 = PTR_DAT_005a6b04;
  }
  local_1c[0] = (char)param_1;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  uVar14 = 0xffffffff;
  pcVar17 = pcVar8;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar2 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_1c,(undefined4 *)pcVar8,~uVar14 - 1);
  local_4 = 0;
  iVar7 = FUN_00424660(&DAT_005d3458,(int)local_1c);
  pcVar8 = *(char **)(iVar7 + 0x14);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  uVar9 = FUN_004b76e0(&DAT_00712130,pcVar8);
  if ((char)uVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Animation_must_exist_005a6d54);
  }
  iVar10 = FUN_004641a0(iVar6);
  uVar9 = *(undefined4 *)(&DAT_00709f24 + iVar10 * 0x340);
  iVar10 = FUN_004641a0(iVar6);
  fVar1 = *(float *)(&DAT_00709f28 + iVar10 * 0x340);
  iVar10 = FUN_004641a0(iVar6);
  uVar3 = *(undefined4 *)(&DAT_00709f2c + iVar10 * 0x340);
  puVar11 = (undefined4 *)FUN_00464e90(local_28,iVar6);
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  local_20 = puVar11[2];
  pcVar8 = *(char **)(iVar7 + 0x14);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  iVar10 = FUN_004b75a0(&DAT_00712130,pcVar8);
  pcVar8 = *(char **)(iVar7 + 0x34);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  uVar12 = FUN_0049ecb0(&DAT_006fbb5c,pcVar8);
  iVar13 = FUN_004a7790(uVar9,fVar1 + 10.0,uVar3,uVar4,uVar5,local_20,iVar10,0,0,0,uVar12);
  iVar16 = iVar13 * 0xf0;
  iVar7 = iVar16 + DAT_00715e50;
  iVar15 = DAT_0073b0d0 + *(int *)(iVar16 + 0x24 + DAT_00715e50) * 0xa9;
  iVar10 = (&DAT_00709f08)[iVar6 * 0xd0];
  iVar15 = FUN_004af230(&DAT_00715250,iVar10,*(float *)(iVar15 + 0x50),
                        *(undefined4 *)(iVar15 + 0x54),*(float *)(iVar15 + 0x58));
  *(int *)(iVar7 + 0x34) = iVar15;
  uVar9 = CONCAT31((int3)((uint)iVar10 >> 8),local_1c[0]);
  iVar7 = 0;
  FUN_004093c0(&stack0xffffffa8,local_1c,0,0xffffffff);
  FUN_00423a50(iVar13,uVar9,iVar7);
  *(uint *)(iVar16 + 0x1c + DAT_00715e50) = *(uint *)(iVar16 + 0x1c + DAT_00715e50) | 2;
  *(code **)(iVar16 + 0x6c + DAT_00715e50) = FUN_00464ff0;
  (&DAT_0070a244)[iVar6 * 0xd0] = iVar13;
  FUN_00464de0(iVar6);
  *(undefined4 *)(iVar16 + 0x5c + DAT_00715e50) = 0;
  FUN_00426fc0(&DAT_005d3460,iVar13,'\0');
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((LPVOID)(local_18 + -1));
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


