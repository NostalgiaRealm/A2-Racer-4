
/* ==== FUN_00540720 @ 00540720 ==== 
 * signature: undefined __stdcall FUN_00540720(double param_1, undefined * * param_2, undefined4 param_3, double param_4, double param_5)
 * body: 00540720-005408df
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540720(double param_1,undefined **param_2,undefined4 param_3,double param_4,
                 double param_5)

{
  float fVar1;
  double dVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int extraout_ECX;
  int iVar7;
  undefined1 *puVar8;
  uint *puStack00000004;
  undefined8 in_stack_00000000;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  double dStack00000078;
  double dStack00000080;
  undefined4 uStack00000088;
  undefined4 uStack0000008c;
  undefined4 local_8;
  
  FUN_00559400();
  puVar8 = &stack0x00000be8;
  iVar7 = 0x15;
  do {
    FUN_0043e110(puVar8);
    puVar8 = puVar8 + 0x80;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_00542c90(&stack0x00000b80,param_1._0_4_);
  piVar4 = param_1._4_4_;
  puVar8 = &stack0x00000100;
  puStack00000004 = (uint *)((ulonglong)in_stack_00000000 >> 0x20);
  iVar5 = 0x15;
  piVar3 = (int *)param_1._4_4_[2];
  do {
    FUN_0043e110(puVar8);
    puVar8 = puVar8 + 0x80;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00542c90(&stack0x00000098,piVar3);
  param_2 = &PTR_FUN_00578ccc;
  uStack00000038 = 0;
  uStack0000003c = 0;
  uStack00000040 = 0;
  pfVar6 = (float *)((*puStack00000004 & 0xffff) * 0x10 + *piVar4);
  uStack00000044 = 0;
  uStack00000048 = 0;
  uStack0000004c = 0;
  local_8 = SUB84((double)pfVar6[2],0);
  uStack0000008c = (undefined4)((ulonglong)(double)pfVar6[2] >> 0x20);
  uStack00000088 = local_8;
  dStack00000078 = (double)*pfVar6;
  dStack00000080 = (double)pfVar6[1];
  FUN_00509c90(puStack00000004,(int *)piVar4[1],(double *)&stack0x00000058);
  FUN_004f94a0((double *)&stack0x00000058);
  param_4 = *(double *)(extraout_ECX + 0x10);
  param_5 = 1.0 / param_4;
  iVar5 = *(int *)(extraout_ECX + 0x20);
  fVar1 = *(float *)(iVar5 + 0x50);
  dVar2 = (double)(fVar1 * 0.5 + _DAT_0074d520);
  param_1 = (double)(fVar1 + *(float *)(iVar5 + 0x54));
  local_8 = SUB84(dVar2,0);
  puStack00000004 =
       (uint *)((ulonglong)
                (double)(fVar1 + *(float *)(&DAT_0074d528 +
                                           (*(uint *)(iVar5 + 0x14) >> 0x16 & 0xff) * 4)) >> 0x20);
  iVar5 = SUB84((double)(fVar1 + *(float *)(&DAT_0074d528 +
                                           (*(uint *)(iVar5 + 0x14) >> 0x16 & 0xff) * 4)),0);
  iVar5 = FUN_00568e60(&param_2,iVar5,puStack00000004,local_8,(int)((ulonglong)dVar2 >> 0x20),
                       *(undefined4 *)(extraout_ECX + 0x28),*(undefined4 *)(extraout_ECX + 0x2c),
                       *(undefined4 *)(extraout_ECX + 0x30),*(undefined4 *)(extraout_ECX + 0x34),
                       (undefined4 *)&stack0x00000b80,(undefined4 *)&stack0x00000098,&param_1,
                       (double *)(extraout_ECX + 0x40));
  if (iVar5 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x20;
  }
  return;
}


