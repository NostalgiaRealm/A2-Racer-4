
/* ==== FUN_004fc310 @ 004fc310 ==== 
 * signature: undefined __thiscall FUN_004fc310(void * this, int param_1, float param_2)
 * body: 004fc310-004fc3c7
 */

void __thiscall FUN_004fc310(void *this,int param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar3 = *(int *)((int)this + 0x3c);
  iVar4 = *(int *)(iVar3 + 0x80);
  iVar5 = *(int *)(*(int *)(iVar3 + 0xa0) + param_1 * 4);
  local_28 = *(undefined8 *)(iVar5 + 0x68);
  local_20 = *(undefined8 *)(iVar5 + 0x70);
  uVar2 = *(undefined8 *)(iVar5 + 0x78);
  *(undefined4 *)(&local_48 + iVar4) = 0;
  local_18 = uVar2;
  *(undefined4 *)((int)&local_48 + iVar4 * 8 + 4) = 0;
  (&local_48)[*(int *)(iVar3 + 0x84)] = (double)param_2;
  fVar1 = *(float *)((int)this + param_1 * 4 + 0xd8);
  iVar4 = *(int *)(iVar3 + 0x88);
  *(undefined4 *)(&local_48 + iVar4) = 0;
  *(undefined4 *)((int)&local_48 + iVar4 * 8 + 4) = 0;
  if (fVar1 < 0.0) {
    (&local_48)[*(int *)(iVar3 + 0x84)] =
         (double)(&local_48)[*(int *)(iVar3 + 0x84)] + 3.141592653589793;
  }
  FUN_004fa310((double *)(iVar5 + 8),(double *)&local_48,1.0);
  *(undefined8 *)(iVar5 + 0x68) = local_28;
  *(undefined8 *)(iVar5 + 0x70) = local_20;
  *(undefined8 *)(iVar5 + 0x78) = local_18;
  return;
}


