
/* ==== FUN_0053b380 @ 0053b380 ==== 
 * signature: undefined __thiscall FUN_0053b380(void * this, int param_1, int param_2)
 * body: 0053b380-0053b4a9
 */

void __thiscall FUN_0053b380(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 local_24;
  double local_20;
  double local_18;
  float local_10;
  float local_c;
  float local_8;
  
  iVar6 = param_1;
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != 0) {
    piVar7 = FUN_00502820(this,&local_24,&param_1,(int *)0x0,(undefined2 *)0x1);
    if (param_1 == 1) {
      pvVar8 = (void *)(*(short *)(iVar4 + 0xc) + iVar4);
      FUN_00505cc0(pvVar8);
      piVar7[0x15] = *(int *)((int)pvVar8 + 0x54);
      piVar7[0x16] = param_2;
      piVar7[0x1a] = *(int *)((int)pvVar8 + 0x68);
      piVar7[0x1b] = *(int *)((int)pvVar8 + 0x6c);
      iVar4 = *(int *)((int)pvVar8 + 0x40);
      fVar1 = *(float *)((int)pvVar8 + 0x38);
      local_10 = *(float *)(iVar4 + 0x80) * fVar1;
      fVar2 = *(float *)((int)pvVar8 + 0x3c);
      local_c = *(float *)(iVar4 + 0x94) * fVar2 + *(float *)(iVar4 + 0x84) * fVar1;
      local_20 = (double)local_c;
      local_8 = fVar1 * *(float *)(iVar4 + 0x88) + *(float *)(iVar4 + 0x98) * fVar2;
      local_18 = (double)local_8;
      fVar5 = *(float *)(iVar4 + 0x90) * fVar2 + local_10;
      iVar4 = piVar7[0x10];
      fVar1 = *(float *)(iVar4 + 0x98);
      fVar2 = *(float *)(iVar4 + 0x94);
      fVar3 = *(float *)(iVar4 + 0x90);
      piVar7[0xe] = (int)(fVar5 * *(float *)(iVar4 + 0x80) +
                         local_c * *(float *)(iVar4 + 0x84) + local_8 * *(float *)(iVar4 + 0x88));
      piVar7[0xf] = (int)(fVar5 * fVar3 + local_c * fVar2 + local_8 * fVar1);
    }
    FUN_004f5b80(*(int **)(*(int *)(iVar6 + 0x18) + 0xb4));
  }
  return;
}


