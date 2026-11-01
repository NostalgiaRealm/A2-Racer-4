
/* ==== FUN_0053ec90 @ 0053ec90 ==== 
 * signature: undefined __thiscall FUN_0053ec90(void * this, int param_1)
 * body: 0053ec90-0053efac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053ec90(void *this,int param_1)

{
  byte *pbVar1;
  int *piVar2;
  bool bVar3;
  undefined2 uVar4;
  void *pvVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte *this_00;
  int *local_1c;
  void *local_14;
  void *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005742f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  do {
    pvVar5 = operator_new(0x50);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      local_1c = (int *)0x0;
    }
    else {
      local_1c = (int *)FUN_004f6ab0(pvVar5,*(undefined4 *)((int)this + 4));
    }
    local_4 = 0xffffffff;
    uVar8 = (uint)*(ushort *)((int)this + 0x26);
    while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      pbVar13 = *(byte **)(*(int *)((int)this + 0x28) + uVar8 * 4);
      if ((*pbVar13 & 0xc) == 0) {
        iVar7 = FUN_0053ebc0((int)pbVar13);
        if (iVar7 == param_1) {
          FUN_004f6e60(this,pbVar13);
          FUN_004f6de0(local_1c,pbVar13);
          iVar7 = FUN_004f5240(pbVar13,(uint)this);
          *(int **)(iVar7 + 8) = local_1c;
        }
      }
      else {
        puVar6 = operator_new(0xc);
        puVar11 = (undefined2 *)0x0;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          *(undefined4 *)(puVar6 + 2) = 0;
          puVar11 = puVar6;
        }
        local_4 = 0xffffffff;
        *(int **)(puVar11 + 4) = local_1c;
        FUN_004f6de0(local_1c,pbVar13);
        FUN_004f5290(pbVar13,(uint)puVar11);
      }
    }
    uVar8 = (uint)*(ushort *)((int)this + 0x36);
    while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      iVar7 = *(int *)(*(int *)((int)this + 0x38) + uVar8 * 4);
      local_14 = (void *)0x0;
      local_10 = (void *)0x0;
      pbVar13 = *(byte **)(iVar7 + 0x2c);
      pbVar1 = *(byte **)(iVar7 + 0x30);
      pbVar12 = pbVar1;
      this_00 = pbVar13;
      if (((*pbVar13 & 0xc) != 0) || (pbVar12 = pbVar13, this_00 = pbVar1, (*pbVar1 & 0xc) != 0)) {
        local_14 = (void *)FUN_004f5240(this_00,(uint)this);
        local_10 = (void *)FUN_004f5240(this_00,(uint)local_1c);
        pbVar13 = pbVar12;
      }
      iVar9 = FUN_0053ebc0((int)pbVar13);
      if (iVar9 == param_1) {
        FUN_0053eb10(this,iVar7);
        FUN_0053eae0(local_1c,iVar7);
        uVar14 = (uint)*(ushort *)(iVar7 + 2);
        while (uVar14 = uVar14 - 1, -1 < (int)uVar14) {
          bVar3 = false;
          piVar2 = *(int **)(*(int *)(iVar7 + 4) + uVar14 * 4);
          piVar10 = *(int **)((int)this + 0x20);
          if (piVar10 == (int *)0x0) {
LAB_0053ee09:
            _DAT_00000000 = 0;
          }
          else {
            do {
              if (piVar10 == piVar2) {
                bVar3 = true;
              }
              piVar10 = (int *)*piVar10;
            } while (piVar10 != (int *)0x0);
            if (!bVar3) goto LAB_0053ee09;
          }
          FUN_004f6ce0(this,piVar2);
          FUN_004f6db0(local_1c,piVar2);
          if (local_14 != (void *)0x0) {
            FUN_0053ea80(local_14,(int)piVar2);
            FUN_0051edb0(local_10,piVar2);
          }
        }
      }
    }
    uVar8 = (uint)*(ushort *)((int)this + 0x26);
    while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      pbVar13 = *(byte **)(*(int *)((int)this + 0x28) + uVar8 * 4);
      if ((*pbVar13 & 0xc) != 0) {
        puVar11 = (undefined2 *)FUN_004f5240(pbVar13,(uint)local_1c);
        puVar6 = (undefined2 *)FUN_004f5240(pbVar13,(uint)this);
        uVar4 = FUN_0053e740((int)puVar11);
        if (CONCAT22(extraout_var,uVar4) == 0) {
          FUN_004f5360(pbVar13,puVar11);
          FUN_004f6e60(local_1c,pbVar13);
        }
        uVar4 = FUN_0053e740((int)puVar6);
        if (CONCAT22(extraout_var_00,uVar4) == 0) {
          FUN_004f5360(pbVar13,puVar6);
          FUN_004f6e60(this,pbVar13);
        }
      }
    }
    if ((short)local_1c[0xf] < 2) {
      pvVar5 = *(void **)local_1c[10];
      puVar11 = (undefined2 *)FUN_004f5240(pvVar5,(uint)local_1c);
      FUN_004f5360(pvVar5,puVar11);
      if (puVar11 != (undefined2 *)0x0) {
        puVar6 = *(undefined2 **)(puVar11 + 2);
        if (puVar6 != puVar11 + 4) {
          if (puVar6 != (undefined2 *)0x0) {
            FUN_00559d4e(puVar6);
            *(undefined4 *)(puVar11 + 2) = 0;
          }
          *puVar11 = 0;
        }
        puVar11[1] = 0;
        FUN_0054b339(puVar11);
      }
      if (local_1c == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
      iVar7 = *local_1c;
LAB_0053ef95:
      (**(code **)(iVar7 + 0x18))(1);
      ExceptionList = local_c;
      return;
    }
    if (*(short *)((int)this + 0x3c) < 2) {
      pvVar5 = (void *)**(undefined4 **)((int)this + 0x28);
      puVar11 = (undefined2 *)FUN_004f5240(pvVar5,(uint)this);
      FUN_004f5360(pvVar5,puVar11);
      if (puVar11 != (undefined2 *)0x0) {
        puVar6 = *(undefined2 **)(puVar11 + 2);
        if (puVar6 != puVar11 + 4) {
          if (puVar6 != (undefined2 *)0x0) {
            FUN_00559d4e(puVar6);
            *(undefined4 *)(puVar11 + 2) = 0;
          }
          *puVar11 = 0;
        }
        puVar11[1] = 0;
        FUN_0054b339(puVar11);
      }
      if (this == (void *)0x0) {
        ExceptionList = local_c;
        return;
      }
      iVar7 = *(int *)this;
      goto LAB_0053ef95;
    }
    param_1 = FUN_0053ebe0((int)this);
    if (param_1 == 0) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


