
/* ==== FUN_00428c70 @ 00428c70 ==== 
 * signature: undefined __cdecl FUN_00428c70(float param_1, float * param_2)
 * body: 00428c70-00428dbd;00428dc1-00429073
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00428dbe-00428dc0
 */

void __cdecl FUN_00428c70(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  void *this;
  short sVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  int local_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a150;
  pvStack_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,'\0');
  local_2c[0] = param_1._0_1_;
  local_4 = 0;
  FUN_004028f0(local_2c,'\0');
  local_4._0_1_ = 1;
  iVar9 = (int)param_1 * 0xf0;
  FUN_004a7bd0(iVar9 + DAT_00715e50);
  puVar5 = FUN_0049df90((undefined1 *)&local_3c,(byte *)s__s__d_WheelMaterial_0059655c);
  local_4._0_1_ = 2;
  FUN_004093c0(local_1c,puVar5,0,0xffffffff);
  local_4._0_1_ = 1;
  FUN_004028f0(&local_3c,'\x01');
  FUN_004a7bd0(iVar9 + DAT_00715e50);
  puVar5 = FUN_0049df90((undefined1 *)&local_3c,(byte *)s__s__d_WheelMaterial_00596570);
  local_4._0_1_ = 3;
  FUN_004093c0(local_2c,puVar5,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(&local_3c,'\x01');
  iVar6 = FUN_004a4430(&DAT_00715f58,(int)local_1c);
  iVar7 = FUN_004a4430(&DAT_00715f58,(int)local_2c);
  if ((int)param_2[10] < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_No_dynamics_type_specifi_005965a8);
  }
  puVar10 = (undefined4 *)(&DAT_006c1c68 + (int)param_2[10] * 0xf0);
  puVar11 = &DAT_006b2ad0;
  for (iVar8 = 0x3c; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  fVar12 = FUN_00427e60((int)param_1,0,*param_2);
  fVar12 = FUN_00427dd0(param_1,(float)fVar12,0);
  fVar12 = ABS(fVar12) + (float10)0.8;
  if (((float10)2.0 < fVar12) && (*(char *)(param_2 + 6) == '\x01')) {
    fVar12 = (float10)2.0;
  }
  *(double *)(iVar6 + 0x10) = (double)fVar12;
  fVar12 = FUN_00427e60((int)param_1,2,*param_2);
  fVar12 = FUN_00427dd0(param_1,(float)fVar12,2);
  fVar12 = ABS(fVar12) + (float10)0.8;
  if (((float10)2.0 < fVar12) && (*(char *)(param_2 + 6) == '\x01')) {
    fVar12 = (float10)2.0;
  }
  *(double *)(iVar7 + 0x10) = (double)fVar12;
  FUN_004f21e0(*(int *)(*(int *)(iVar9 + 0x10 + DAT_00715e50) + 8));
  this = *(void **)(iVar9 + 0x10 + DAT_00715e50);
  FUN_004a2f70(this,param_2[2],param_2[1]);
  FUN_004a31d0(this,*param_2 * 0.006666667);
  if (param_1 == DAT_006fba58) {
    FUN_004c5e40(0x4f);
  }
  FUN_00403170(param_2,(int)this);
  if (((*(char *)((int)param_2 + 0x19) == '\x01') &&
      (*(float *)(iVar9 + 0xc4 + DAT_00715e50) < 60.0)) &&
     (sVar4 = FUN_004031c0((int)param_2), (char)sVar4 == '\0')) {
    fVar1 = *(float *)(iVar9 + 0xc4 + DAT_00715e50);
    fVar2 = *(float *)(iVar9 + 0xb0 + DAT_00715e50);
    fVar12 = FUN_004a6800(0x7128b0);
    local_3c = 0;
    uStack_38 = 0;
    fStack_34 = (float)(fVar12 * (float10)((1.0 / fVar2) * (ABS(fVar1) * 0.025 + 0.5)) *
                       (float10)25.0);
    FUN_004a2000(this,&local_3c);
  }
  if (iStack_28 != 0) {
    cVar3 = *(char *)(iStack_28 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_0054b339((LPVOID)(iStack_28 + -1));
    }
    else {
      *(char *)(iStack_28 + -1) = cVar3 + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_18 != 0) {
    cVar3 = *(char *)(iStack_18 + -1);
    if ((cVar3 != '\0') && (cVar3 != -1)) {
      *(char *)(iStack_18 + -1) = cVar3 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339((LPVOID)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}


