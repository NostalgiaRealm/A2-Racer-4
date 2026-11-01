
/* ==== FUN_0041e450 @ 0041e450 ==== 
 * signature: undefined __cdecl FUN_0041e450(int param_1)
 * body: 0041e450-0041e6a8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041e6a9-0041e6be
 */

void __cdecl FUN_0041e450(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569e88;
  local_c = ExceptionList;
  iVar7 = param_1 * 0xf0;
  ExceptionList = &local_c;
  *(undefined4 *)(iVar7 + 0x38 + DAT_00715e50) = *(undefined4 *)(iVar7 + 0x34 + DAT_00715e50);
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 == 1) {
      *(undefined4 *)(iVar7 + 0x50 + DAT_00715e50) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x50 + DAT_00715e50) = 1;
    }
  }
  else if (DAT_006fb954 == 1) {
    *(undefined4 *)(iVar7 + 0x50 + DAT_00715e50) = 1;
  }
  else {
    *(undefined4 *)(iVar7 + 0x50 + DAT_00715e50) = 0;
  }
  iVar4 = iVar7 + DAT_00715e50;
  iVar2 = FUN_004aac20(param_1,*(int *)(iVar7 + 0x50 + DAT_00715e50));
  *(int *)(iVar4 + 0x3c) = iVar2;
  local_1c[0] = (undefined1)param_1;
  *(code **)(iVar7 + 0x6c + DAT_00715e50) = FUN_0041ed30;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = (char *)&DAT_00594c70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar5,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = &DAT_00594c70;
    puVar10 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar5) = 0;
    local_14 = uVar5;
  }
  local_4 = 0;
  iVar4 = FUN_00424660(&DAT_005d3458,(int)local_1c);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  iVar2 = *(int *)(iVar4 + 0x40);
  FUN_00429320(param_1);
  FUN_004292e0(param_1);
  FUN_00429710(iVar4,param_1,0,0,0.0,0.0,(float)iVar2,0.2,(float)extraout_ST0_00,(float)extraout_ST0
               ,'\0','\0','\0',FUN_0044f970,0);
  FUN_004a6fa0(param_1);
  FUN_004353e0(*(float *)(iVar4 + 0x44),param_1);
  FUN_0042a7f0(param_1);
  FUN_004a7190(param_1);
  *(undefined4 *)(iVar7 + 0x68 + DAT_00715e50) = 1;
  FUN_00450b00(param_1,s_POLITIE_SIRENE_00594c7c);
  FUN_00426bb0(&DAT_005d3460,param_1,4,iVar4 + 0x50);
  if (DAT_005d3310 < 1) {
    (&DAT_005d330c)[DAT_005d3310] = param_1;
    DAT_005d3310 = DAT_005d3310 + 1;
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____Maximum_number_of_Super_00594cb4);
}


