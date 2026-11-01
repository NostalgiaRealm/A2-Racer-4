
/* ==== FUN_00506880 @ 00506880 ==== 
 * signature: undefined __thiscall FUN_00506880(void * this, int param_1)
 * body: 00506880-00506c40
 */

void __thiscall FUN_00506880(void *this,int param_1)

{
  void *this_00;
  byte *pbVar1;
  bool bVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  double *pdVar10;
  int local_3e8;
  double local_3e0 [16];
  double local_360 [16];
  double local_2e0 [16];
  double local_260 [16];
  double local_1e0 [12];
  double local_180 [16];
  double local_100 [16];
  double local_80 [16];
  
  *(uint *)((int)this + 0x18c) = CONCAT31((int3)((uint)*(undefined4 *)((int)this + 0x18c) >> 8),2);
  pvVar6 = *(void **)(param_1 + 4);
  this_00 = *(void **)(param_1 + 0xf4);
  if ((pvVar6 != (void *)0x0) && (pbVar1 = *(byte **)((int)pvVar6 + 0xa4), (*pbVar1 & 0xc) == 0)) {
    if (*(ushort *)((int)this + 8) <= *(ushort *)((int)this + 10)) {
      FUN_004f6060((ushort *)((int)this + 8));
    }
    *(byte **)(*(int *)((int)this + 0xc) + (uint)*(ushort *)((int)this + 10) * 4) = pbVar1;
    *(short *)((int)this + 10) = *(short *)((int)this + 10) + 1;
  }
  if ((this_00 != (void *)0x0) && (pbVar1 = *(byte **)((int)this_00 + 0xa4), (*pbVar1 & 0xc) == 0))
  {
    if (*(ushort *)((int)this + 8) <= *(ushort *)((int)this + 10)) {
      FUN_004f6060((ushort *)((int)this + 8));
    }
    *(byte **)(*(int *)((int)this + 0xc) + (uint)*(ushort *)((int)this + 10) * 4) = pbVar1;
    *(short *)((int)this + 10) = *(short *)((int)this + 10) + 1;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    pvVar8 = pvVar6;
    if (pvVar6 == (void *)0x0) {
      pvVar8 = this_00;
    }
    FUN_004f32e0((int)pvVar8);
  }
  if (pvVar6 == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_2e0);
  }
  else {
    FUN_004f2b10(pvVar6,local_2e0);
  }
  if (this_00 == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_260);
  }
  else {
    FUN_004f2b10(this_00,local_260);
  }
  FUN_004fa5b0(local_2e0,local_260,local_180);
  if (pvVar6 == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_3e0);
  }
  else {
    FUN_004f2ab0(pvVar6,local_3e0);
  }
  if (this_00 == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_360);
  }
  else {
    FUN_004f2ab0(this_00,local_360);
  }
  FUN_004fa460(local_3e0,local_180,local_100);
  FUN_004fa8b0(local_100,local_360,local_80);
  if (*(double **)(param_1 + 0x88) == (double *)0x0) {
    pdVar10 = local_3e0;
    puVar7 = (undefined4 *)((int)this + 0x70);
    for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar7 = *(undefined4 *)pdVar10;
      pdVar10 = (double *)((int)pdVar10 + 4);
      puVar7 = puVar7 + 1;
    }
    FUN_004f9e40((undefined4 *)((int)this + 0x70),1e-19);
  }
  else {
    FUN_004fa460(local_3e0,*(double **)(param_1 + 0x88),(double *)((int)this + 0x70));
    FUN_004f9e40((double *)((int)this + 0x70),1e-19);
  }
  pdVar10 = (double *)((int)this + 0xf8);
  if (*(double **)(param_1 + 0x178) == (double *)0x0) {
    FUN_004fa460((void *)((int)this + 0x70),local_80,pdVar10);
  }
  else {
    FUN_004fa460(local_360,*(double **)(param_1 + 0x178),pdVar10);
    FUN_004f9e40(pdVar10,1e-19);
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    *(undefined4 *)((int)this + 0xf4) = 0;
    *(undefined4 *)((int)this + 0x17c) = 0;
  }
  else {
    pdVar3 = operator_new(0x60);
    *(double **)((int)this + 0xf4) = pdVar3;
    FUN_004fa6e0(local_3e0,*(double **)(param_1 + 0xf0),pdVar3);
    FUN_004fa9e0(*(undefined8 **)((int)this + 0xf4));
    FUN_004fa910((void *)((int)this + 0x70),*(double **)((int)this + 0xf4),local_1e0);
    puVar4 = operator_new(0x60);
    *(undefined8 **)((int)this + 0x17c) = puVar4;
    FUN_004fa7b0(local_1e0,pdVar10,puVar4);
  }
  *(void **)((int)this + 0x178) = this_00;
  *(void **)((int)this + 0xf0) = pvVar6;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x198);
  *(undefined1 *)((int)this + 0x189) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined1 *)((int)this + 0x187) = 0;
  *(undefined1 *)((int)this + 0x186) = 0;
  FUN_005066c0((int)this);
  FUN_005067a0((int)this);
  bVar2 = false;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 0x180);
  puVar7 = (undefined4 *)((int)this + 0x34);
  puVar5 = (undefined4 *)(param_1 + 0x19c);
  iVar9 = 6;
  do {
    puVar7[6] = puVar5[6];
    *puVar7 = *puVar5;
    if (puVar5[0xc] != 0) {
      bVar2 = true;
    }
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (bVar2) {
    pvVar6 = operator_new(0x30);
    *(void **)((int)this + 0x68) = pvVar6;
    local_3e8 = 6;
    puVar7 = (undefined4 *)(param_1 + 0x1cc);
    do {
      *(undefined4 *)((int)puVar7 + *(int *)((int)this + 0x68) + (-0x1cc - param_1)) = puVar7[6];
      *(undefined4 *)((int)puVar7 + *(int *)((int)this + 0x68) + (-0x1b4 - param_1)) = *puVar7;
      local_3e8 = local_3e8 + -1;
      puVar7 = puVar7 + 1;
    } while (local_3e8 != 0);
  }
  else {
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffffc;
  return;
}


