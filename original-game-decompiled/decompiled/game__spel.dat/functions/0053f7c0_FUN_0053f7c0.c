
/* ==== FUN_0053f7c0 @ 0053f7c0 ==== 
 * signature: undefined __fastcall FUN_0053f7c0(void * param_1)
 * body: 0053f7c0-0053f8bf
 */

void __fastcall FUN_0053f7c0(void *param_1)

{
  int iVar1;
  int *piVar2;
  byte **ppbVar3;
  int iVar4;
  double *pdVar5;
  float10 fVar6;
  byte *local_20 [2];
  int local_18;
  int local_14;
  double local_10 [2];
  
  FUN_005045f0(param_1,&local_18);
  if ((*(int *)(local_18 + 8) != 0) || (*(int *)(local_14 + 8) != 0)) {
    *(uint *)((int)param_1 + 0x34) =
         CONCAT31((int3)((uint)*(undefined4 *)((int)param_1 + 0x34) >> 8),1);
  }
  piVar2 = (int *)((int)param_1 + 0x10);
  iVar4 = 2;
  ppbVar3 = local_20;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 5;
    iVar4 = iVar4 + -1;
    *ppbVar3 = *(byte **)(iVar1 + 0xa4);
    ppbVar3 = ppbVar3 + 1;
  } while (iVar4 != 0);
  if ((*local_20[0] & 0xc) != 0) {
    fVar6 = FUN_004f36b0((int)local_20[1],(float *)(*(int *)((int)param_1 + 0x40) + 0xb0));
    *(float *)((int)param_1 + 0x30) = (float)((float10)1.0 / fVar6);
    return;
  }
  if ((*local_20[1] & 0xc) != 0) {
    fVar6 = FUN_004f36b0((int)local_20[0],(float *)(*(int *)((int)param_1 + 0x40) + 0xa0));
    *(float *)((int)param_1 + 0x30) = (float)((float10)1.0 / fVar6);
    return;
  }
  pdVar5 = local_10;
  ppbVar3 = local_20;
  iVar4 = 0xa0;
  do {
    fVar6 = FUN_004f36b0((int)*ppbVar3,(float *)(*(int *)((int)param_1 + 0x40) + iVar4));
    *pdVar5 = (double)fVar6;
    iVar4 = iVar4 + 0x10;
    ppbVar3 = ppbVar3 + 1;
    pdVar5 = pdVar5 + 1;
  } while (iVar4 < 0xc0);
  *(float *)((int)param_1 + 0x30) =
       (float)((float10)1.0 /
              (((float10)local_10[1] * (float10)local_10[0]) /
              ((float10)local_10[1] + (float10)local_10[0])));
  return;
}


