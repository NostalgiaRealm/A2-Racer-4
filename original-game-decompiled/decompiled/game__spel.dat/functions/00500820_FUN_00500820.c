
/* ==== FUN_00500820 @ 00500820 ==== 
 * signature: undefined __thiscall FUN_00500820(void * this, int param_1, ushort * param_2)
 * body: 00500820-00500abd
 */

void __thiscall FUN_00500820(void *this,int param_1,ushort *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_20;
  
  *(void **)(param_1 + 0x14) = this;
  uVar8 = (uint)*(ushort *)((int)this + 0x1e);
  uVar10 = (uint)*(ushort *)((int)this + 0xe);
  local_20 = 0;
  pdVar1 = (double *)(*(int *)(param_1 + 0x10) + 0x120);
  dVar7 = *pdVar1;
  dVar3 = *pdVar1;
  while (uVar10 = uVar10 - 1, 0 < (int)uVar10) {
    iVar4 = *(int *)(*(int *)((int)this + 0x10) + uVar10 * 4);
    dVar2 = *(double *)(iVar4 + 0x68);
    FUN_004f8b00((void *)(iVar4 + 0x108),(double *)(iVar4 + 0x128));
    FUN_00500b70((void *)(iVar4 + 0x188),(double *)(iVar4 + 0xb8),(float *)(iVar4 + 0xd8),
                 dVar3 - dVar2);
    FUN_004f44c0(iVar4);
    *(undefined2 *)(iVar4 + 0x60) = 0;
    *(uint *)(iVar4 + 0x5c) =
         CONCAT22((short)((uint)*(undefined4 *)(iVar4 + 0x5c) >> 0x10),
                  (ushort)(byte)*(undefined4 *)(iVar4 + 0x5c));
    local_20 = local_20 |
               (uint)(1.0 - (*(float *)(iVar4 + 0xac) * *(float *)(iVar4 + 0xac) +
                            *(float *)(iVar4 + 0xa8) * *(float *)(iVar4 + 0xa8) +
                            *(float *)(iVar4 + 0xa4) * *(float *)(iVar4 + 0xa4)));
  }
  iVar4 = **(int **)((int)this + 0x10);
  dVar3 = *(double *)(iVar4 + 0x68);
  FUN_004f8b00((void *)(iVar4 + 0x108),(double *)(iVar4 + 0x128));
  FUN_00500b70((void *)(iVar4 + 0x188),(double *)(iVar4 + 0xb8),(float *)(iVar4 + 0xd8),
               dVar7 - dVar3);
  FUN_004f44c0(iVar4);
  *(uint *)(iVar4 + 0x5c) =
       CONCAT22((short)((uint)*(undefined4 *)(iVar4 + 0x5c) >> 0x10),
                (ushort)(byte)*(undefined4 *)(iVar4 + 0x5c));
  iVar9 = 0;
  *(undefined2 *)(iVar4 + 0x60) = 0;
  if ((int)((uint)(1.0 - (*(float *)(iVar4 + 0xac) * *(float *)(iVar4 + 0xac) +
                         *(float *)(iVar4 + 0xa8) * *(float *)(iVar4 + 0xa8) +
                         *(float *)(iVar4 + 0xa4) * *(float *)(iVar4 + 0xa4))) | local_20) < 0) {
    *(uint *)this = *(uint *)this & 0xfffff7ff | 0x400;
  }
  else {
    uVar10 = *(uint *)this;
    uVar10 = ((int)(uVar10 << 0x14) >> 0x12 ^ uVar10) & 0x3000 ^ uVar10;
    *(uint *)this = uVar10;
    if ((uVar10 & 0x3000) != 0) {
      FUN_00500650((int)this);
    }
    *(uint *)this = *(uint *)this & 0xfffff3ff;
    uVar11 = FUN_004f7ec0(*(int *)(param_1 + 0x10));
    iVar9 = (int)uVar11;
  }
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    puVar5 = *(undefined4 **)(*(int *)((int)this + 0x20) + uVar8 * 4);
    (**(code **)(*(int *)*puVar5 + 0x10))(param_1,puVar5 + 1);
  }
  uVar8 = (uint)*(ushort *)((int)this + 0xe);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    uVar6 = *(undefined4 *)(*(int *)((int)this + 0x10) + uVar8 * 4);
    if (*param_2 <= param_2[1]) {
      FUN_004f6060(param_2);
    }
    *(undefined4 *)(*(int *)(param_2 + 2) + (uint)param_2[1] * 4) = uVar6;
    param_2[1] = param_2[1] + 1;
  }
  if (iVar9 == 1) {
    FUN_00500760(this,*(int *)(param_1 + 0x10));
  }
  uVar8 = (uint)*(ushort *)((int)this + 0xe);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    iVar4 = *(int *)(*(int *)((int)this + 0x10) + uVar8 * 4);
    uVar10 = (uint)*(ushort *)(iVar4 + 0x4e);
    while (uVar10 = uVar10 - 1, -1 < (int)uVar10) {
      FUN_004f2840(*(int *)(*(int *)(iVar4 + 0x50) + uVar10 * 4));
    }
  }
  if ((*(uint *)this & 0x300) != 0) {
    FUN_00500740(this);
  }
  FUN_004f5b80(*(int **)(*(int *)(param_1 + 0x10) + 0xb4));
  return;
}


