
/* ==== FUN_00541a20 @ 00541a20 ==== 
 * signature: undefined __stdcall FUN_00541a20(int * param_1)
 * body: 00541a20-00541bcd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541a20(int *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int extraout_ECX;
  int iVar4;
  undefined1 *puVar5;
  int *piStack00000004;
  undefined8 in_stack_00000000;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  double dStack00000060;
  double dStack00000068;
  double dStack00000070;
  undefined **local_8;
  
  FUN_00559400();
  puVar5 = &stack0x00000bd0;
  iVar4 = 0x15;
  do {
    FUN_0043e110(puVar5);
    puVar5 = puVar5 + 0x80;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piStack00000004 = (int *)((ulonglong)in_stack_00000000 >> 0x20);
  FUN_00542c90(&stack0x00000b68,piStack00000004);
  puVar5 = &stack0x000000e8;
  iVar4 = 0x15;
  do {
    FUN_0043e110(puVar5);
    puVar5 = puVar5 + 0x80;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00542c90(&stack0x00000080,param_1);
  local_8 = &PTR_DAT_00578ce0;
  uStack00000020 = 0;
  *(undefined4 *)(extraout_ECX + 0x40) = *(undefined4 *)(extraout_ECX + 0x30);
  *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(extraout_ECX + 0x34);
  dStack00000060 = *(double *)(param_1 + 0x24) - *(double *)(piStack00000004 + 0x24);
  uStack00000024 = 0;
  uStack00000028 = 0;
  uStack0000002c = 0;
  dStack00000068 = *(double *)(param_1 + 0x26) - *(double *)(piStack00000004 + 0x26);
  uStack00000030 = 0;
  uStack00000034 = 0;
  uStack00000040 = 0;
  uStack00000044 = 0;
  dStack00000070 = *(double *)(param_1 + 0x28) - *(double *)(piStack00000004 + 0x28);
  uStack00000048 = 0;
  uStack0000004c = 0;
  uStack00000050 = 0;
  uStack00000054 = 0;
  FUN_004f9870(&stack0x00000060);
  fVar1 = *(float *)(*(int *)(extraout_ECX + 0x20) + 0x50);
  dVar2 = (double)(fVar1 * 0.5 + _DAT_0074d520);
  dVar3 = (double)(fVar1 + *(float *)(&DAT_0074d528 +
                                     (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff
                                     ) * 4));
  iVar4 = FUN_00568e60(&local_8,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),
                       (int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(extraout_ECX + 0x28),
                       *(undefined4 *)(extraout_ECX + 0x2c),*(undefined4 *)(extraout_ECX + 0x30),
                       *(undefined4 *)(extraout_ECX + 0x34),(undefined4 *)&stack0x00000b68,
                       (undefined4 *)&stack0x00000080,(double *)0x0,(double *)(extraout_ECX + 0x40))
  ;
  if (iVar4 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x10;
  }
  return;
}


