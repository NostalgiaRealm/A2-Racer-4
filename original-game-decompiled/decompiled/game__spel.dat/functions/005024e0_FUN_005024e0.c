
/* ==== FUN_005024e0 @ 005024e0 ==== 
 * signature: undefined __cdecl FUN_005024e0(undefined4 param_1, int param_2)
 * body: 005024e0-00502691
 */

void __cdecl FUN_005024e0(undefined4 param_1,int param_2)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = (uint)*(ushort *)(param_2 + 2);
  while (uVar4 = uVar4 - 1, 1 < (int)uVar4) {
    pdVar1 = *(double **)(*(int *)(param_2 + 4) + uVar4 * 4);
    fVar2 = *(float *)(pdVar1 + 5) - *(float *)(pdVar1 + 3);
    iVar3 = 100;
    while (fVar2 < 0.0) {
      (**(code **)(**(int **)((uint)*(ushort *)((int)pdVar1 + 0x2e) * 0x10 + 0xc +
                             *(int *)((int)pdVar1 + 0x24)) + 4))(pdVar1,fVar2);
      if (iVar3 < 0) break;
      iVar3 = iVar3 + -1;
      fVar2 = *(float *)(pdVar1 + 5) - *(float *)(pdVar1 + 3);
    }
    if ((double)*(int *)((int)pdVar1 + 0x1c) < *pdVar1) {
      FUN_0053cd60((int)pdVar1);
      lVar5 = __ftol();
      *(int *)((int)pdVar1 + 0x1c) = (int)lVar5;
    }
  }
  if (uVar4 == 1) {
    pdVar1 = *(double **)(*(int *)(param_2 + 4) + 4);
    fVar2 = *(float *)(pdVar1 + 5) - *(float *)(pdVar1 + 3);
    iVar3 = 100;
    while (fVar2 < 0.0) {
      (**(code **)(**(int **)((uint)*(ushort *)((int)pdVar1 + 0x2e) * 0x10 + 0xc +
                             *(int *)((int)pdVar1 + 0x24)) + 4))(pdVar1,fVar2);
      if (iVar3 < 0) break;
      iVar3 = iVar3 + -1;
      fVar2 = *(float *)(pdVar1 + 5) - *(float *)(pdVar1 + 3);
    }
    if ((double)*(int *)((int)pdVar1 + 0x1c) < *pdVar1) {
      FUN_0053cd60((int)pdVar1);
      lVar5 = __ftol();
      *(int *)((int)pdVar1 + 0x1c) = (int)lVar5;
    }
  }
  else if (uVar4 != 0) {
    return;
  }
  pdVar1 = (double *)**(undefined4 **)(param_2 + 4);
  fVar2 = *(float *)(pdVar1 + 5) - *(float *)(pdVar1 + 3);
  iVar3 = 100;
  while (fVar2 < 0.0) {
    (**(code **)(**(int **)((uint)*(ushort *)((int)pdVar1 + 0x2e) * 0x10 + 0xc +
                           *(int *)((int)pdVar1 + 0x24)) + 4))(pdVar1,fVar2);
    if (iVar3 < 0) break;
    iVar3 = iVar3 + -1;
    fVar2 = *(float *)(pdVar1 + 5) - *(float *)(pdVar1 + 3);
  }
  if ((double)*(int *)((int)pdVar1 + 0x1c) < *pdVar1) {
    FUN_0053cd60((int)pdVar1);
    lVar5 = __ftol();
    *(int *)((int)pdVar1 + 0x1c) = (int)lVar5;
  }
  return;
}


