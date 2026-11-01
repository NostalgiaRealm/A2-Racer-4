
/* ==== FUN_004f3810 @ 004f3810 ==== 
 * signature: undefined __fastcall FUN_004f3810(uint * param_1)
 * body: 004f3810-004f39b5
 */

void __fastcall FUN_004f3810(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *this;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  void *this_00;
  undefined1 local_e0 [128];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  FUN_004f4a60(param_1);
  FUN_004f5b80(*(int **)(param_1[3] + 0xb4));
  if ((*param_1 & 0xc) == 0) {
    if (0x8000000 < (int)(param_1[0x17] * 0x1000000)) {
      param_1[0x17] = CONCAT31((int3)(param_1[0x17] >> 8),8);
    }
    uVar7 = (uint)(char)param_1[0x17];
  }
  else {
    uVar7 = 0x10;
    param_1[0x17] = param_1[0x17] & 0xffffff08 | 8;
  }
  uVar6 = (uint)*(ushort *)((int)param_1 + 0x4e);
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    iVar1 = *(int *)(param_1[0x14] + uVar6 * 4);
    uVar2 = *(uint *)(iVar1 + 0x80);
    *(uint *)(iVar1 + 0x80) = (uVar2 ^ uVar7) & 0xff ^ uVar2;
  }
  if ((*param_1 & 0xc) == 0) {
    FUN_004f5390((byte *)param_1);
    uVar7 = (uint)*(ushort *)((int)param_1 + 0x4e);
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      piVar5 = *(int **)(*(int *)(param_1[0x14] + uVar7 * 4) + 0x28);
      if (piVar5 != (int *)0x0) {
        this = *(int **)((short)piVar5[3] + 0x70 + (int)piVar5);
        do {
          piVar3 = *(int **)((short)piVar5[3] + 0x70 + (int)piVar5);
          this_00 = (void *)((int)(short)piVar5[3] + (int)piVar5);
          if (piVar3 != this) {
            FUN_0053e970(this,piVar3);
          }
          FUN_00402d00(local_60,0x10,2,FUN_0043e110);
          FUN_00402d00(local_40,0x10,2,FUN_0043e110);
          FUN_00402d00(local_20,0x10,2,FUN_0043e110);
          FUN_004f5430((int)local_e0);
          FUN_00505cc0(this_00);
          FUN_00504690(this_00,(int)local_e0);
          FUN_0053f7c0(this_00);
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)0x0);
      }
    }
    FUN_004f5b80(*(int **)(param_1[3] + 0xb4));
    return;
  }
  FUN_004f4670(param_1);
  FUN_004f3750((byte *)param_1);
  uVar7 = (uint)*(ushort *)((int)param_1 + 0x4e);
  if (-1 < (int)(uVar7 - 1)) {
    piVar5 = (int *)(param_1[0x14] + (uVar7 - 1) * 4);
    do {
      for (puVar4 = *(undefined4 **)(*piVar5 + 0x28); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
      }
      piVar5 = piVar5 + -1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}


