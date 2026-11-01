
/* ==== FUN_004275e0 @ 004275e0 ==== 
 * signature: undefined __cdecl FUN_004275e0(uint param_1, int param_2)
 * body: 004275e0-0042796f
 */

void __cdecl FUN_004275e0(uint param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 in_stack_ffffff70;
  int in_stack_ffffff74;
  undefined4 in_stack_ffffff78;
  undefined4 in_stack_ffffff7c;
  float fVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  float local_44 [4];
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a120;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,'\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  iVar5 = DAT_0073b0d0 + *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  local_34 = *(undefined4 *)(iVar5 + 0x50);
  local_30 = *(float *)(iVar5 + 0x54);
  local_2c = *(undefined4 *)(iVar5 + 0x58);
  bVar2 = 1 < (int)param_1;
  if (bVar2) {
    bVar8 = DAT_006fb8e8 == 0;
  }
  else {
    bVar8 = DAT_006fb8e8 != 0;
  }
  param_1 = (uint)bVar8;
  uVar6 = (uint)bVar2;
  fVar3 = (float)FUN_004a71e0(((DAT_006fb8ac + param_2 * -3) - DAT_006fb8b0) - 5);
  iVar5 = FUN_00413cf0();
  local_44[0] = (float)CONCAT31(local_44[0]._1_3_,bVar8);
  FUN_004028f0(local_44,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = (char *)(&DAT_005d269c + iVar5 * 10);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_44,&DAT_005d269c + iVar5 * 10,~uVar4 - 1);
  local_4._0_1_ = 1;
  FUN_004093c0(local_1c,local_44,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_44,'\x01');
  uVar14 = 0;
  iVar13 = 2;
  iVar12 = 0;
  pcVar11 = FUN_00421f50;
  iVar10 = 0;
  fVar9 = fVar3;
  uVar4 = uVar6;
  FUN_0041c870(&stack0xffffff70,local_1c);
  iVar10 = FUN_0042a3d0(in_stack_ffffff70,in_stack_ffffff74,in_stack_ffffff78,in_stack_ffffff7c,
                        fVar9,iVar10,uVar4,(float)param_1,pcVar11,iVar12,iVar13,uVar14);
  if (uVar6 == 0) {
    if (*(int *)(DAT_00715f00 + 0xf4 + (int)fVar3 * 0x994) < 2) goto LAB_004277d1;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar6;
    if (*(int *)(DAT_00715f00 + 0xf8 + (int)fVar3 * 0x994) < 2) goto LAB_004277d1;
  }
  FUN_004a6d70((int)fVar3,0,uVar4);
LAB_004277d1:
  FUN_00413f00(iVar10,iVar5,0,uVar6,0);
  iVar5 = FUN_00414070(iVar10);
  (&DAT_005d1bb8)[iVar5 * 0xe] = (&DAT_005d1bb8)[iVar5 * 0xe] | 1;
  iVar12 = iVar10 * 0xf0;
  *(undefined4 *)(iVar12 + 0x5c + DAT_00715e50) = 0;
  *(uint *)(iVar12 + 0x1c + DAT_00715e50) = *(uint *)(iVar12 + 0x1c + DAT_00715e50) | 3;
  local_30 = ((float)iVar5 + 1.0) * 100.0 + local_30;
  (**(code **)(**(int **)(iVar12 + 0x10 + DAT_00715e50) + 0x10))();
  FUN_004f21f0(*(void **)(*(int *)(iVar12 + 0x10 + DAT_00715e50) + 8),0);
  iVar5 = FUN_004a8c50(iVar12 + DAT_00715e50);
  iVar5 = DAT_0073b5c8 + iVar5 * 0xac;
  local_44[0] = *(float *)(iVar5 + 0x24) + *(float *)(iVar5 + 0x18);
  FUN_004a1f30(*(void **)(iVar12 + 0x10 + DAT_00715e50),(float *)&stack0xffffffa8);
  iVar5 = FUN_00424660(&DAT_005d3458,(int)&local_24);
  FUN_00436170(*(int *)(iVar5 + 0x44),iVar10);
  if (local_20 != 0) {
    cVar1 = *(char *)(local_20 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_20 + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_0054b339((LPVOID)(local_20 + -1));
  }
  ExceptionList = pvStack_14;
  return;
}


