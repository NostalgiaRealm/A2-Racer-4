
/* ==== FUN_004a14f0 @ 004a14f0 ==== 
 * signature: undefined __thiscall FUN_004a14f0(void * this, undefined4 * param_1, float * param_2)
 * body: 004a14f0-004a18d1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a14f0(void *this,undefined4 *param_1,float *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  double *pdVar8;
  undefined1 uStack_255;
  float local_254;
  float local_250;
  float local_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  double dStack_234;
  double adStack_22c [2];
  float local_21c;
  float fStack_218;
  float fStack_214;
  double dStack_20c;
  double dStack_204;
  double dStack_1fc;
  double dStack_1ec;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined4 auStack_16c [8];
  undefined4 local_14c [32];
  float afStack_cc [16];
  double adStack_8c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056ee17;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00402d00(local_14c,0x20,3,FUN_0043e110);
  if (((((float)param_1[0x27] != 0.0) || ((float)param_1[0x28] != 0.0)) ||
      (uStack_1e4 = (double)CONCAT44(uStack_1e4._4_4_,(undefined4)uStack_1e4),
      uStack_1dc = (double)CONCAT44(uStack_1dc._4_4_,(undefined4)uStack_1dc),
      (float)param_1[0x29] != 0.0)) &&
     (uStack_1e4 = (double)CONCAT44(uStack_1e4._4_4_,(undefined4)uStack_1e4),
     uStack_1dc = (double)CONCAT44(uStack_1dc._4_4_,(undefined4)uStack_1dc), param_1[0x23] != 0)) {
    (**(code **)(**(int **)(param_1[0x23] + 0x18) + 4))(&local_21c);
    fStack_244 = (float)param_1[0x27];
    fStack_240 = (float)param_1[0x28];
    fStack_23c = (float)param_1[0x29];
    FUN_004a4180(&fStack_244);
    dStack_234 = (double)(fStack_218 + fStack_240);
    adStack_22c[0] = (double)(fStack_214 + fStack_23c);
    dStack_1ec = (double)(fStack_244 + local_21c);
    uStack_1e4 = dStack_234;
    uStack_1dc = adStack_22c[0];
    FUN_004fa010(local_14c);
    FUN_004fb000(local_14c,&dStack_1ec);
    param_1[0x19] = local_14c;
  }
  local_254 = *param_2;
  local_250 = param_2[1];
  local_24c = param_2[2];
  if ((*(char *)(param_1 + 0x21) == '\0') && (param_1[0x23] == 0)) {
    puVar1 = FUN_0049df90((undefined1 *)&local_21c,
                          (byte *)s_Geometry_not_defined_while_initi_005af140);
    uStack_4 = 0;
    puVar2 = FUN_0049df90((undefined1 *)&fStack_244,(byte *)s_Physics_exception_in___s___d__005af050
                         );
    uStack_4._0_1_ = 1;
    puVar1 = FUN_0047c9a0((undefined1 *)adStack_22c,puVar2,(int)puVar1);
    uStack_4._0_1_ = 2;
    FUN_00558826((undefined4 *)&dStack_1ec);
    uStack_4._0_1_ = 3;
    uStack_1e4._4_4_ = CONCAT31(uStack_1e4._5_3_,uStack_255);
    FUN_004028f0((void *)((int)&uStack_1e4 + 4),'\0');
    uStack_4._0_1_ = 4;
    dStack_1ec = (double)CONCAT44(dStack_1ec._4_4_,&PTR_FUN_005771c8);
    FUN_004093c0((void *)((int)&uStack_1e4 + 4),puVar1,0,0xffffffff);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&dStack_1ec,&DAT_00583178);
  }
  *(undefined4 *)((int)this + 4) = param_1[0x23];
  FUN_004a4180(&local_254);
  dStack_20c = (double)local_254;
  dStack_204 = (double)local_250;
  dStack_1fc = (double)local_24c;
  pfVar3 = (float *)FUN_004a5a40((float *)&dStack_1ec);
  pfVar7 = afStack_cc;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar7 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar7 = pfVar7 + 1;
  }
  puVar4 = (undefined4 *)FUN_004a58b0((undefined4 *)&dStack_1ec,afStack_cc);
  pdVar8 = adStack_8c;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pdVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  FUN_004f8bf0(auStack_16c,adStack_8c);
  if (*(char *)(param_1 + 0x21) == '\x01') {
    fStack_248 = _DAT_005af184 * (float)param_1[0x22];
    iVar6 = FUN_004f84d0(*(void **)(*(int *)((int)this + 0x2c) + 0x14),&fStack_248,param_1,
                         auStack_16c,&dStack_20c);
  }
  else {
    iVar6 = FUN_004f8460(*(void **)(*(int *)((int)this + 0x2c) + 0x14),
                         *(undefined4 *)(*(int *)((int)this + 4) + 0x18),param_1,auStack_16c,
                         &dStack_20c);
  }
  *(int *)((int)this + 8) = iVar6;
  *(void **)(iVar6 + 0xb0) = this;
  if (param_1[0x2b] != 0) {
    *(undefined4 *)((int)this + 0x18) = param_1[0x2b];
    puVar4 = operator_new(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar5 = *(undefined4 *)((int)this + 8);
      puVar4[1] = 5;
      *puVar4 = &PTR_FUN_00577210;
      puVar4[2] = uVar5;
    }
    *(undefined4 **)((int)this + 0x1c) = puVar4;
    FUN_004f2410(*(void **)((int)this + 8),puVar4);
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    FUN_004f21f0(*(void **)((int)this + 8),1);
  }
  *(undefined4 *)((int)this + 0x28) = param_1[0x2c];
  if (*(char *)((int)param_1 + 0xa9) != '\0') {
    FUN_004f32e0(*(int *)((int)this + 8));
  }
  puVar4 = operator_new(4);
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a0490(puVar4);
  }
  *(undefined4 *)((int)this + 0x14) = uVar5;
  FUN_004f2430(*(void **)((int)this + 8),uVar5);
  *(undefined4 *)((int)this + 0x20) = param_1[0x20];
  ExceptionList = pvStack_c;
  return;
}


