
/* ==== FUN_0053cae0 @ 0053cae0 ==== 
 * signature: uint * __cdecl FUN_0053cae0(uint param_1, double * param_2)
 * body: 0053cae0-0053cbbf
 */

uint * __cdecl FUN_0053cae0(uint param_1,double *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float local_14 [4];
  
  puVar1 = (uint *)(param_1 & 0xfffffff0) + ((*(uint *)(param_1 & 0xfffffff0) & 0xfff) + 1) * -4;
  uVar3 = puVar1[3];
  FUN_00559400();
  puVar7 = (undefined4 *)&stack0xffffffe0;
  for (uVar2 = (uint)(int)(short)uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = (int)(short)uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar6 = puVar1 + (*(uint *)(param_1 & 0xfffffff0) >> 0xc & 0xfff) * 4 + 5;
  do {
    (&stack0xffffffe0)[*(uint *)((uint)puVar6 & 0xfffffff0) & 0xfff] = 1;
    FUN_005094e0((int *)puVar1,(uint)puVar6,param_2,(int)local_14);
    iVar5 = 0;
    pfVar8 = local_14;
    puVar4 = puVar6;
    while ((0.0 < *pfVar8 ||
           ((&stack0xffffffe0)
            [*(uint *)((uint)(puVar4 + ((int)(*puVar4 << 1) >> 0x11)) & 0xfffffff0) & 0xfff] != '\0'
           ))) {
      pfVar8 = pfVar8 + 1;
      puVar4 = (uint *)((int)puVar4 + *(int *)(&DAT_005b99bc + ((uint)puVar4 & 0xc)));
      iVar5 = iVar5 + 1;
      if (2 < iVar5) {
        return puVar6;
      }
    }
    puVar6 = puVar4 + ((int)(*puVar4 << 1) >> 0x11);
  } while( true );
}


