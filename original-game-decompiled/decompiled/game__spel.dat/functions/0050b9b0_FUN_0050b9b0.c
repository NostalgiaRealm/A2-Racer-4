
/* ==== FUN_0050b9b0 @ 0050b9b0 ==== 
 * signature: float10 __thiscall FUN_0050b9b0(void * param_1, int param_2, undefined4 param_3, undefined4 param_4, double param_5, int param_6)
 * body: 0050b9b0-0050bbeb
 */

float10 __thiscall
FUN_0050b9b0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,double param_5,
            int param_6)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined3 extraout_var;
  byte *pbVar6;
  float10 fVar7;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057396b;
  local_c = ExceptionList;
  if (param_2 == 0) {
    return (float10)0.0;
  }
  ExceptionList = &local_c;
  fVar7 = FUN_0050afb0((int)param_1,param_2,(double)CONCAT44(param_4,param_3),param_5);
  *(float *)(param_2 + 0x20) = (float)fVar7;
  pvVar5 = *(void **)((int)param_1 + 0x2b4);
  pbVar6 = (byte *)((int)param_1 + 0x288);
  uVar3 = FUN_0050fe90(pbVar6);
  pbVar4 = (byte *)FUN_005013d0(pvVar5,pbVar6,uVar3);
  if (pbVar4 == (byte *)0x0) {
    pvVar5 = operator_new(0x28);
    pbVar4 = (byte *)0x0;
    local_4 = 0;
    if (pvVar5 != (void *)0x0) {
      pbVar4 = (byte *)FUN_0050ac60((int)pvVar5);
    }
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar6;
    *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)((int)param_1 + 0x28c);
    *(undefined4 *)(pbVar4 + 8) = *(undefined4 *)((int)param_1 + 0x290);
    *(undefined4 *)(pbVar4 + 0xc) = *(undefined4 *)((int)param_1 + 0x294);
    *(undefined4 *)(pbVar4 + 0x10) = *(undefined4 *)((int)param_1 + 0x298);
    local_4 = 0xffffffff;
    if (*(ushort *)(pbVar4 + 0x20) <= *(ushort *)(pbVar4 + 0x22)) {
      FUN_004f6060((ushort *)(pbVar4 + 0x20));
    }
    *(int *)(*(int *)(pbVar4 + 0x24) + (uint)*(ushort *)(pbVar4 + 0x22) * 4) = param_2;
    *(short *)(pbVar4 + 0x22) = *(short *)(pbVar4 + 0x22) + 1;
    *(byte **)(param_2 + 8) = pbVar4;
    if (*(int *)((int)param_1 + 700) == 0) {
      *(byte **)((int)param_1 + 700) = pbVar4;
      pvVar5 = *(void **)((int)param_1 + 0x2b4);
      uVar3 = FUN_0050fe90(pbVar4);
      FUN_00501220(pvVar5,(uint)pbVar4,uVar3);
      goto LAB_0050bbd3;
    }
    while( true ) {
      iVar1 = (*(int **)((int)param_1 + 700))[3];
      if ((*(int *)(pbVar4 + 0xc) <= iVar1) &&
         (bVar2 = FUN_0050af20(*(int **)((int)param_1 + 700),(int *)pbVar4,
                               (char)iVar1 - (char)*(int *)(pbVar4 + 0xc)),
         CONCAT31(extraout_var,bVar2) != 0)) break;
      FUN_0050b550(param_1,(int *)pbVar4);
    }
    iVar1 = *(int *)((int)param_1 + 700);
    if (*(int *)(iVar1 + 0xc) == *(int *)(pbVar4 + 0xc)) {
      if (*(ushort *)(iVar1 + 0x20) <= *(ushort *)(iVar1 + 0x22)) {
        FUN_004f6060((ushort *)(iVar1 + 0x20));
      }
      *(int *)(*(int *)(iVar1 + 0x24) + (uint)*(ushort *)(iVar1 + 0x22) * 4) = param_2;
      *(short *)(iVar1 + 0x22) = *(short *)(iVar1 + 0x22) + 1;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)((int)param_1 + 700);
      if (pbVar4 != (byte *)0x0) {
        FUN_0050acb0((int)pbVar4);
        FUN_0054b339(pbVar4);
      }
      pbVar4 = *(byte **)((int)param_1 + 700);
    }
    else {
      pvVar5 = *(void **)((int)param_1 + 0x2b4);
      uVar3 = FUN_0050fe90(pbVar4);
      FUN_00501220(pvVar5,(uint)pbVar4,uVar3);
      pbVar6 = (byte *)FUN_0050b300(*(int **)((int)param_1 + 700),(int *)pbVar4);
      FUN_0050b350(param_1,pbVar6,(int *)pbVar4);
    }
  }
  else {
    if (*(ushort *)(pbVar4 + 0x20) <= *(ushort *)(pbVar4 + 0x22)) {
      FUN_004f6060((ushort *)(pbVar4 + 0x20));
    }
    *(int *)(*(int *)(pbVar4 + 0x24) + (uint)*(ushort *)(pbVar4 + 0x22) * 4) = param_2;
    *(short *)(pbVar4 + 0x22) = *(short *)(pbVar4 + 0x22) + 1;
    *(byte **)(param_2 + 8) = pbVar4;
  }
  *(int *)((int)param_1 + 0x2b0) = param_6;
  if (param_6 != 0) {
    FUN_0050b810(param_1,param_2,*(int *)((int)param_1 + 700),(int *)pbVar4);
  }
LAB_0050bbd3:
  ExceptionList = local_c;
  return (float10)(double)fVar7;
}


