
/* ==== FUN_004a2d70 @ 004a2d70 ==== 
 * signature: undefined __thiscall FUN_004a2d70(void * this, float * param_1, float * param_2)
 * body: 004a2d70-004a2e22
 */

void __thiscall FUN_004a2d70(void *this,float *param_1,float *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c [3];
  undefined4 local_80 [16];
  float local_40 [16];
  
  FUN_004a1b50(this,param_1,param_2);
  puVar1 = (undefined4 *)FUN_004a1e20(this,local_40);
  puVar4 = local_80;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)((int)this + 0x34);
  pfVar5 = (float *)((int)this + 0x44);
  iVar3 = 4;
  do {
    pfVar2 = (float *)FUN_004a5b30(local_8c,pfVar5,(int)local_80);
    local_98 = *pfVar2 + *param_1;
    local_94 = pfVar2[1] + param_1[1];
    local_90 = pfVar2[2] + param_1[2];
    (**(code **)(*(int *)*puVar1 + 0xc))(&local_98,param_2);
    puVar1 = puVar1 + 1;
    pfVar5 = pfVar5 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


