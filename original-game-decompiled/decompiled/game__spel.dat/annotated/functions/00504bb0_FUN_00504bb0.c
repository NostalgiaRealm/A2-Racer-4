
/* ==== FUN_00504bb0 @ 00504bb0 ==== 
 * signature: undefined4 __fastcall FUN_00504bb0(int * param_1)
 * body: 00504bb0-00504d45
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00504bb0(int *param_1)

{
  short *psVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  void *local_14;
  undefined8 local_10;
  
  local_10 = (double)_DAT_0074d628;
  pvVar6 = (void *)0x0;
  iVar8 = *(ushort *)((int)param_1 + 0x1a) - 1;
  local_14 = (void *)0x0;
  if (-1 < iVar8) {
    do {
      pvVar2 = *(void **)(param_1[7] + iVar8 * 4);
      if ((((*(int **)((int)pvVar2 + 0x2c))[0x17] << 0x10 |
           (**(int **)((int)pvVar2 + 0x2c) << 0x1c) >> 6) &
          (((*(uint **)((int)pvVar2 + 0x30))[0x17] & 0xffffff00) << 0x10 |
          (int)((**(uint **)((int)pvVar2 + 0x30) & 0xfffffffc) << 0x1c) >> 6)) == 0) {
        uVar7 = (uint)*(ushort *)((int)pvVar2 + 2);
        while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
          pvVar3 = *(void **)(*(int *)((int)pvVar2 + 4) + uVar7 * 4);
          if (*(char *)(*(int *)((int)pvVar3 + 0x40) + 0x5c) != '\x01') {
            *(int *)(*param_1 + 0x68) = *(int *)(*param_1 + 0x68) + 1;
            FUN_00505000((int)pvVar3);
          }
          if (*(float *)(*(int *)((int)pvVar3 + 0x40) + 100) < (float)local_10) {
            local_10 = (double)*(float *)(*(int *)((int)pvVar3 + 0x40) + 100);
            pvVar6 = pvVar3;
            local_14 = pvVar2;
          }
        }
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    if (pvVar6 != (void *)0x0) {
      iVar8 = 0x7c;
      do {
        iVar4 = *(int *)(*(int *)((int)pvVar6 + 0x40) + iVar8);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x22c) == 0)) {
          if (*(ushort *)(param_1 + 4) <= *(ushort *)((int)param_1 + 0x12)) {
            FUN_004f6060((ushort *)(param_1 + 4));
          }
          *(int *)(param_1[5] + (uint)*(ushort *)((int)param_1 + 0x12) * 4) = iVar4;
          *(short *)((int)param_1 + 0x12) = *(short *)((int)param_1 + 0x12) + 1;
          FUN_00504ad0(iVar4);
        }
        iVar8 = iVar8 + -4;
      } while (0x77 < iVar8);
      psVar1 = (short *)(*(int *)((int)pvVar6 + 0x40) + 0x5a);
      *psVar1 = *psVar1 + 1;
      FUN_00504790(*(void **)((int)pvVar6 + 0x40),(float *)&local_10,
                   *(float *)((int)*(void **)((int)pvVar6 + 0x40) + 0x60),pvVar6);
      puVar9 = (undefined4 *)((int)&local_10 + 4);
      iVar8 = 2;
      do {
        pbVar5 = (byte *)*puVar9;
        if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 0xc) == 0)) {
          if (*(int *)(*(int *)(pbVar5 + 0x22c) + 0x30) == 0) {
            FUN_00504af0(param_1,(int)pbVar5,local_14);
          }
          else {
            FUN_00504d50(param_1,pbVar5);
          }
        }
        puVar9 = puVar9 + -1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return 1;
    }
  }
  return 0;
}


