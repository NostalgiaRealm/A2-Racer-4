
/* ==== FUN_004658e0 @ 004658e0 ==== 
 * signature: undefined __cdecl FUN_004658e0(int param_1)
 * body: 004658e0-00465c59;00465c5d-00465cbc;00465cd3-00465ce7;00465ceb-00465cfd
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00465c5a-00465c5c 00465cbd-00465cd2 00465ce8-00465cea
 */

void __cdecl FUN_004658e0(int param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056aba8;
  local_c = ExceptionList;
  if ((param_1 < 0) || (DAT_00712108 <= param_1)) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Invalid_Path_Index___d__005a7134);
  }
  if (DAT_005d2aa8 == 0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__No_traffic_types_availab_005a70ec);
  }
  ExceptionList = &local_c;
  iVar5 = FUN_004641a0(param_1);
  fVar3 = *(float *)(&DAT_00709f24 + iVar5 * 0x340);
  iVar5 = FUN_004641a0(param_1);
  fVar1 = *(float *)(&DAT_00709f28 + iVar5 * 0x340);
  iVar5 = FUN_004641a0(param_1);
  local_1c[0] = (undefined1)param_1;
  fVar4 = *(float *)(&DAT_00709f2c + iVar5 * 0x340);
  FUN_004028f0(local_1c,'\0');
  local_4 = 0;
  pcVar6 = PTR_DAT_005a6e54;
  if ((0xf < (int)(&DAT_00709f10)[param_1 * 0xd0]) &&
     (pcVar6 = PTR_DAT_005a6e58, 0x12 < (int)(&DAT_00709f10)[param_1 * 0xd0])) {
    uVar11 = FUN_00558625();
    pcVar6 = (char *)(&DAT_005d269c + ((int)uVar11 % DAT_005d2aa8) * 10);
  }
  uVar11 = 0xffffffff;
  pcVar13 = pcVar6;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_1c,(undefined4 *)pcVar6,~uVar11 - 1);
  iVar5 = FUN_00424660(&DAT_005d3458,(int)local_1c);
  pcVar6 = *(char **)(iVar5 + 0x14);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "";
  }
  uVar7 = FUN_004b76e0(&DAT_00712130,pcVar6);
  if ((char)uVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Animation_must_exist_005a70a8);
  }
  pcVar6 = *(char **)(iVar5 + 0x14);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "";
  }
  iVar8 = FUN_004b75a0(&DAT_00712130,pcVar6);
  pcVar6 = *(char **)(iVar5 + 0x34);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "";
  }
  uVar7 = FUN_0049ecb0(&DAT_006fbb5c,pcVar6);
  iVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  puVar9 = (undefined4 *)FUN_00464e90(&local_34,param_1);
  iVar16 = FUN_004a7790(fVar3,fVar1 + 10.0,fVar4,*puVar9,puVar9[1],puVar9[2],iVar8,uVar14,uVar15,
                        iVar16,uVar7);
  iVar12 = iVar16 * 0xf0;
  iVar8 = iVar12 + DAT_00715e50;
  iVar10 = FUN_004af230(&DAT_00715250,(&DAT_00709f08)[param_1 * 0xd0],fVar3,fVar1 + 10.0,fVar4);
  *(int *)(iVar8 + 0x34) = iVar10;
  *(uint *)(iVar12 + 0x1c + DAT_00715e50) = *(uint *)(iVar12 + 0x1c + DAT_00715e50) | 3;
  *(undefined4 *)(iVar12 + 0x68 + DAT_00715e50) = 1;
  FUN_00436170(*(int *)(iVar5 + 0x44),iVar16);
  FUN_0042a7f0(iVar16);
  (&DAT_0070a244)[param_1 * 0xd0] = iVar16;
  FUN_00464de0(param_1);
  local_34 = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  FUN_004a79d0(iVar16,0,0,0,0,0,0,800.0,0.9,0.2,'\0',0,'\0',1);
  FUN_004a7190(iVar16);
  iVar8 = FUN_004a8c50(iVar12 + DAT_00715e50);
  iVar5 = DAT_0073b5c8 + iVar8 * 0xac;
  local_34 = (*(float *)(DAT_0073b5c8 + 0x10 + iVar8 * 0xac) +
             *(float *)(DAT_0073b5c8 + 0x1c + iVar8 * 0xac)) * 0.5;
  local_30 = (*(float *)(DAT_0073b5c8 + 0x20 + iVar8 * 0xac) + *(float *)(iVar5 + 0x14)) * 0.5;
  local_2c = (*(float *)(iVar5 + 0x24) + *(float *)(iVar5 + 0x18)) * 0.5;
  local_28 = local_34;
  local_24 = local_30;
  local_20 = local_2c;
  FUN_004a1f30(*(void **)(iVar12 + 0x10 + DAT_00715e50),&local_28);
  FUN_004f32e0(*(int *)(*(int *)(iVar12 + 0x10 + DAT_00715e50) + 8));
  if (local_18 == 0) {
    ExceptionList = local_c;
    return;
  }
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


