
/* ==== FUN_00425850 @ 00425850 ==== 
 * signature: undefined __thiscall FUN_00425850(void * this, int param_1)
 * body: 00425850-00425a3a
 */

void __thiscall FUN_00425850(void *this,int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float afStack_48 [18];
  
  *(undefined4 *)((int)this + param_1 * 0x48 + 0x44) = 2;
  iVar4 = *(int *)((int)this + param_1 * 0x48 + 0x10);
  iVar3 = *(int *)((int)this + 0xe18);
  for (iVar5 = *(int *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x44 + DAT_00715e50); iVar5 != iVar4;
      iVar5 = *(int *)(iVar5 * 0xf0 + 0x44 + DAT_00715e50)) {
    iVar3 = iVar5;
  }
  iVar4 = iVar4 * 0xf0;
  *(undefined4 *)(iVar3 * 0xf0 + 0x44 + DAT_00715e50) = *(undefined4 *)(iVar4 + 0x44 + DAT_00715e50)
  ;
  *(undefined4 *)(iVar4 + 0x48 + DAT_00715e50) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x44 + DAT_00715e50) = 0xffffffff;
  FUN_00425800(*(int *)((int)this + 0xe18));
  if (*(int *)((int)this + param_1 * 0x48 + 0x4c) != 0) {
    *(undefined4 *)(iVar4 + 0x5c + DAT_00715e50) = 0;
    return;
  }
  iVar3 = DAT_0073b0d0 + *(int *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  pfVar1 = (float *)FUN_004b42a0(&local_4c,(float *)((int)this + param_1 * 0x48 + 0x20),iVar3 + 0x10
                                );
  local_58 = *(float *)(iVar3 + 0x50) + *pfVar1;
  local_54 = *(float *)(iVar3 + 0x54) + pfVar1[1];
  local_50 = *(float *)(iVar3 + 0x58) + pfVar1[2];
  (**(code **)(**(int **)(iVar4 + 0x10 + DAT_00715e50) + 0x10))
            (&local_58,(int)this + param_1 * 0x48 + 0x2c);
  FUN_004f21f0(*(void **)(*(int *)(iVar4 + 0x10 + DAT_00715e50) + 8),1);
  FUN_004f32e0(*(int *)(*(int *)(iVar4 + 0x10 + DAT_00715e50) + 8));
  iVar5 = DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1e20(*(void **)(iVar4 + 0x10 + DAT_00715e50),afStack_48);
  puVar6 = (undefined4 *)(iVar5 + 0x10);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1dd0(*(void **)(iVar4 + 0x10 + DAT_00715e50),&local_54);
  *(undefined4 *)(iVar3 + 0x50) = *puVar2;
  *(undefined4 *)(iVar3 + 0x54) = puVar2[1];
  *(undefined4 *)(iVar3 + 0x58) = puVar2[2];
  return;
}


